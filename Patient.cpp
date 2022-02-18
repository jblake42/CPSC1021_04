#include "Patient.h"





Patient::Patient(char typeIn, double servicesIn, double medicationIn)
{
    services = servicesIn;
    medication = medicationIn;
    patientType = typeIn;
}
Patient::Patient(char typeIn, int daysIn, double rateIn, double servicesIn, double medicationIn)
{
    services = servicesIn;
    medication = medicationIn;
    patientType = typeIn;
    days = daysIn;
    rate = rateIn;

}

bool Patient::validateInput(int x)
{
    bool validData = false;

    if(x >=0)
        validData = true;


    return validData;
}

bool Patient::validateInput(double x)
{
    bool validData = false;

    if(x >=0)
         validData= true;

    return validData;
}

void Patient::setDays(int d)
{
    if(Patient::validateInput(d) == true)
        days = d;
}

void Patient::setRate(double r)
{
    if(Patient::validateInput(r) == true)
        rate = r;
}

void Patient::setServices(double s)
{
    if(Patient::validateInput(s) == true)
        services = s;
}

void Patient::setMedication(double m)
{
    if(Patient::validateInput(m) == true)
    medication = m;
}

void Patient::setPatientType(char p)
{
    patientType = p;
}

int Patient::getDays()
{
    return days;
}

double Patient::getRate()
{
    return rate; 
}

double Patient::getServices()
{
    return services;
}

double Patient::getMedication()
{
    return medication;
}

char Patient::getPatientType()
{
    return patientType;
}

double Patient::calcTotalCharges(int days, double room, double service, double medication)
{
    double sum = (days * rate) + services + medication;
    return sum; 
}

double Patient::calcTotalCharges(double S, double M)
{
    return S + M; 
}
