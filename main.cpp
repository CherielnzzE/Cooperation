#include <iostream>
using namespace std;

void foo() {
    cout << "It’s foo!!" << endl;
}

void bar() {
    cout<<"It's bar!"<<endl;
}

int main() {
    cout << "Hello, World!" << endl;
    foo();  // 呼叫 foo
    bar();  //呼叫 bar
    return 0;
}
