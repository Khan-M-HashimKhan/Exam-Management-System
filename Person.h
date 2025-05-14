#include <string>
#include <iostream>
#include"Course.h"
#include"arrays.h"

using namespace std;

class person
{
protected:
    char first_name[7];
    char last_name[7]; 
    char dob[10];

    char* id=new char[4];

public:
    person()
    {}
    person(char f[7],char l[7], char d[10], char i[4])
    {
        for (int x=0;x<7;x++)
        {
            first_name[x] = f[x];
            last_name[x] = l[x];
        }
        for (int x=0;x<10;x++)
            dob[x]=d[x];
        for (int x = 0; x < 4; x++)
            id[x] = i[x];
    }

    char* get_id()
    {
        /*string temp;
        temp = id[0] + id[1] + id[2] + id[3];*/
        return id;
    }

    string get_name()
    {
        string temp;
        temp = first_name[0] + first_name[1] + first_name[2] + first_name[3] + first_name[4] + first_name[5] + first_name[6];
        temp = temp + " ";
        temp = temp + last_name[0] + last_name[1] + last_name[2] + last_name[3] + last_name[4] + last_name[5] + last_name[6];
        return (temp);
    }

    void print()
    {
        for (int y = 0; y < 7; y++)
            cout << first_name[y];

        cout << " ";

        for (int y = 0; y < 7; y++)
            cout << last_name[y];

        cout << " ";

        for (int y = 0; y < 10; y++)
            cout << dob[y];
        cout << " ";

        for (int y = 0; y < 4; y++)
            cout << id[y];

        cout << endl;
    }

    void print_name()
    {
        for (int y = 0; y < 7; y++)
            cout << first_name[y];

        cout << " ";

        for (int y = 0; y < 7; y++)
            cout << last_name[y];

        cout << " (";
        for (int y = 0; y < 4; y++)
            cout << id[y];
        cout << ")";

    }

};

class student : public person
{
public:
    arrays<Course*> registered_courses;

public:
    student() {}
    student(char f[7], char l[7], char d[10], char i[4])
    {
        for (int x = 0; x < 7; x++)
        {
            first_name[x] = f[x];
            last_name[x] = l[x];
        }
        for (int x = 0; x < 10; x++)
            dob[x] = d[x];
        for (int x = 0; x < 4; x++)
            id[x] = i[x];

    }

    void add_course(Course* cid)
    {
        registered_courses.add_end(cid);
    }

    void print()
    {
        person::print();
        cout << "Courses Enrolled:" << endl;
        for (int x = 0; x < registered_courses.index; x++)
        {
            registered_courses[x]->print_name();
            cout << endl;
        }
    }
    int num_of_cor()
    {
        return registered_courses.index;
    }

};

class instructor:public person
{
public:
    instructor(){}
    instructor(char f[7],char l[7], char d[10], char i[4])
    {
        for (int x=0;x<7;x++)
        {
            first_name[x] = f[x];
            last_name[x] = l[x];
        }
        for (int x = 0; x < 10; x++)
            dob[x] = d[x];
        for (int x = 0; x < 4; x++)
            id[x] = i[x];
    }
};
