#include <iostream>
#include <vector>
#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main() {

    vector<int> v(7);
    for (int i = 0; i <= 6; i++)
    {
        /* code */
        v[i] = i;
    }

    vector<int>::iterator beginIndex;;
    for(beginIndex = v.begin(); beginIndex != v.end(); beginIndex++){
        cout << *beginIndex << endl;
    }


    pid_t pid = getpid();
    if(pid != 0) {
        cout << "pid == " << pid <<endl;
    }


    return 0;
}