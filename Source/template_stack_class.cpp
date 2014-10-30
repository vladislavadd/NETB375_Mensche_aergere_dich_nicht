#include <iostream>

template <typename T>
class Stack{

    T arr[4];
    int top;

    Stack<T>(){
        top = -1;
        for(int i = 0; i < 4; i++){
            arr[i] = NULL;
        }
    }

    void push(T x){
        arr[++top] = x;
    }
    T pop(){
        return arr[top--];
    }
    bool is_empty(){
        return (top < 0);
    }
    bool is_full(){
        return (top == 3);
    }
    bool not_empty(){
        return (top >= 0);
    }
};

int main()
{
    Stack <int> test();

    test.push(1);
    test.push(3);
    test.push(5);

    cout << test.pop() << " " << test.pop();

    return 0;
}
