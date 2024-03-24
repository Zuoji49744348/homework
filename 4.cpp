#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int rating[4][6] = 
	{
		{3,1,5,2,1,5},
		{4,2,1,4,2,4},
		{3,1,2,4,4,1},
		{5,1,4,2,4,2} };
	int user[3][2];
	for (int i = 0; i < 3; i++)
	{
		cout << "please enter the movie number and your rate" << endl;
		cin >> user[i][0] >> user[i][1];
	}
	int distance[4] = { 0,0,0,0 };
	for (int j = 0; j < 4; j++)
	{
		for (int z = 0; z < 3; z++)
		{
			distance[j] += pow(rating[j][user[z][0] - 100] - user[z][1], 2);
		}
	}
	int mininum = 0;
	for (int i = 0; i < 2; i++)
	{
		if (distance[i + 1] < distance[i])
		{
			mininum = i+1;
		}
	}
	cout << "the closest match is reviewer " << mininum << endl;
	int movie_number[6] = { 0,0,0,0,0,0 };
	for (int i = 0; i < 3; i++)
	{
		movie_number[user[i][0] - 100] = 1;
	}
	for (int i = 0; i < 6; i++)
	{
		if (movie_number[i] == 0) 
		{
			cout << rating[mininum][i] << "for movie" << 100 + i << endl;
		}
	}
	return(0);
}