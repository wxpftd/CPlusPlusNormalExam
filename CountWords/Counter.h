#ifndef Counter_H 
#define Counter_H
#include <string>
#include <map>
#include <vector>
#include <algorithm>

class Counter 
{
    private:
        long wordCount;
        char *filePath; 
        std::ifstream *fin;
        std::map<std::string, long> wordMap;
        //bool cmp(const std::pair<std::string, long>&, const std::pair<std::string, long>&);
    public:
        Counter();
        Counter(char*);
        ~Counter();
        static bool filter(char*);
        static std::string cleanWord(char*);
        long countProcess();
        long getWordCount();
        void printWordMap();
};

#endif
