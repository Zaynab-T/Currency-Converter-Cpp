//group project by Zaynab Tabassi, Yasmine Mohamed, Ahmad Jamshidi, and Bobby Yeboah
#include <iostream> 
#include <iomanip> 
using namespace std; 

//function prototypes 
double getCanadianDollars(double americanDollars, double CA_RATE); 
double getEuros(double americanDollars, double EURO_RATE); 
double getIndianRupees(double americanDollars, double RUPEE_RATE); 
double getJapaneseYen(double americanDollars, double YEN_RATE); 
double getMexicanPesos(double americanDollars, double PESO_RATE); 
double getSouthAfricanRands(double americanDollars, double RAND_RATE); 
double getBrazilianReals(double americanDollars, double REAL_RATE); 
double getRussianRubles(double americanDollars, double RUBLE_RATE); 
double getIsraelShekels(double americanDollars, double IS_SHEKEL_RATE); 
double getBritishPounds(double americanDollars, double BR_POUND_RATE); 

//main function 
int main () 
{
//initializing variables and constants
double americanDollars = 0.0; 
int currencyCode = 0;
const double CA_RATE = 1.37;
const double EURO_RATE = 0.94;
const double RUPEE_RATE = 83.34;
const double YEN_RATE = 155.28;
const double PESO_RATE = 17.06;
const double RAND_RATE = 19.22;
const double REAL_RATE = 5.15;
const double RUBLE_RATE = 93.17;
const double IS_SHEKEL_RATE = 3.78;
const double BR_POUND_RATE = 0.8;

//here the user is welcomed and prompted to enter the amount of US dollars they would like to convert
cout << "Welcome to our currency converter! Please enter the amount in US dollars that you would like converted: $";
  
cin >> americanDollars; 

//here the user's input of US dollars is checked, if the amount entered is invalid (a negative value), they will be looped back and told to enter a valid amount
while (americanDollars < 0) 
  {
    cout << "Please enter a valid amount of American dollars: $";
    cin >> americanDollars;
  }
//end while 

//here the user is prompted to choose which currency they would like to convert their US dollars to
cout << "Please choose which currency you would like to convert to (1-10): " << endl;
cout << "1. Canadian Dollars" << endl; 
cout << "2. Euros" << endl; 
cout << "3. Indian Rupees" << endl; 
cout << "4. Japanese Yen" << endl; 
cout << "5. Mexican Pesos" << endl; 
cout << "6. South African Rands" << endl;
cout << "7. Brazilian Reals" << endl; 
cout << "8. Russian Rubles" << endl; 
cout << "9. Israel Shekels" << endl; 
cout << "10. British Pounds" << endl;
cin >> currencyCode;

//if the user enters an invalid currency code, they will be looped back and told to enter a valid currency code
while (currencyCode < 1 || currencyCode > 10)
  {
    cout << "Please enter a valid currency code: ";
    cin >> currencyCode;
  }
//end while

//depending on the user's choice, the appropriate function will be called to convert the US dollars to the chosen currency
if (currencyCode == 1)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Canadian dollars is CA$" << getCanadianDollars(americanDollars, CA_RATE);
}
else if (currencyCode == 2)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Euros is €" << getEuros(americanDollars, EURO_RATE);
}
else if (currencyCode == 3)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Indian Rupees is ₹" << getIndianRupees(americanDollars, RUPEE_RATE);
}
else if (currencyCode == 4)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Japanese Yen is JP¥" << getJapaneseYen(americanDollars, YEN_RATE);
}
else if (currencyCode == 5)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Mexican Pesos is MX$" << getMexicanPesos(americanDollars, PESO_RATE);
}
else if (currencyCode == 6)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in South African Rands is R" << getSouthAfricanRands(americanDollars, RAND_RATE);
}
else if (currencyCode == 7)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Brazilian Reals is R$" << getBrazilianReals(americanDollars, REAL_RATE);
}
else if (currencyCode == 8)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Russian Rubles is ₽" << getRussianRubles(americanDollars, RUBLE_RATE);
}
else if (currencyCode == 9)
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in Israeli Shekels is ₪" << getIsraelShekels(americanDollars, IS_SHEKEL_RATE);
}
else
{
  cout << fixed << setprecision(2);
  cout << "$" << americanDollars << " US dollars in British Pounds is £" << getBritishPounds(americanDollars, BR_POUND_RATE);
}
//end if
  
return 0;
}


//define functions
double getCanadianDollars(double americanDollars, double CA_RATE) 
{ 

  double convertedAmount = americanDollars * CA_RATE;
  return convertedAmount;
}

double getEuros(double americanDollars, double EURO_RATE)
{
  double convertedAmount = americanDollars * EURO_RATE;
  return convertedAmount;
}

double getIndianRupees(double americanDollars, double RUPEE_RATE)
{
  double convertedAmount = americanDollars * RUPEE_RATE;
  return convertedAmount;
}

double getJapaneseYen(double americanDollars, double YEN_RATE)
{
  double convertedAmount = americanDollars * YEN_RATE;
  return convertedAmount;
}

double getMexicanPesos(double americanDollars, double PESO_RATE)
{
  double convertedAmount = americanDollars * PESO_RATE;
  return convertedAmount;
}

double getSouthAfricanRands(double americanDollars, double RAND_RATE)
{
  double convertedAmount = americanDollars * RAND_RATE;
  return convertedAmount;
}

double getBrazilianReals(double americanDollars, double REAL_RATE)
{
  double convertedAmount = americanDollars * REAL_RATE;
  return convertedAmount;
}

double getRussianRubles(double americanDollars, double RUBLE_RATE)
{
  double convertedAmount = americanDollars * RUBLE_RATE;
  return convertedAmount;
}

double getIsraelShekels(double americanDollars, double IS_SHEKEL_RATE)
{
  double convertedAmount = americanDollars * IS_SHEKEL_RATE;
  return convertedAmount;
}

double getBritishPounds(double americanDollars, double BR_POUND_RATE)
{
  double convertedAmount = americanDollars * BR_POUND_RATE;
  return convertedAmount;
}