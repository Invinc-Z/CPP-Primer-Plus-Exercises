#include "Tv.h"

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        ++volume;
        return true;
    }
    return false;
}

bool Tv::voldown()
{
    if (volume > MinVal)
    {
        --volume;
        return true;
    }
    return false;
}

void Tv::chanup()
{
    channel = channel < maxchannel ? channel + 1 : 1;
}

void Tv::chandown()
{
    channel = channel > 1 ? channel - 1 : maxchannel;
}

void Tv::toggle_remote_mode(Remote & r)
{
    if (ison())
        r.remote_mode = r.remote_mode == Remote::Normal
                            ? Remote::Interactive
                            : Remote::Normal;
}

void Tv::settings() const
{
    std::cout << "TV is " << (state == On ? "on" : "off") << '\n';
    if (state == On)
    {
        std::cout << "Volume = " << volume << '\n'
                  << "Channel = " << channel << '\n'
                  << "Mode = " << (mode == Antenna ? "antenna" : "cable") << '\n'
                  << "Input = " << (input == TV ? "TV" : "DVD") << '\n';
    }
}
