#include "MySed.hpp"

MySed ::MySed(char *_infile, char *_outfile, std ::string _to_find, std ::string _to_replace)
{
    infile = _infile;
    outfile = _outfile;
    to_find = _to_find;
    to_replace = _to_replace;
    error_check = true;
}

std ::string MySed ::getFileContent()
{
    std ::ifstream file(infile);
    std ::string content;
    std ::string line;
    char c;

    if (file.is_open() == false)
    {
        std ::cout << "Failed To Open The File " << infile << std ::endl;
        error_check = false;
    }
    while (file.get(c))
        content += c;
    file.close();
    return (content);
}

std ::string MySed ::replaceHelper(std ::string content, int start, int length)
{
    std ::string new_string;
    new_string = content.substr(0, start);
    new_string += to_replace;
    new_string += content.substr(start + length);
    return (new_string);
}

std ::string &MySed ::replace(std ::string &content)
{
    std::size_t pos;
    while (true)
    {
        pos = content.find(to_find);
        if (pos == std ::string ::npos)
            break;
        content = replaceHelper(content, pos, to_find.length());
    }
    return (content);
}

int MySed ::writeToFile(std ::string content)
{
    std::ofstream file(outfile);
    if (file.is_open() == false)
    {
        std ::cout << "Failed To Open The File " << outfile << std ::endl;
        error_check = false;
    }
    file << content;
    file.close();
    return (1);
}

bool MySed ::ft_sed()
{
    std ::string content;
    content = getFileContent();
    if (error_check == false)
        return (false);
    content = replace(content);
    writeToFile(content);
    if (error_check == false)
        return (false);
    return (true);
}
MySed::~MySed()
{
}