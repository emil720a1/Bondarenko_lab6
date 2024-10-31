
#include <iostream>
using namespace std;
int main() {
    char name;
    cout << "Enter: ";
    cin>>name;
    char* a= &name;
    cout<<*a<<endl;


    return 0;
}
