#include <string>
#include <iostream>

using namespace std;
class Course
{
protected:

    char name[3];
    char discription[30];
    char* id=new char[4];
    
public:
    Course (){}
    Course(char n[3], char d[30], char i[4])
    {
        for (int x=0;x<3;x++)
            name[x]=n[x];
        for (int x=0;x<30;x++)
            discription[x]=d[x];
        for (int x = 0; x < 4; x++)
            id[x] = i[x];
    }

    void print()
    {
        for (int x = 0; x < 4; x++)
            cout << id[x];
        cout << endl;
        for (int x = 0; x < 3; x++)
            cout << name[x];
        cout << endl;
        for (int x = 0; x < 30; x++)
            cout << discription[x];
        cout << endl;
    }

    char* get_id()
    {
        /*string temp;
        temp = id[0] + id[1] + id[2] + id[3];*/
        return id;
    }

    void print_name()
    {
        for (int x = 0; x < 3; x++)
            cout << name[x];
        cout << "(";
        for (int x = 0; x < 4; x++)
            cout << id[x];
        cout << ")";
        
    }
};
