// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
    T data[size];
    int top;

 public:
    TStack() : top(-1) {}

    bool push(const T& value) {
        if (top >= size - 1) {
            return false;
        }
        data[++top] = value;
        return true;
    }

    T pop() {
        if (top == -1) {
            return T();
        }
        return data[top--];
    }

    T peek() const {
        if (top == -1) {
            return T();
        }
        return data[top];
    }

    bool isEmpty() const {
        return top == -1;
    }
};

#endif  // INCLUDE_TSTACK_H_
