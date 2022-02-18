#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>

using namespace std;
class Patient{
    private:
        //needed variables and declaring their default values
        int days{0} ;
        double rate {0.0}, services {0.0}, medication{0.0};
        char patientType{'I'};

        bool validateInput(int);
        bool validateInput(double); 
    public:
        //default constructor
        Patient()= default;
        Patient(char patientTypeVal, int daysVal, double rateVal, double servicesVal, double medicationVal );
        Patient(char patientTypeVal, double servicesVal, double medicationVal );

        //declaring needed functions
        void setDays(int);
        void setRate(double);
        void setServices(double);
        void setMedication(double);
        void setPatientType(char);
        int getDays();
        double getRate();
        double getServices();
        double getMedication();
        char getPatientType();

        double calcTotalCharges(int days, double rate, double service, double medication);
        double calcTotalCharges(double service, double medication);
};

#endif