#include <iostream>

bool isValidDate(int month, int day)
{
    if (month < 1 || month > 12)
    {
        return false;
    }

    if (day < 1)
    {
        return false;
    }
    else
    {
        switch (month)
        {
        case 1:
            if (day > 31)
            {
                return false;
            }
            break;
        case 2:
            if (day > 29)
            {
                return false;
            }
            break;
        case 3:
            if (day > 31)
            {
                return false;
            }
            break;
        case 4:
            if (day > 30)
            {
                return false;
            }
            break;
        case 5:
            if (day > 31)
            {
                return false;
            }
        case 6:
            if (day > 30)
                return false;
            break;
        case 7:
            if (day > 31)
            {
                return false;
            }
            break;
        case 8:
            if (day > 31)
            {
                return false;
            }
            break;
        case 9:
            if (day > 30)
            {
                return false;
            }
            break;
        case 10:
            if (day > 31)
            {
                return false;
            }
            break;
        case 11:
            if (day > 30)
            {
                return false;
            }
        case 12:
            if (day > 31)
            {
                return false;
            }
            break;
        default:
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int month, day{};
    std::cout << "Enter Date Month/Day: ";
    std::cin >> month >> day;

    int days_in_feb{};
    if (month == 2)
    {
        // Prompt the user to enter the number of days in February
        std::cout << "Enter the number of days in February (28 or 29): ";
        std::cin >> days_in_feb;
    }

    while (!isValidDate(month, day))
    {
        std::cout << "Enter again a valid date: ";
        std::cin >> month >> day;
    }

    std::cout << "Adding 50 days to the date " << month << "/" << day << '\n';
    int added_days{50};

    for (int i = 0; i < added_days; i++)
    {
        switch (month)
        {
        case 1:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 2:
            if (day == days_in_feb)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 3:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 4:
            if (day == 30)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 5:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 6:
            if (day == 30)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 7:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 8:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 9:
            if (day == 30)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 10:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 11:
            if (day == 30)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        case 12:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
            {
                day++;
            }
            break;
        default:
            std::cout << "Unexpected error!" << '\n';
            break;
        }
    }

    std::cout << "After 50 days, the date is: " << month << "/" << day << std::endl;

    return 0;
}