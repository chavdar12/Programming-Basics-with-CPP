#include <iostream>
#include <string>
#include <map>

int main()
{
    int degrees;
    std::string time_of_day;

    std::cin >> degrees >> time_of_day;

    std::map<std::string, std::pair<std::string, std::string>> outfits;

    outfits["Morning"] = (degrees >= 25) ? std::make_pair("T-Shirt", "Sandals") : std::make_pair("Shirt", "Moccasins");
    outfits["Afternoon"] = (degrees >= 25)
                               ? std::make_pair("Swim Suit", "Barefoot")
                               : (degrees > 18)
                               ? std::make_pair("T-Shirt", "Sandals")
                               : std::make_pair("Shirt", "Moccasins");
    outfits["Evening"] = std::make_pair("Shirt", "Moccasins");

    const std::string outfit = outfits[time_of_day].first;
    const std::string shoes = outfits[time_of_day].second;

    std::cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << '\n';

    return 0;
}
