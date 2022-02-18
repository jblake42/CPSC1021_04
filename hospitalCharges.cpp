/* Blake Moore 
 * This program determines how much the patient must pay for hospital services
 * 
 *
 */
#include <iomanip>
#include <iostream>
#include "Patient.h" 

using namespace std;
int main()
{
	Patient pat('I',0, 0.0 , 0.0 , 0.0); 
	char patientType;
	int numDays;
	double rate, totalCharge, otherCharge, medCharge;
	
	
		
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
		pat.setDays(numDays);
		numDays = pat.getDays();
		/*used for debugging*/
		//cout<<pat.getDays()<<endl;

		cout << "Daily room rate ($): ";
		cin >> rate;
		pat.setRate(rate);
		rate = pat.getRate();

		cout << "Lab fees and other service charges ($): "; 
		cin >> otherCharge;
		pat.setServices(otherCharge);
		otherCharge =pat.getServices();


		cout << "Medication Charges ($): " ;
		cin >> medCharge;	
		pat.setMedication(medCharge);
		medCharge = pat.getMedication();

		Patient patient(patientType, numDays, rate, otherCharge, medCharge);
		// calc total cost
		//totalCharge = pat.calcTotalCharges(numDays, rate, otherCharge, medCharge);
	}
	else if(patientType == 'O' || patientType == 'o')
	{
		
		cout << "Lab fees and other service charges ($): " ; 
		cin >> otherCharge;
		pat.setServices(otherCharge);
		otherCharge = pat.getServices();

		cout << "Medication Charges ($): " ;
		cin >> medCharge;	
		pat.setMedication(medCharge);
		medCharge = pat.getMedication();

		Patient patient(patientType, otherCharge, medCharge );
		totalCharge = patient.calcTotalCharges(otherCharge, medCharge);

	}
		cout << "Your total hospital bils is $" << fixed << setprecision(2) << totalCharge << endl;
	
	

	return 0;
}
