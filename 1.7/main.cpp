#include <cstdint>
#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

int main()
{
    ofstream outfile("seq_data.txt", ios_base::app);
    char usr_name[] = "zhangrun";
    uint32_t num_right = 0;
    uint32_t num_tries = 0;


    if (!outfile)
    {
        cerr << "open file fail \n";
    }
    else
    {
        outfile << usr_name << ' '
                << num_tries << ' '
                << num_right << endl;
    }

    ifstream infile("seq_data.txt");
    uint32_t num_core = 0;

    if (!infile)
    {
        //
    }
    else
    {
        string name;
        uint32_t nt;
        uint32_t nc;

        while (infile >> name)
        {
            infile >> nt >> nc;
            if (name == usr_name)
            {
                cout << "find it, " << usr_name << endl;
            }
        }
    }

    return 0;
}