#include <iostream>

struct Node
{
    double value;
    Node *nextNode;

};
struct List
{
    Node *head;
    Node *tail;
};
// init() creat New node
void init(List &l)
{
    l.head = NULL;
    l.tail = NULL;

}
Node *creatNode(int x = -1)
{
    Node *p = new Node;
    if(p == NULL)
    {
        return p;
        // check cap phat bo nho co thanh cong hay khong
    }
    p->value = x;
    p->nextNode = NULL;
    return p;
}
// travel() eleprt
void travel(List &l)
{
    Node *p;
    if(l.head == NULL)
    {
        return;
    }
    p = l.head;
    while(p != NULL)
    {
        p = p->nextNode;
        std::cout << p->value << " ";
    }

}
//search()
bool searchList(List &l, int x)
{
    if(l.head == NULL)
    {
        return false;
    }
    Node *p = l.head;
    while(p->nextNode != NULL)
    {
        if(p->value == x)
        {
            return true;
        }
        p = p->nextNode;
    }
    return false;
}

//update() . find and chagle value;
void update(List &l, int location, int value)
{
    if(l.head == NULL)
    {
        return;
    }
    Node *p = l.head;
    int i = 0;
    while(i < location)
    {
        p = p->nextNode;
    }
    p->value = value;
}
// insertHead()
void insertHead(List &l, int value = -1)
{
    Node *p = creatNode(value);
    if(l.head == NULL)
    {
        l.head = p;
        return;
    }
    //p = l.head;
    p->nextNode = l.head;
    l.head = p;

}
// insertTail()
void insertTail(List &l, int x = -1)
{
    Node *p = creatNode(x);
    if(p == NULL)
    {
        return ;
    }
    if(l.head == NULL)
    {
        l.head = p;
        return ;
    }
    Node *cur = l.head;
    while(cur->nextNode != NULL)
    {
        cur = cur->nextNode;
    }
    cur->nextNode = p;


}
// removeHead()
void removeHead(List &l)
{
    Node *p = l.head;
    if(p == NULL)
    {
        return;
    }
    l.head = p->nextNode;
    delete p;


}
// removeTail();
void clean(List &l)
{
    while(l.head != NULL)
    {
        removeHead(l);
    }
}

int main()
{
    List x;
    int MAX = 10;
    for(int i = 1; i < MAX; i++)
    {
        insertHead(x, i);
    }
    travel(x);
    std::cout << std::endl;

    Node *p = x.head;
    int minx = p->value;
    while(p != NULL)
    {
        if(p->value < minx)
        {
            minx = p->value;
        }
        p = p->nextNode;

    }
    std::cout << minx;

    return 0;
}
