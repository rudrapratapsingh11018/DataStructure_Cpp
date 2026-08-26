#include <iostream>
using namespace std;

class Simple{
    int data1;
    int data2;

    public:
    Simple( int a=12,int b=15){
        data1 = a;
        data2 = b;
    }

    void printData(); //printData is just a void print
};
void Simple :: printData(){
    cout<<'the value of Data1 and Data2 is '<<data1<<'and'<<data2<<endl;

}
                                                                                

int main(){
    Simple s ();
    s.printData();
    return 0;
}






