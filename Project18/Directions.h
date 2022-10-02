#pragma once

int numbers[] = { 4,3,3,2,2,2,1,1,1,1 };
void Up(int a, int s, int t, char game[12][12]) {

	for (size_t i = s + 1; i > s - numbers[a] + 1; i--)
	{
		for (size_t k = t + 1; k < t + 2; k++)
		{
			game[i][k] = 2;
		}
	}


}


void Down(int a, int s, int t, char game[12][12]) {

	for (size_t i = s + 1; i <= s + numbers[a]; i++)
	{
		for (size_t k = t + 1; k < t + 2; k++)
		{
			game[i][k] = 2;
		}
	}

}

void Left(int a, int s, int t, char game[12][12]) {



	for (size_t i = s + 1; i < s + 2; i++)
	{
		for (size_t k = t + 1; k > t - numbers[a] + 1; k--)
		{
			game[i][k] = 2;
		}
	}


}

void Right(int a, int s, int t, char game[12][12]) {

	for (size_t i = s + 1; i < s + 2; i++)
	{
		for (size_t k = t + 1; k < t + numbers[a] + 1; k++)
		{
			game[i][k] = 2;

		}

	}

}