#include <iostream>

int main()
{
    int hr, min, sec;
    std::cout << "Enter time: ";
    std::cin >> hr >> min >> sec;

    if (hr >= 24 || min >= 60 || sec >= 60 || hr < 0 || min < 0 || sec < 0)
    {
        std::cout << "invalid input " << '\n';
        return 1;
    }

    int time_tell_midnight{86400 - (hr * 3600 + min * 60 + sec)};
    int hr_tell_mid{time_tell_midnight / 3600};
    int min_tell_mid{(time_tell_midnight % 3600) / 60};
    int sec_tell_mid{time_tell_midnight % 60};

    std::cout << hr_tell_mid << " hours " << min_tell_mid << " minutes " << sec_tell_mid << " seconds tell midnight" << '\n';

    return 0;
}