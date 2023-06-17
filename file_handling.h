#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H
#include <fstream>
#include <string>


class file_handling
{
private:
    std::fstream file;
public:
    file_handling();
    ~file_handling();
    void save();
    void read();
};

#endif // FILE_HANDLING_H
