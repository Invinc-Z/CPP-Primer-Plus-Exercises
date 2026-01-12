#pragma once
#include <string>
using std::string;

class Person
{
public:
    Person(const string & fn = "", const string & ln = "") : first_name(fn), last_name(ln){}
    virtual ~Person() = 0;
    virtual void Show() const; 
    virtual void Set();

protected:
    virtual void Data() const;
    virtual void Get();
private:
    string first_name;
    string last_name;
};

