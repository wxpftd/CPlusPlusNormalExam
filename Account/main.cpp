#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
    Account client(1122, 20000, 4.5);
    client.withDraw(2500);
    client.deposit(3000);
    cout << client.getBalance() << endl;
    cout << client.getMonthlyInterestRate() << endl;
    cout << client.getInitDate() << endl;
    return 0;
}
