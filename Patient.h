#ifndef PATIENT_H
#define PATIENT_H
class Patient{
    private:
        //needed variables and declaring their default values
        int days{0.0};
        double rate{0.0}, services{0.0}, medication{0.0};
        char patientType{'I'};

        bool validateInput(int);
        bool validateInput(double); 
    public:
        //default constructor
        Patient()= default;
        Patient(int daysVal, double rateVal, double servicesVal, double medicationVal, char patientTypeVal) :
            days(daysVal), rate(rateVal), services(servicesVal), medication(medicationVal), patientType(patientTypeVal) {}


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

        double calcTotalCharges(int, double, double , double);
        double calcTotalCharges(double , double);
};

#endif