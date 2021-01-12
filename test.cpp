#include <set>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char* buf1 = "ddd";
    const char buf2[10] = "ddd";

    int i = strcmp(buf1, buf2);
    cout << i << endl;
    cout << buf1[2] << " " << buf2[3] << endl;
    return 0;
}
