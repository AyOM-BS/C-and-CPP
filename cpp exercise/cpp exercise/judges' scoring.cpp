//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <deque>
//#include <vector>
//using namespace std;
//
//class competitor
//{
//public:
//	string name;
//	int average = 0;
//	competitor(string n) : name(n){}
//};
//void CreateCompetitor(vector<competitor>& c)
//{
//	string name = "ABCDE";
//	for(string::iterator it = name.begin(); it != name.end(); ++it)
//	{
//		c.push_back(competitor(string(1, *it)));
//		//string(1,*it)的意思是把it指向的字符付给string的构造函数，构造一个只有一个字符的string对象
//	}
//}
//void InputScore(vector<competitor>& c)
//{
//	int score;
//	for (vector<competitor>::iterator it = c.begin(); it != c.end(); ++it)
//	{
//		deque<int> d;
//		for (int i = 0; i < 10; ++i)
//		{
//			score = rand() % 10 + 1;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.erase(d.begin());
//		d.erase(d.end() - 1);
//		for (int i = 0; i < d.size(); ++i)
//		{
//			it->average += d[i];
//		}
//		it->average = it->average / d.size();
//	}
//}
//void PrintScore(vector<competitor>& c)
//{
//	for (vector<competitor>::iterator it = c.begin(); it != c.end(); ++it)
//	{
//		cout << "Name: " << it->name << " Average Score: " << it->average << endl;
//	}
//}
//int main()
//{
//	vector<competitor> c;
//	CreateCompetitor(c);
//	InputScore(c);
//	PrintScore(c);
//	return 0;
//}