/*
  Programmer:           Mohammad Seeam
  Topic:                Implement and test class Item
*/

#include <iostream> // includes input / ouput stream library; cin, cout, endl,...
#include <fstream> // includes input / ouput stream library for files
#include <iomanip>
#include <string>
#include <cmath> // pow, sqrt
using namespace std; // exposed the std namespace, I can use cin, not std::cin

class Car{
    private:
        string name;
        string model;
        double msrp;
        int year;
        float milage;
        bool previous_accident_history;
        
    public:

        Car(){ //default constractor 
            name = "Honda";
            model = "Accord";
            msrp = 15000.00;
            year = 2015;
            milage = 35000;
            previous_accident_history = false;
        }

        Car(string n, string mo, double ms, int y, float mi, bool a){ //custom constructor
            setname(n);
            setmodel(mo);
            setmsrp(ms);
            setyear(y);
            setmilage(mi);
            setprevious_accident_history(a);
        }


        void setname(string n){
            if(n!=""){
                name=n;
            }else{
                name = "Honda";
            }
        }

        void setmodel(string m){
            if(m!=""){
                model=m;
            }else{
                model="Accord";
            }
           
        }

        void setmsrp(double m){
            if(m<=0){
                msrp= 12000.00;
            }else{
                msrp=m;
            }
        }

        void setyear(int y){
            if(y<2000){
                year=2022;
            }else{
                year = y;
            }
        }

        void setmilage(float m){
           if(m<0 || m > 75000){
               milage = 15000;
           }else{
               milage = m;
           }
        }

        void setprevious_accident_history(bool accident){ 
           previous_accident_history=accident;
        }

        string getname(){
           return name;
        }

        string getmodel(){
            return model;
        }

        double getmsrp(){
           return msrp;
        }

        int getyear(){
           return year;
        }

        float getmilage(){
           return milage;
        }

        bool getprevious_accident_history(){
           return previous_accident_history;
        }

        double getCurrentCarValue(){
            double price=msrp;

            if(milage==0.0){
                price = msrp * 1.0;
            }else if(milage>0.0 && milage<=10000.0){
                price = msrp* 0.8;
            }else if(milage>10000.0 && milage<=20000.0){
                price = msrp* 0.60;
            }else if(milage>20000.0 && milage<=30000.0){
                price = msrp* 0.40;
            }else if(milage>30000.0 && milage<=60000.0){
                price = msrp* 0.30;
            }else if(milage>60000.0 && milage<=75000.0){
                price = msrp* 0.20;
            }    
            if(previous_accident_history==true){
                price = price * 0.5; //accident  = half price
            }
            return price;
        }
};

