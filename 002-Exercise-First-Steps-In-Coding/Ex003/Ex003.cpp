#include <iomanip>
#include <iostream>

int main()
{
    double deposited_amount, annual_interest_rate;
    int deposit_period;

    std::cin >> deposited_amount >> deposit_period >> annual_interest_rate;

    const double monthly_interest_rate = annual_interest_rate / 100 / 12;
    const double final_amount = deposited_amount + deposit_period * (deposited_amount * monthly_interest_rate);

    std::cout << std::fixed << std::setprecision(2) << final_amount << '\n';

    return 0;
}
