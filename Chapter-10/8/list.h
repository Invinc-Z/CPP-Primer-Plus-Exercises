#pragma once

typedef int Item;

class List
{
public:
    List() {index = 0;}
    ~List() {}

    bool addItem(const Item& item);
    bool isEmpty() const;
    bool isFull() const;
    void visit(void (*pf)(Item & item));

private:
    enum {LEN = 5};
    Item items[LEN];
    int index;
};

void showItem(Item & item);
void onePlus(Item & item);
