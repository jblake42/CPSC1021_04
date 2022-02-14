/* Blake Moore 
 * This program determines how much the patient must pay for hospital services
 * 
 *
 */
#include <iomanip>
#include <iostream>
#include "calcTotalCharges.h" 
#include "validateUserInput.h"
using namespace std;
int main()
{
	char patientType;
	float numDays;
	float rate, totalCharge, otherCharge, medCharge;
	
	
		
		cout << "This program will calculate a patient's hospital charges." << endl;
	do {
		cout << "Enter I for in-patient or O for out-patient: ";
		cin >> patientType;
	
	}
	while(patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o');
		
	if(patientType == 'I'|| patientType == 'i')
	{
		//getting user input
		cout << "Number of days in the hospital: " ;
		cin >> numDays;
		numDays = validateUserInput(numDays);
	
		cout << "Daily room rate ($): ";
		cin >> rate;
		rate = validateUserInput(rate);
	
		cout << "Lab fees and other service charges ($): "; 
		cin >> otherCharge;
		otherCharge = validateUserInput(otherCharge);

		cout << "Medication Charges ($): " ;
		cin >> medCharge;	
		medCharge = validateUserInput(medCharge);
		
		totalCharge = calcTotalCharges(numDays, rate, otherCharge, medCharge);
		
	}
	else if(patientType == 'O' || patientType == 'o')
	{
		
		cout << "Lab fees and other service charges ($): " ; 
		cin >> otherCharge;
		otherCharge = validateUserInput(otherCharge);

		cout << "Medication Charges ($): " ;
		cin >> medCharge;	
		medCharge = validateUserInput(medCharge);

		totalCharge = calcTotalCharges(otherCharge, medCharge);
	}
		cout << "Your total hospital bils is $" << fixed << setprecision(2) << totalCharge << endl;
	
	

	return 0;
}