int main(){
       
    while (true){
    cout<<"Press 1 for hardcoded test."<<endl;
    cout<<"Press 2 for file test."<<endl;
    cout<<"Press 3 for quit. ";
    char option;
    cin>>option;
    cout<<""<<endl;


    if (option == '1'){

        Car car1,car2,car3,car4,car5;

        //using getter functions to get default values
        car1.getname();
        car1.getmodel();
        car1.getmsrp();
        car1.getyear();
        car1.getmilage();
        car1.getprevious_accident_history();

        //printing getter functions 
        cout<< "(1) Name: "<<car1.getname()<<", "<<"Model: "<<car1.getmodel()<<", "<<"MSRP: "<<car1.getmsrp()<<", "<<"Year: "<<car1.getyear()<<", "<<"Milage: "<<car1.getmilage()<<", "<<"Previous accident history: "<<car1.getprevious_accident_history()<<" , "<<"Current price: "<<car1.getCurrentCarValue()<<" . "<<endl<<endl;

        //for car 2
        car2.setname("Tesla");
        car2.setmodel("Model Y compact SUV");
        car2.setmsrp(15000);
        car2.setyear(2015);
        car2.setmilage(100000);
        car2.setprevious_accident_history(true);

        car2.getname();
        car2.getmodel();
        car2.getmsrp();
        car2.getyear();
        car2.getmilage();
        car2.getprevious_accident_history();

        //printing getter functions
        cout<< "(2) Name: "<<car2.getname()<<", "<<"Model: "<<car2.getmodel()<<", "<<"MSRP: "<<car2.getmsrp()<<", "<<"Year: "<<car2.getyear()<<", "<<"Milage: "<<car2.getmilage()<<", "<<"Previous accident history: "<<car2.getprevious_accident_history()<<" , "<<"Current price: "<<car2.getCurrentCarValue()<<" . "<<endl<<endl;


        //for car 3
        car3.setname("BMW");
        car3.setmodel("2022 BMW 3 Series");
        car3.setmsrp(-2011);
        car3.setyear(1899);
        car3.setmilage(56777777);
        car3.setprevious_accident_history(false);

        car3.getname();
        car3.getmodel();
        car3.getmsrp();
        car3.getyear();
        car3.getmilage();
        car3.getprevious_accident_history();
    
        //printing getter functions 
        cout<< "(3) Name: "<<car3.getname()<<", "<<"Model: "<<car3.getmodel()<<", "<<"MSRP: "<<car3.getmsrp()<<", "<<"Year: "<<car3.getyear()<<", "<<"Milage: "<<car3.getmilage()<<", "<<"Previous accident history: "<<car3.getprevious_accident_history()<<" , "<<"Current price: "<<car3.getCurrentCarValue()<<" . "<<endl<<endl;

        //for car 4
        car4.setname("Toyota");
        car4.setmodel("Noah");
        car4.setmsrp(10000);
        car4.setyear(2000);
        car4.setmilage(0);
        car4.setprevious_accident_history(false);

        car4.getname();
        car4.getmodel();
        car4.getmsrp();
        car4.getyear();
        car4.getmilage();
        car4.getprevious_accident_history();

        //printing getter functions 
        cout<< "(4) Name: "<<car4.getname()<<", "<<"Model: "<<car4.getmodel()<<", "<<"MSRP: "<<car4.getmsrp()<<", "<<"Year: "<<car4.getyear()<<", "<<"Milage: "<<car4.getmilage()<<", "<<"Previous accident history: "<<car4.getprevious_accident_history()<<" , "<<"Current price: "<<car4.getCurrentCarValue()<<" . "<<endl<<endl;

        //for car 5
        car5.setname("Lamborghini");
        car5.setmodel("2020 Aventador S");
        car5.setmsrp(218009);
        car5.setyear(2020);
        car5.setmilage(50000);
        car5.setprevious_accident_history(true);

        car5.getname();
        car5.getmodel();
        car5.getmsrp();
        car5.getyear();
        car5.getmilage();
        car5.getprevious_accident_history();

        //printing getter functions 
        cout<< "(5) Name: "<<car5.getname()<<", "<<"Model: "<<car5.getmodel()<<", "<<"MSRP: "<<car5.getmsrp()<<", "<<"Year: "<<car5.getyear()<<", "<<"Milage: "<<car5.getmilage()<<", "<<"Previous accident history: "<<car5.getprevious_accident_history()<<" , "<<"Current price: "<<car5.getCurrentCarValue()<<" . "<<endl<<endl;

        Car car6("Ferrari",  "812 Competizione", 300000.00, 2022, 50000 , true);
        cout<< "(6) Name: "<<car6.getname()<<", "<<"Model: "<<car6.getmodel()<<", "<<"MSRP: "<<car6.getmsrp()<<", "<<"Year: "<<car6.getyear()<<", "<<"Milage: "<<car6.getmilage()<<", "<<"Previous accident history: "<<car6.getprevious_accident_history()<<" , "<<"Current price: "<<car6.getCurrentCarValue()<<" . "<<endl<<endl;

        Car car7;
        cout<< "(7) Name: "<<car7.getname()<<", "<<"Model: "<<car7.getmodel()<<", "<<"MSRP: "<<car7.getmsrp()<<", "<<"Year: "<<car7.getyear()<<", "<<"Milage: "<<car7.getmilage()<<", "<<"Previous accident history: "<<car7.getprevious_accident_history()<<" , "<<"Current price: "<<car7.getCurrentCarValue()<<" . "<<endl<<endl;

        Car car8("","",-7689,1800,20000,true);
        cout<< "(8) Name: "<<car8.getname()<<", "<<"Model: "<<car8.getmodel()<<", "<<"MSRP: "<<car8.getmsrp()<<", "<<"Year: "<<car8.getyear()<<", "<<"Milage: "<<car8.getmilage()<<", "<<"Previous accident history: "<<car8.getprevious_accident_history()<<" , "<<"Current price: "<<car8.getCurrentCarValue()<<" . "<<endl<<endl;


    }else if(option=='2'){

        string name;
        string model;
        double msrp;
        int year;
        float milage;
        bool previous_accident_history;
        ifstream file;

        file.open("DL9_L7_Seeam.txt");                                            
        if (file.fail()){
            cout<<"Error opening file DL9_L7_Seeam.txt"<<endl;           
                exit(0);                                                 
        }else{ 
            string s;
            int count=1;
            while(getline(file, s)){
                if(count==1){
                    name = s;
                }else if(count==2){
                    model = s;
                }else if(count==3){
                    msrp = stod(s);
                }else if(count==4){
                    year = stoi(s);
                }else if(count==5){
                    milage = stof(s);
                }else if(count==6){
                    if(s=="true"){
                        previous_accident_history=true;
                    }else if(s=="True"){
                        previous_accident_history=true;
                    }else{
                        previous_accident_history = false;
                    }
                }

                count++;
            }

            Car car9(name,  model, msrp, year, milage , previous_accident_history);
            cout<< "Name: "<<car9.getname()<<", "<<"Model: "<<car9.getmodel()<<", "<<"MSRP: "<<car9.getmsrp()<<", "<<"Year: "<<car9.getyear()<<", "<<"Milage: "<<car9.getmilage()<<", "<<"Previous accident history: "<<car9.getprevious_accident_history()<<" , "<<"Current price: "<<car9.getCurrentCarValue()<<" . "<<endl<<endl;

        }
        
    }else if(option == '3'){
        cout<<"Good Bye !";
        exit(0);
    
    }else{
        (cout<<" Invalid option. "<<endl);
    }}

}

