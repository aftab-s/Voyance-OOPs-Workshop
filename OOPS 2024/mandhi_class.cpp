#include<iostream>
using namespace std;

class mandhi{
public:

    mandhi(string mandhi_name, int rate, string restaurant_name){
        Mandhi_Name = mandhi_name;
        Rate = rate;
        Restaurant_Name = restaurant_name;
    };

    string Mandhi_Name;
    int Rate;
    string Restaurant_Name;

    void MandhiTalks(){
        cout<<"Hello, my Name is "<<Mandhi_Name<<" I cost about "<<Rate<<" Rupees.";
    }
};

int main(){
    // M1.Mandhi_Name = "Honey Chili";
    // M1.Rate = 190;
    // M1.Restaurant_Name = "Soofi Mandhi";
    mandhi M1=mandhi("Peri Peri",180,"Soofi Mandhi");

    // M2.Mandhi_Name = "Peri Peri";
    // M2.Rate = 180;
    // M2.Restaurant_Name = "Soofi Mandhi";
    mandhi M2=mandhi("Honey Chili",190,"Arabian Palace");
    
    M1.MandhiTalks();
    M2.MandhiTalks();

    return 0;
}
