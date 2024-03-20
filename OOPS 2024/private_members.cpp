#include<iostream>
using namespace std;

class bumble{
private:

    string BF_Name;
    int Age;

public:

    void setBFName(string name){
        BF_Name = name;
    }

    void setBFAge(int age){
        Age = age;
    }

    string getBFName(){
        // cout<<BF_Name;
        return BF_Name;
    }

    int getBFAge(){
        // cout<<Age;
        return Age;
    }

    void BFTalks(){
        cout<<"Hi My name is "<<BF_Name<<" I am "<<Age<<" Years Old!";
    }
};

int main(){
    
    bumble B1;
    // B1.BF_Name = "Tom Cruise";
    B1.setBFName("Tom Cruise");
    
    // B1.Age = 45;
    B1.setBFAge(45);

    B1.getBFName();
    B1.getBFAge();
    // B1.BFTalks();

    return 0;
}