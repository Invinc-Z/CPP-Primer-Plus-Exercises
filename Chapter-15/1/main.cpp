#include "Tv.h"

int main()
{
    Tv tv;
    Remote remote;

    remote.show_mode();

    // Nothing changes because the TV is off.
    tv.toggle_remote_mode(remote);
    remote.show_mode();

    remote.onoff(tv);
    tv.toggle_remote_mode(remote);
    remote.show_mode();

    tv.toggle_remote_mode(remote);
    remote.show_mode();

    return 0;
}
