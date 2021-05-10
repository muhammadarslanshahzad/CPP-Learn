/*
 ----------------------- Day 2 ----------------------
 ---  User Defined /Abstract Data Types  --------------
 --- Date: 10.15.2020---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

//class 
class Data{
    public:
        int a;
        void print(){
            cout<<"YOu entered : "<<this->a<<endl;
        }
};

//struct 
struct address{
    char name[20];
    char city[20];
    char country[20];
    int pin;
};

//unioin
union UnionData
{
    int a;
    int b;
};

//Enum 
enum Week{ 
    Mon, 
    Tue, 
    Wed,
    Thr,
    Fri,
    Sat,
    Sun
};

// typeof datatype;

typedef unsigned int BYTE;

int main(){

    //class
    Data d;
    cout<<"enter a value : ";
    cin>>d.a;
    d.print();

    //struct 
    address a;
    cout<<"Enter you name : ";
    cin>>a.name;
    cout<<"Enter you city : ";
    cin>>a.city;
    cout<<"Enter you country : ";
    cin>>a.country;
    cout<<"Enter you pin : ";
    cin>>a.pin;
    cout<<"YOu entered \n"<<a.name<<" "<<a.city<<" "<<a.country<<" "<<a.pin<<endl;

    //Unioin
    UnionData u;
    cout<<"Enter data for a : ";
    cin>>u.a;
    cout<<"AS a and b has shared memory the value of a can be access thorugh b \n a = "<<u.a<<" \n b = "<<u.b<<endl;
    cout<<"Enter data for b : ";
    cin>>u.b;
    cout<<"now the value of a and b changed : \n a = "<<u.a<<" \n b = "<<u.b<<endl;
    //Enum 
    enum Week wk;
    wk =Wed;
    cout<<"week day present in enum at : "<< wk<<endl;

    //typedef 
    BYTE abyte=10;
    cout<<"the value of custom data type "<<abyte;

    return 0;
}

/*
Sample Output:
enter a value : 190
YOu entered : 190
Enter you name : mas
Enter you city : lions
Enter you country : pakistan 
Enter you pin : 540
YOu entered
mas lions pakistan 540
Enter data for a : 190
AS a and b has shared memory the value of a can be access thorugh b 
 a = 190
 b = 190
Enter data for b : 340
now the value of a and b changed :
 a = 340
 b = 340
week day present in enum at : 2


*/ 