#include <iostream>
#include "Loan.h"

Loan::Loan()
{
	annualInterestRate = 1;
	numberOfYear = 1;
	loanAmount = 1;
}

Loan::Loan(double annualInterestRate, int numberOfYear, double loanAmount)
{
	this->annualInterestRate = annualInterestRate;
	this->numberOfYear = numberOfYear;
	this->loanAmount = loanAmount;
}

double Loan::getAnnualInterestRate()
{
	return annualInterestRate;
}

int Loan::getNumberOfYears()
{
	return numberOfYear;
}

double Loan::getLoanAmount()
{
	return loanAmount;
}

void Loan::setAnnualInterestRate(const double annualInterestRate)
{
	this->annualInterestRate = annualInterestRate;
}

void Loan::setNumberOfYears(const int numberOfYear)
{
	this->numberOfYear = numberOfYear;
}

void Loan::setLoanAmount(const double loanAmount)
{
	this->loanAmount = loanAmount;
}

double Loan::getFinalMoney()
{
	return annualInterestRate * numberOfYear * loanAmount;
}
