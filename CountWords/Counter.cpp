#include <iostream>
#include <fstream>
#include "Counter.h"
#include <ctype.h>
#include <cstring>
#include <vector>

Counter::Counter()
{
    this->wordCount = 0;
    this->filePath = nullptr;
}

Counter::Counter(char* filePath)
{
    this->filePath = filePath;
    this->wordCount = 0;
    fin = new std::ifstream(filePath, std::ios::in);

}

Counter::~Counter()
{
    fin->close();
}

bool Counter::filter(char *oriString)
{   
    std::string preStr(oriString);
    for(char ch : preStr)
    {
        if (isalpha(ch))        
            return true;
    }
    return false;
}

std::string Counter::cleanWord(char *oriString)
{
    char tempStr[100];
    int pos = 0;
    for (int i=0; i<int(strlen(oriString)); i++)
    {
        if (isalpha(oriString[i]))        
            tempStr[pos++]=oriString[i];
    }
    tempStr[pos] = '\0';
    std::string preStr(tempStr);
    return preStr;
}


long Counter::countProcess()
{
    char *strtokstate = nullptr;
    char *last;
    bool isConnect = false;
    while (!fin->eof()) 
    {
        char buffer[1000];
        fin->getline(buffer, 999, '\n'); 
        char *pobuffer = buffer;
        char *word = strtok_r(pobuffer, " ,*()", &strtokstate);
        while (word != nullptr)
        {
            if (filter(word)) 
            {
                if (isConnect)
                {
                    strcat(word, last);
                    last = word;
                    isConnect = false;
                }
                else 
                {
                    last = word;
                    ++wordCount;
                }
                std::string tempWord(cleanWord(word));        
                if (this->wordMap.find(tempWord) != wordMap.end())
                {
                    ++wordMap[tempWord]; 
                }
                else
                {
                    wordMap.insert(make_pair(tempWord, 1)); 
                }
            }
            word = strtok_r(nullptr, " ,*()" , &strtokstate);
        }
        if (last[strlen(last)-1] == '-')
            isConnect = true;
    }
    return 0;
}

long Counter::getWordCount()
{
    return this->wordMap.size();
}

bool cmp(const std::pair<std::string, long>& x, const std::pair<std::string, long>& y)
{
    return x.second < y.second;
}

void Counter::printWordMap()
{
    std::vector<std::pair<std::string, long>> tempMap(wordMap.begin(), wordMap.end());
    std::sort(tempMap.begin(), tempMap.end(), cmp);
    for (int i=0; i != int(tempMap.size()); ++i)
        std::cout << tempMap[i].first << " " << tempMap[i].second << std::endl;
}
