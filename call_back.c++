#include <iostream>

// 定义一个函数类型
typedef void (*Callback)(int);

// 这是一个回调函数
void MyCallback(int x) {
    std::cout << "Called back with value " << x << std::endl;
}

// 这是一个接受回调函数的函数
void TestCallback(Callback callback) {
    std::cout << "Calling back..." << std::endl;
    callback(10);
}

int main() {
    // 使用回调函数
    TestCallback(MyCallback);
    return 0;
}