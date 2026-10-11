# Runs one exercise executable with INPUT on stdin and compares stdout with EXPECTED.
# Usage: cmake -DEXE=<exe> -DINPUT=<file.in> -DEXPECTED=<file.out> -P RunTest.cmake

function(normalize var)
    set(text "${${var}}")
    string(REPLACE "\r\n" "\n" text "${text}")
    string(REGEX REPLACE "[ \t]+\n" "\n" text "${text}")
    string(STRIP "${text}" text)
    set(${var} "${text}" PARENT_SCOPE)
endfunction()

# Write output to a file and read only the start of it, so a program stuck in an
# infinite loop cannot flood memory before the timeout kills it.
string(MD5 id "${INPUT}")
set(actual_file "${EXE}.${id}.actual")

execute_process(
    COMMAND "${EXE}"
    INPUT_FILE "${INPUT}"
    OUTPUT_FILE "${actual_file}"
    RESULT_VARIABLE rc
    TIMEOUT 2)

file(READ "${actual_file}" actual LIMIT 65536)
file(REMOVE "${actual_file}")
file(READ "${EXPECTED}" expected)

normalize(actual)
normalize(expected)

if(NOT rc EQUAL 0)
    message(FATAL_ERROR "Program failed (${rc})\n--- expected ---\n${expected}\n--- actual ---\n${actual}")
endif()

if(NOT actual STREQUAL expected)
    message(FATAL_ERROR "Output mismatch\n--- expected ---\n${expected}\n--- actual ---\n${actual}")
endif()
