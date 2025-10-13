#include <fstream>
#include <iostream>
#include <string>

class MySed
{
private:
    std :: string infile;
    std :: string outfile;
    std ::string to_find;
    std ::string to_replace;
    bool error_check;
    std ::string getFileContent();
    std ::string &replace(std ::string &content);
    std ::string replaceHelper(std ::string content, int start, int end);
    int writeToFile(std ::string content);

public:
    bool ft_sed();
    MySed(std :: string _infile, std ::string _to_find, std ::string _to_replace);
    ~MySed();
};
