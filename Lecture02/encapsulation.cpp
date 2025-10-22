#include <iostream>
#include <string>

using namespace std;

class sportsCar {
private:
    string brand;
    string model;
    bool IsEngineOn;
    int currentSpeed;
    int currentGear;
    string tyreCompany;

public:
    sportsCar(string b,string m){
        this->brand=b;
        this->model=m;
        IsEngineOn=false;
        currentGear=0;
        currentSpeed=0;
    }

    int getSpeed(){
        return currentSpeed;
    }

    string getTyreCompany(){
        return tyreCompany;
    }

    void startEngine(){
        IsEngineOn=true;
        cout<< brand<< " " <<model<< ": Engine is started" <<endl;
    }

    void shiftGear(int gear){
        if(!IsEngineOn){
            cout<< brand<< " " <<model<< ": Engine is off! Start Engine First" <<endl;
            return;
        }
        currentGear=gear;
        cout<< brand<< " " <<model<< ":"<< "Current Gear is"<<currentGear <<endl;
        
    }
    void accelerate(){
        if(!IsEngineOn){
            cout<< brand<< " " <<model<< ": Engine is off! Start Engine First" <<endl;
            return;
        }
        currentSpeed+=20;
        cout<< brand<< " " <<model<< " : Accelerating to "<< currentSpeed <<endl;
    }
    void brake(){
        if(!IsEngineOn){
            cout<< brand<< " " <<model<< ": Engine is off! Start Engine First" <<endl;
            return;
        }
        currentSpeed-=20;
        cout<< brand<< " " <<model<< " : Braking to "<< currentSpeed <<endl;
    }
    void stopEngine(){
        IsEngineOn=false;
        currentGear=0;
        currentSpeed=0;
        cout<< brand<< " " <<model<< ": Engine is stopped" <<endl; 
    }
};

int main(){
    sportsCar* mysportsCar= new sportsCar("Ford","Raptor");
    mysportsCar->startEngine();
    mysportsCar->shiftGear(1);
    mysportsCar->accelerate();
    mysportsCar->shiftGear(2);
    mysportsCar->accelerate();
    mysportsCar->brake();
    mysportsCar->stopEngine();


    // mysportsCar->currentSpeed=0; gives error because this is private variable

    return 0;
}
   

