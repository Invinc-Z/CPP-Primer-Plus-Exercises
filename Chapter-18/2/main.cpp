#include "Cpmv.h"
#include <utility>

int main()
{
    Cpmv empty;
    Cpmv first("Q1", "Z1");
    Cpmv second("Q2", "Z2");
    Cpmv copied(first);
    Cpmv moved(std::move(second));

    empty = copied;
    Cpmv assigned("old-q", "old-z");
    assigned = std::move(moved);

    Cpmv combined = first + assigned;
    empty.Display();
    second.Display();
    assigned.Display();
    combined.Display();
}
