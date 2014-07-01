#include "Account.h"

Account::Account()
{
    initSec= time(NULL);
}

Account::Account(int id, double balance, double annualInterestRate)
{
    this->id = id;
    this->balance = balance;
    this->annualInterestRate = annualInterestRate;
    initSec = time(NULL);
}

int Account::getId()
{
    return this->id;
}

double Account::getBalance()
{
    return this->balance;
}

double Account::getAnnualInterestRate()
{
    return this->annualInterestRate;
}

void Account::setId(int id)
{
    this->id = id;
}

void Account::setBalance(double balance)
{
    this->balance = balance;
}

void Account::setAnnualInterestRate(double annualInterestRate)
{
    this->annualInterestRate = annualInterestRate;
}

double Account::getMonthlyInterestRate()
{
    return annualInterestRate / 12;
}

bool Account::withDraw(double money)
{
    if (this->balance >= money)
    {
        this->balance -= money;
        return true;
    }
    else
    {
        return false; 
    }
}

bool Account::deposit(double money)
{
    if(this->balance += money)
    {
        return true; 
    }
    else
    {
        return false; 
    }
}

std::string Account::getInitDate()
{
    return ctime(&initSec);
}

time_t Account::getInitSec()
{
    return this->initSec;
}
