#ifndef Account_H
#define Account_H
#include <ctime>
#include <string>

class Account
{
public:
    Account();//构造函数
    Account(int id, double balance, double annualInterestRate);
    int getId();
    double getBalance();
    double getAnnualInterestRate();
    void setId(const int id);
    void setBalance(const double balance);
    void setAnnualInterestRate(const double annualInterestRate);
    double getMonthlyInterestRate();
    bool withDraw(const double money);
    bool deposit(const double money);
    time_t getInitSec();
    std::string getInitDate();

private:
    int id;
    double balance;
    double annualInterestRate;
    time_t initSec;

};
#endif
