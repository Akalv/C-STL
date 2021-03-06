// C++STL.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<queue>
using namespace std;

//vector模板重载<<
template<typename T>
ostream& operator<<(ostream& s, const vector<T>& v) {
	s.put('[');
	char comma[3] = { '\0',' ','\0' };
	for (const auto& e : v) {
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']';
}

int main()
{
#pragma region string
	///string类///
	//string s = "hahaah";
	//cout << s.c_str()<<endl; //返回字符串的不可修改的C字符数组版本,atoi转整数可以用到
	//string number = "123";
	//int n = stoi(number);//将C++中的字符串转为整数
	//cout << n + 1 << endl;//124
	//cout << number + '1' << endl;//1231 //+号可以将字符串或字符相连
	//cout << s.empty()<<endl;//是否为空
	//cout << s.size()<<endl; //长度
	//cout << s.max_size()<<endl; //系统能达到的最大存储量
	//s.clear();//清空
	//cout << s << endl;
	//s.insert(0, "s");//插到index为0的位置
	//cout << s << endl;//s
	//s.erase(0, 1);//擦除[0,1)的字符，还可用迭代器
	//cout << s << endl;
	//number.replace(0, 2, "AS");//从第0个开始替换两个
	//cout << number << endl;
	//cout << number.substr(0, 1) << endl;//求子串 A
	//cout << number.find('A')<< endl;//查找，返回位置
	//string::npos;//特殊值，等于size_type类型可表示的最大值.
	//if (number.find('S') == string::npos) {
	//	cout << "no found";
	//}
	//else {
	//	cout << "founded";
	//}
#pragma endregion


#pragma region vector
	///vector类///
	//一些基础操作是跟string类似的
	//vector<string> v1{ "hahaha","hehehe","wuwuwu" };
	//cout << v1 << endl;
	//vector<string> v2(v1);//复制
	//cout << v2 << endl;
	//vector<string> v3(5, "he");//5个he
	//cout << v3 << endl;
	//v1.push_back("555");//压入尾部
	//v2.pop_back();//弹出尾部
	////front 访问第一个元素
	////back 访问最后一个元素
	////其余函数与string大同小异
#pragma endregion

	
#pragma region map
	///map///
	//存储的数据 pair<key,value>(key,value)
	//map<int, string> m1;
	//m1[0] = "hehe";
	//m1[1] = "lueluelue";
	//m1[3] = "fawoi";
	//map<int,string> m2{
	//	{5,"fhaoiw"},
	//{4,"adhwoid"},
	//{10,"liwensheng"}
	//};
	//map<int, string>::iterator iter;
	//iter = m1.begin();
	//while (iter != m1.end()) {
	//	cout << iter->first << ":" << iter->second << endl;
	//	iter++;
	//}
	//cout << endl;
	//for (auto const p : m2) {
	//	cout << p.first << ":" << p.second << endl;
	//}
	//auto search = m1.find(3);
	//if (search != m1.end()) {
	//	cout << search->first << ":" << search->second << endl;
	//}
	////map特殊的函数有
	//cout << m1.count(0)<<endl; //键为1的元素有多少个，因为map是没有重复值的，所以只有1个或0个

#pragma endregion

	
#pragma region set
	///set///
	//和map很像
	//set<string> mySet;
	//mySet.insert("DOG");//set只能用这种插入方式
	//mySet.insert("CAT");
	//mySet.insert("FUCK");
	//for (auto s : mySet) {
	//	cout << s << " ";
	//}
	//cout << endl;
#pragma endregion

	
#pragma region 无序关联容器
	
	// 无序关联容器：unordered_set, unordered_map,
	//unordered_multiset,unordered_multimap。
	//无序关联容器提供能快速查找（均摊0（1），最坏情况O（n））的无序（hash）数据结构
#pragma endregion

#pragma region queue
	///queue///
queue<int> q;
for (int i = 0; i < 10;++i) {
	q.push(i);
}
while(!q.empty()) {
	cout << q.front() << " " << q.back() << endl;
	q.pop();
}
#pragma endregion

#pragma region stack
	//操作与queue一样，只是栈顶压栈顶出
#pragma endregion


	system("pause");
    return 0;
}

