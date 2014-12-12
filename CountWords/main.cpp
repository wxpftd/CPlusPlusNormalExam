#include <iostream>
#include "Counter.h"

using namespace std;

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        cout << "You enter too much arguments. FilePath is OK." << endl; 
        return -1;
    }
    else if(argc == 1)
    {
        cout << "You forget entering FilePath." << endl; 
        return -1;
    }
    char* filePath = argv[1];
    Counter *counter = new Counter(filePath); 
    counter->countProcess();
    cout << counter->getWordCount() << endl;
    counter->printWordMap();

    return 0;
}
