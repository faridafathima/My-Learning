#include<iostream>
#include<string>
using namespace std;

class copy_construc
{
	char* name;
	int m_size;
public:
	copy_construc(char* m_buffer)
	{
		m_size = strlen(m_buffer);
		name = new char[m_size+1];
		memcpy(name, m_buffer, m_size);
		name[m_size] = '\0';
	}
	~copy_construc()
	{
		delete[]name;
	}
	copy_construc(copy_construc& old_one)
	{
		cout << "copy constructur is cald" << endl;
		m_size = old_one.m_size;
		name = new char[(old_one.m_size) + 1];
		memcpy(name,old_one.name,old_one.m_size);
		name[old_one.m_size] = '\0';
	}
    friend ostream& operator<<(ostream& stream, const copy_construc& c1);
	char& operator[](int index);
};

ostream& operator<<(ostream& stream, const copy_construc& c1)
{	
	stream << "result is:" << c1.name << "size is" << c1.m_size << endl;
	return stream;
}

char& copy_construc:: operator[](int index)
{
	return name[index];
}

void print_string(const copy_construc c1)
{
	cout << c1;
}

int main()
{
	char name[20];
	cout << "enter the name to pass" << endl;
	cin >> name;
	copy_construc c1(name);
	//copy_construc c2 = c1;
	//c2[3] = 'a';
	copy_construc c3(c1);
	c3[3] = 'c';
	print_string(c1);
	print_string(c3);
}
