#include "Patient.h"

bool Patient::validateInput(int xI)
{
    bool validData = false;

    if(xI >=0)
        validData = true;


    return validData;
}

bool Patient::validateInput(double xD)
{
    bool validData = false;

    if(xD >=0)
         validData= true;

    return validData;
}

void Patient::setDays(int d)
{
    days = d;
}

void Patient::setRate(double r)
{
    rate = r;
}

void Patient::setServices(double s)
{
    services = s;
}

void Patient::setMedication(double m)
{
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

double Patient::calcTotalCharges(int D, double R, double S, double M)
{
    double sum = (D * R) + S + M;
    return sum; 
}

double Patient::calcTotalCharges(double S, double M)
{
    return S + M; 
}
