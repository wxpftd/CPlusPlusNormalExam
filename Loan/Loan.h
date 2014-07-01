#ifndef Loan_H
#define Loan_H

class Loan
{
private:	
	double annualInterestRate;
	int numberOfYear;
	double loanAmount;
public:
	Loan();
	Loan(double, int, double);
	double getAnnualInterestRate();
	int getNumberOfYears();
	double getLoanAmount();
	void setAnnualInterestRate(const double);
	void setNumberOfYears(const int);
	void setLoanAmount(const double);
	double getFinalMoney();
};

#endif
