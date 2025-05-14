#include<iostream>
using namespace std;

template <typename t>
class arrays
{
public:
	int size;
	int index;
	t* arr;

	arrays()
	{
		size = 5;
		arr = new t[5];
		index = -1;
	}
	arrays(t data)
	{
		size = 5;
		arr = new t[5];

		index++;
		arr[index] = data;
	}

	void grow()
	{
		if (index == size)
		{
			size = size * 2;
			t* temp = new t[size];
			for (int i = 0; i <= index; i++)
			{
				temp[i] = arr[i];
			}
			delete[]arr;
			arr = temp;
		}
	}
	void decay()
	{
		if (index < (size / 2))
		{
			size = size / 2;
			t* temp = new t[size];
			for (int i = 0; i <= index; i++)
			{
				temp[i] = arr[i];
			}
			delete[]arr;
			arr = temp;
		}
	}
	void del_start()
	{
		for (int i = 0; i < index; i++)
		{
			arr[i] = arr[i + 1];
		}
		index--;
		decay();
	}
	void add_end(t data)
	{
		index++;
		grow();
		arr[index] = data;
	}
	void del_end()
	{
		index--;
		decay();
	}

	t get_start()
	{
		return arr[0];
	}
	t get_end()
	{
		return arr[index];
	}

	bool search(t data)
	{
		for (int i = 0; i < index + 1; i++)
		{
			if (data == arr[i])
				return true;
		}
		return false;
	}

	

	void print()
	{
		for (int i = 0; i <= index; i++)
			cout << arr[i] << "<--";
		cout << endl;
	}

	t operator[](int i)
	{
		return arr[i];
	}
};
