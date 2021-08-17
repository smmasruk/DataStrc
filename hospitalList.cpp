#include <iostream>
#include <string>
using namespace std;
struct patient
{
	int pid;
	char name[50];
	float mass;
} p[5];
struct doc
{
	int did;
	char dname[50];
	char degree[50];
	int dphone;
} d[2];
int main()
{
	cout << "Patient Informatin" << endl;
	for (int i = 0; i < 5; i++)
	{
		p[i].pid = i + 1;
		cout << "Patient ID" << p[i].pid << endl;
		cout << "Name:" << endl;
		cin >> p[i].name;
		cout << "weight" << endl;
		cin >> p[i].mass;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "ID:" << p[i].pid << endl;
		cout << "Name:" << p[i].name << endl;
		cout << "weght:" << p[i].mass << endl;
	}
	cout << "doc Informatin" << endl;
	for (int i = 0; i < 2; i++)
	{
		d[i].did = i + 1;
		cout << "Doc ID" << p[i].pid << endl;
		cout << "Name:" << endl;
		cin >> d[i].dname;
		cout << "degree:" << endl;
		cin >> d[i].degree;
		cout << "Phone" << endl;
		cin >> d[i].dphone;
	}
	for (int i = 0; i < 2; i++)
	{
		cout << d[i].did << endl;
		cout << d[i].dname << "," << d[i].degree << endl;
		cout << d[i].dphone << endl;
	}
	return 0;
}
