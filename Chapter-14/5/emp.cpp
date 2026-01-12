#include "emp.h"
using std::cout;
using std::endl;
using std::cin;

abstr_emp::abstr_emp()
    : fname(""), lname(""), job("")
{
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
    : fname(fn), lname(ln), job(j) 
{
}

void abstr_emp::ShowAll() const
{
    Data();
}

void abstr_emp::SetAll()
{
    Get();
}
abstr_emp::~abstr_emp()//  base class
{

}

void abstr_emp::Data() const
{
    cout << "first name: " << fname << endl;
    cout << "last name: " << lname << endl;
    cout << "job: " << job << endl;
}

void abstr_emp::Get()
{
    cout << "Enter the first name: ";
    getline(cin, fname);
    cout << "Enter the last name: ";
    getline(cin, lname);
    cout << "Enter the job: ";
    getline(cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << e.fname << " " << e.lname << endl;
    return os;
}

void employee::ShowAll() const
{
    abstr_emp::Data();
    Data();
}

void employee::SetAll()
{
    abstr_emp::Get();
    Get();
}
std::ostream & operator<<(std::ostream & os, const employee & e)
{
    os << (const abstr_emp &)e;
    return os;
}

void employee::Data() const
{
}

void employee::Get()
{
}

void manager::ShowAll() const
{
    abstr_emp::Data();
    Data();
}

void manager::SetAll()
{
    abstr_emp::Get();
    Get();
}
std::ostream & operator<<(std::ostream & os, const manager & e)
{
    os << (const abstr_emp &)e;
    return os;
}

void manager::Data() const
{
    cout << "the number of employee of managed: " << InChargeOf() << endl;
}

void manager::Get()
{
    cout << "Enter the number of employee of managed: ";
    cin >> this->InChargeOf();
    while(cin.get() != '\n')
        continue;
}
void fink::ShowAll() const
{
    abstr_emp::Data();
    Data();
}

void fink::SetAll()
{
    abstr_emp::Get();
    Get();
}
std::ostream & operator<<(std::ostream & os, const fink & e)
{
    os << (const abstr_emp &)e;
    return os;
}

void fink::Data() const
{
    cout << "to whom fink reports: " << ReportsTo() << endl;
}

void fink::Get()
{
    cout << "to whom fink reports: ";
    getline(cin, ReportsTo());
}

void highfink::ShowAll() const
{
    abstr_emp::Data();
    Data();
}

void highfink::SetAll()
{
    abstr_emp::Get();
    Get();
}
std::ostream & operator<<(std::ostream & os, const highfink & e)
{
    os << (const abstr_emp &)e;
    return os;
}

void highfink::Data() const
{
    manager::Data();
    fink::Data();
}

void highfink::Get()
{
    manager::Get();
    fink::Get();
}
