#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

int main()
{
    std::string currency;
    std::string newcurrency;
    std::string confirmation;
    int amount = 0;
    double converted = 0;

    std::cout << "What type of currency do you want to convert?" << std::endl;
    std::cin >> currency;

    for (char& c : currency)
    {
        c = std::tolower(c);
    }

    std::cout << std::endl << std::endl;
    std::cout << "How much money do you want to convert?" << std::endl;
    std::cin >> amount;

    std::cout << std::endl << std::endl;
    std::cout << "What currency would you like to convert to?" << std::endl;
    std::cin >> newcurrency;

    for (char& c : newcurrency)
    {
        c = std::tolower(c);
    }

    std::cout << std::endl << std::endl;
    std::cout << "You want to convert " << amount << " in " << currency << " to " << newcurrency << ". Confirm yes or no." << std::endl;
    std::cin >> confirmation;

    for (char& c : confirmation)
    {
        c = std::tolower(c);
    }

    double dollar = 0;

    if (confirmation == "yes")
    {
        if (currency == "euro")
            dollar = amount * 1.09;
        else if (currency == "pounds")
            dollar = amount * 1.28;
        else if (currency == "franc")
            dollar = amount * 1.14;
        else if (currency == "yen")
            dollar = amount * 0.0068;
        else
            std::cout << "Sorry we do not carry that type of currency." << std::endl << std::endl;
    }
    else if (confirmation == "no")
    {
        std::cout << "Sorry please try again!" << std::endl << std::endl;
    }
    else
    {
        std::cout << "Invalid input!" << std::endl << std::endl;
    }

    
    if (newcurrency == "euro")
        converted = dollar * .92;
    else if (newcurrency == "pounds")
        converted = dollar * .78;
    else if (newcurrency == "franc")
        converted = dollar * .88;
    else if (newcurrency == "yen")
        converted = dollar * 147.40;

    std::cout << std::endl << std::endl;
    std::cout << "When converting " << amount << " of " << currency << " to " << newcurrency << " you get " << converted << "!" << std::endl << std::endl;

    return 0;
}
