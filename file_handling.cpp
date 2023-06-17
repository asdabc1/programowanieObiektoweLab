#include "file_handling.h"

using namespace std;

file_handling::file_handling() {
    file.open("saveFile.txt", ios_base::app);
}

file_handling::~file_handling() {
    file.close();
}
