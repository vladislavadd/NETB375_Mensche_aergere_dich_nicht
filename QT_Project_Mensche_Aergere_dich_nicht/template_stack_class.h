#ifndef TEMPLATE_STACK_CLASS_H
#define TEMPLATE_STACK_CLASS_H

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T> class Stack
{
    T arr[4];
    int top;
public:
    Stack<T>()
    {
        top = -1;
        for(int i = 0; i < 4; i++)
        {
            arr[i] = NULL;
        }
    }

    void push(T x)
    {
        arr[++top] = x;
    }
    T pop()
    {
        return arr[top--];
    }
    bool is_empty()
    {
        return (top < 0);
    }
    bool is_full()
    {
        return (top == 3);
    }
    bool not_empty()
    {
        return (top >= 0);
    }
};

#endif // TEMPLATE_STACK_CLASS_H
