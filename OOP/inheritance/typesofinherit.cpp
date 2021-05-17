/*
 ----------------------- Day 9 ----------------------
 -----  Types and Multiple  inheritance    -------------------------
 --- Date: 17.05.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/
#include <iostream>
using namespace std;

class landVehicle
{
    private:
        /* data */
    public:
        void landvehicle(){
            cout<<"This is a land vehicle"<<endl;
        };
};

class WaterVehicle{
    public:
        
        void Watervehicle(){
            cout<<"This is a Water vehicle"<<endl;
        };
};

class AmbgiVehicle : public landVehicle, private WaterVehicle{
    public:
        void ambvehicle(){
            cout<<"This is hybrid of water and land vehicle"<<endl;
        }
};


int main(void){

    AmbgiVehicle a;
    a.landvehicle();
    // a.Watervehicle(); throw an error here bcz of private inheritance so function is private and inacessible here
    a.ambvehicle();
    

    return 0;
}

/**
 * Sample Output
 * 
 *  This is a land vehicle
 *  This is hybrid of water and land vehicle
 * 
*/