class room
{
protected:
    char* rno = new char[4];
    char capacity[2];
    char tele_exe[3];

public:
    room(){}
    room(char r[4], char c[2], char t[3])
    {
        for (int x = 0; x < 4; x++)
            rno[x] = r[x];
        for (int x = 0; x < 2; x++)
            capacity[x] = c[x];
        for (int x = 0; x < 3; x++)
            tele_exe[x] = t[x];
    }

    void print()
    {
        for (int x = 0; x < 4; x++)
            cout << rno[x];
        cout << "    ";
        for (int x = 0; x < 2; x++)
            cout << capacity[x];
        cout << "    ";
        for (int x = 0; x < 3; x++)
            cout << tele_exe[x];
        cout << endl;
        
    }

    char* get_id()
    {
        return rno;
    }
};