/*
Press 1 for hardcoded test.
Press 2 for file test.
Press 3 for quit. 1

(1) Name: Honda, Model: Accord, MSRP: 15000, Year: 2015, Milage: 35000, Previous accident history: 0 , Current price: 4500 . 

(2) Name: Tesla, Model: Model Y compact SUV, MSRP: 15000, Year: 2015, Milage: 15000, Previous accident history: 1 , Current price: 4500 . 

(3) Name: BMW, Model: 2022 BMW 3 Series, MSRP: 12000, Year: 2022, Milage: 15000, Previous accident history: 0 , Current price: 7200 . 

(4) Name: Toyota, Model: Noah, MSRP: 10000, Year: 2000, Milage: 0, Previous accident history: 0 , Current price: 10000 . 

(5) Name: Lamborghini, Model: 2020 Aventador S, MSRP: 218009, Year: 2020, Milage: 50000, Previous accident history: 1 , Current price: 32701.3 . 

(6) Name: Ferrari, Model: 812 Competizione, MSRP: 300000, Year: 2022, Milage: 50000, Previous accident history: 1 , Current price: 45000 . 

(7) Name: Honda, Model: Accord, MSRP: 15000, Year: 2015, Milage: 35000, Previous accident history: 0 , Current price: 4500 . 

(8) Name: Honda, Model: Accord, MSRP: 12000, Year: 2022, Milage: 20000, Previous accident history: 1 , Current price: 3600 . 

Press 1 for hardcoded test.
Press 2 for file test.
Press 3 for quit. 2

Name: Bugatti , Model: La Voiture Noire, MSRP: 994000, Year: 2019, Milage: 35000, Previous accident history: 1 , Current price: 149100 . 

Press 1 for hardcoded test.
Press 2 for file test.
Press 3 for quit. 1

(1) Name: Honda, Model: Accord, MSRP: 15000, Year: 2015, Milage: 35000, Previous accident history: 0 , Current price: 4500 . 

(2) Name: Tesla, Model: Model Y compact SUV, MSRP: 15000, Year: 2015, Milage: 15000, Previous accident history: 1 , Current price: 4500 . 

(3) Name: BMW, Model: 2022 BMW 3 Series, MSRP: 12000, Year: 2022, Milage: 15000, Previous accident history: 0 , Current price: 7200 . 

(4) Name: Toyota, Model: Noah, MSRP: 10000, Year: 2000, Milage: 0, Previous accident history: 0 , Current price: 10000 . 

(5) Name: Lamborghini, Model: 2020 Aventador S, MSRP: 218009, Year: 2020, Milage: 50000, Previous accident history: 1 , Current price: 32701.3 . 

(6) Name: Ferrari, Model: 812 Competizione, MSRP: 300000, Year: 2022, Milage: 50000, Previous accident history: 1 , Current price: 45000 . 

(7) Name: Honda, Model: Accord, MSRP: 15000, Year: 2015, Milage: 35000, Previous accident history: 0 , Current price: 4500 . 

(8) Name: Honda, Model: Accord, MSRP: 12000, Year: 2022, Milage: 20000, Previous accident history: 1 , Current price: 3600 . 

Press 1 for hardcoded test.
Press 2 for file test.
Press 3 for quit. 3

Good Bye !%                                                        
*/