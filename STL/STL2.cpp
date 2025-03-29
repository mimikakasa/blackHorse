#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//vector容器中存放自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<Person>::iterator it=v.begin();it!=v.end();it++)
	{
		//it迭代器本身理解为指针 指向Person 因此解引用后是Person类就用.
		cout << "姓名： " << (*it).m_Name << " 年龄： " << (*it).m_Age << endl;
		cout << "姓名： " << it->m_Name << " 年龄： " <<  it->m_Age << endl;
	}
}

//存放自定义数据类型 指针
void test02()
{
	vector<Person*>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<Person*>::iterator it=v.begin(); it != v.end();it++)
	{
		//it指针指向指向Person的指针 二级指针 解引用后就是指向Person的指针 因此用箭头
		cout << "姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl; 
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}