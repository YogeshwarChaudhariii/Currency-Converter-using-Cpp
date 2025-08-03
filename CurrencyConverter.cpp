///////////////////////////////////////////////////////
//
//  File name :     CurrencyConverter.cpp
//  Descreption :   Used to calculate currency in Indian Rupees.
//                  Here, I have added 15 countries.
//  Author :        Yogeshwar Prakash Chaudhari
//  Date :          03/08/2025
//
///////////////////////////////////////////////////////

#include<iostream>
#include<iomanip>
using namespace std;

class Currency
{
    public: 
        double OtherCountryCurrency = 0.0;
        double ConvertedCurrency = 0.0;
    
        void ChangeCurrency(int Choice)
        {
            switch(Choice)
            {
            case 1:
                cout<<"Enter amount in USD currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 87.20; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 2:
                cout<<"Enter amount in Pound Sterling currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 115.80; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 3:
                cout<<"Enter amount in Euro currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 101.01; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 4:
                cout<<"Enter amount in Israeli New Shekel currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 25.70; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 5:
                cout<<"Enter amount in Canadian Dollar currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 63.11; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 6:
                cout<<"Enter amount in Mexican Peso currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 4.61; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 7:
                cout<<"Enter amount in Chinese Yuan currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 12.01; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 8:
                cout<<"Enter amount in Euro currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 101.01; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 9:
                cout<<"Enter amount in Japanese Yen currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 0.58; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 10:
                cout<<"Enter amount in United Aram Emirates Dhiram currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 23.76; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 11:
                cout<<"Enter amount in Euro currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 101.01; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 12:
                cout<<"Enter amount in Australian Dollar currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 56.31; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 13:
                cout<<"Enter amount in Russian Ruble currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 1.09; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 14:
                cout<<"Enter amount in South Korean Won currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 0.063; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            case 15:
                cout<<"Enter amount in Pakistani Rupee currecny: "<<endl;
                cin>>OtherCountryCurrency;
                ConvertedCurrency = OtherCountryCurrency * 0.31; 
                cout<<"Converted currecny is: "<<std::fixed<<std::setprecision(2)<<ConvertedCurrency<<" Rs"<<endl;
                break;
            
            default:
                cout<<"Invalid Choice..!"<<endl;
                break;
            }
        }
};

int main()
{
    Currency cobj;
    
    int Choice = 0;
    int Again = 0;
    
    cout<<"|----------------------------------------------------------------------|"<<endl;
    cout<<"|----------- Welcome to Currency Converter into Indian Rupee ----------|"<<endl;
    cout<<"|----------------------------------------------------------------------|"<<endl;
    cout<<"| Please select a country number to convert currency into Indian Rupee |"<<endl;
    cout<<"|----------------------------------------------------------------------|"<<endl;
    
    cout<<"|  1. Convert curreny into United States                               |"<<endl;
    cout<<"|  2. Convert curreny into United Kingdom                              |"<<endl;
    cout<<"|  3. Convert curreny into France                                      |"<<endl;
    cout<<"|  4. Convert curreny into Israel                                      |"<<endl;
    cout<<"|  5. Convert curreny into Canada                                      |"<<endl;
    cout<<"|  6. Convert curreny into Mexico                                      |"<<endl;
    cout<<"|  7. Convert curreny into China                                       |"<<endl;
    cout<<"|  8. Convert curreny into Germany                                     |"<<endl;
    cout<<"|  9. Convert curreny into Japan                                       |"<<endl;
    cout<<"|  10. Convert curreny into United Arab Emirates                       |"<<endl;
    cout<<"|  11. Convert curreny into Italy                                      |"<<endl;
    cout<<"|  12. Convert curreny into Australia                                  |"<<endl;
    cout<<"|  13. Convert curreny into Russia                                     |"<<endl;
    cout<<"|  14. Convert curreny into South Korea                                |"<<endl;
    cout<<"|  15. Convert curreny into Pakistan                                   |"<<endl;
    cout<<"|----------------------------------------------------------------------|"<<endl;

    cout<<"Enter your choice: "<<endl;
    cin>>Choice;
    cout<<"Your choice is: "<<Choice<<endl;
    cout<<""<<endl;

    cobj.ChangeCurrency(Choice);

    cout<<""<<endl;
    cout<<"To convert currency again, press 1"<<endl;
    cout<<"Exit..? Press 0"<<endl;
    cin>>Again;

    if (Again == 1)
    {
        while(Again == 1)
        {
            cout<<"Enter your choice: "<<endl;
            cin>>Choice;
            cout<<"Your choice is: "<<Choice<<endl;
            cout<<""<<endl;

            cobj.ChangeCurrency(Choice);

            cout<<""<<endl;
            cout<<"To convert currency again, press 1"<<endl;
            cout<<"Exit..? Press 0"<<endl;
            cin>>Again;
        }
        if (Again == 0)
        {
            exit(EXIT_SUCCESS);
        }
        else
        {
            cout << "Unable to proceed...!" << endl;
        }
    }

    return 0;

}



