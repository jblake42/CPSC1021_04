//Temp
//
#include "calcTotalCharges.h" 
#include <iostream>
using namespace std;
double calcTotalCharges(int numDays, double rate, double otherCharge, double medCharge)
{
	double total = numDays * rate + otherCharge + medCharge;
	return total;

}
double calcTotalCharges(double otherCharge, double medCharge)
{
	double total = otherCharge + medCharge;
	return total;
}
