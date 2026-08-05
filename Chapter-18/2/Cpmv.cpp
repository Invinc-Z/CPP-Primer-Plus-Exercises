#include "Cpmv.h"
#include <iostream>
#include <utility>

Cpmv::Cpmv()
    : pi(new Info)
{
    std::cout << "Default constructor\n";
}
Cpmv::Cpmv(std::string q, std::string z)
    : pi(new Info{std::move(q), std::move(z)})
{
    std::cout << "String constructor\n";
}
Cpmv::Cpmv(const Cpmv & cp)
    : pi(cp.pi ? new Info(*cp.pi) : nullptr)
{
    std::cout << "Copy constructor\n";
}
Cpmv::Cpmv(Cpmv && mv) noexcept
    : pi(mv.pi)
{
    mv.pi = nullptr;
    std::cout << "Move constructor\n";
}
Cpmv::~Cpmv()
{
    std::cout << "Destructor\n";
    delete pi;
}
Cpmv& Cpmv::operator=(const Cpmv & cp)
{
    std::cout << "Copy assignment\n";
    if (this != &cp) {
        Info *replacement = cp.pi ? new Info(*cp.pi) : nullptr;
        delete pi;
        pi = replacement;
    }
    return *this;
}
Cpmv& Cpmv::operator=(Cpmv && mv) noexcept
{
    std::cout << "Move assignment\n";
    if (this != &mv) {
        delete pi;
        pi = mv.pi;
        mv.pi = nullptr;
    }
    return *this;
}
Cpmv Cpmv::operator+(const Cpmv & obj) const
{
    std::cout << "operator+\n";
    const std::string left_q = pi ? pi->qcode : "";
    const std::string left_z = pi ? pi->zcode : "";
    const std::string right_q = obj.pi ? obj.pi->qcode : "";
    const std::string right_z = obj.pi ? obj.pi->zcode : "";
    return Cpmv(left_q + right_q, left_z + right_z);
}
void Cpmv::Display() const
{
    if (pi) {
        std::cout << "qcode: " << pi->qcode << ", zcode: " << pi->zcode << '\n';
    } else {
        std::cout << "(moved-from object)\n";
    }
}

