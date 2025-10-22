#include <iostream>
#include <string>
using namespace std;

class car{
    public:
        virtual void startEngine()=0;
        virtual void shiftGear(int gear)=0;
        virtual void accelerate()=0;
        virtual void brake()=0;
        virtual void stopEngine()=0;
};
class sportsCar: public car{
public:
    string brand;
    string model;
    bool IsEngineOn;
    int currentSpeed;
    int currentGear;


    sportsCar(string b,string m){
        this->brand=b;
        this->model=m;
        IsEngineOn=false;
        currentGear=0;
        currentSpeed=0;
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
     car* myCar = new sportsCar("Ford", "Mustang");

    myCar->startEngine();
    myCar->shiftGear(1);
    myCar->accelerate();
    myCar->shiftGear(2);
    myCar->accelerate();
    myCar->brake();
    myCar->stopEngine();
   

}
