#include "function.h"
#include "compare.h"
void CreateSpeaker(vector<Speaker>& speakers)
{
	for (int i = 0; i < 12; i++)
	{
		string names = "ABCDEFGHJKLM";
		string str("Speaker");
		speakers.push_back(Speaker(str + names[i], 10000 + i + 1));
	}
}
void Partition(vector<Speaker>& speakers)
{
	default_random_engine e(time(0));
	shuffle(speakers.begin(), speakers.end(), e);
	cout << "Group 1" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Speaker Name: " << speakers[i].name << "\tSpeaker Number: " << speakers[i].number << endl;
	}
	cout << "Group 2" << endl;
	for (int i = 6; i < 12; i++)
	{
		cout << "Speaker Name: " << speakers[i].name << "\tSpeaker Number: " << speakers[i].number << endl;
	}
}
void GetScore1(vector<Speaker>& speakers)
{
	for(vector<Speaker>::iterator it = speakers.begin(); it != speakers.end(); it++)
	{
		vector<int> scores;
		for (int i = 0; i < 10; i++)
		{
			scores.push_back(rand() % 41 + 60);
		}
		sort(scores.begin(), scores.end());
		int sum = 0;
		for (int i = 1; i < 9; i++)
		{
			sum += scores[i];
		}
		it->score = (float)sum / 8;
	}
	cout << "Group 1" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Speaker Name: " << speakers[i].name << "\tSpeaker Number: " << speakers[i].number << "\tSpeaker Score: " << speakers[i].score << endl;
	}
	cout << "Group 2" << endl;
	for (int i = 6; i < 12; i++)
	{
		cout << "Speaker Name: " << speakers[i].name << "\tSpeaker Number: " << speakers[i].number << "\tSpeaker Score: " << speakers[i].score << endl;
	}
}
void Prompt1(vector<Speaker>& speakers)
{
	vector<Speaker> group1(speakers.begin(), speakers.begin() + 6);
	vector<Speaker> group2(speakers.begin() + 6, speakers.end());
	sort(group1.begin(), group1.end(), compare());
	sort(group2.begin(), group2.end(), compare());
	speakers.resize(speakers.size() >> 1);
	for (int i = 0; i < 3; i++)
	{
		speakers[i] = group1[i+3];
	}
	for (int i = 3; i < 6; i++)
	{
		speakers[i] = group2[i];
	}
	cout << "Prompt speakers:" << endl;
	for (vector<Speaker>::iterator it = speakers.begin(); it != speakers.end(); it++)
	{
		cout << "Speaker Name: " << it->name << "\tSpeaker Number: " << it->number << endl;
	}
}
void GetScore2(vector<Speaker>& speakers)
{
	for (vector<Speaker>::iterator it = speakers.begin(); it != speakers.end(); it++)
	{
		vector<int>scores;
		for (int i = 0; i < 10; i++)
		{
			scores.push_back(rand() % 60 + 40);
		}
		sort(scores.begin(), scores.end());
		int sum = 0;
		for (int i = 1; i < 9; i++)
		{
			sum += scores[i];
		}
		it->score = (float)sum / 8;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "Speaker Name: " << speakers[i].name << "\tSpeaker Number: " << speakers[i].number << "\tSpeaker Score: " << speakers[i].score << endl;
	}
}
void Prompt2(vector<Speaker>& speakers)
{
	sort(speakers.begin(), speakers.end(), Compare());
	speakers.resize(speakers.size() >> 1);
	cout << "Prompt speakers:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Speaker Name: " << speakers[i].name << "\tSpeaker Number: " << speakers[i].number << endl;
	}
}
void load(vector<Speaker>& speakers)
{
	ofstream ofs;
	ofs.open("winner.csv", ios::out | ios::app);
	for (int i = 0; i < 3; i++)
	{
		ofs << speakers[i].name << " " << speakers[i].score << "\t";
	}
	ofs << endl;
}
