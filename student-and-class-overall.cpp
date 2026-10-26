#include <iostream>

void averageOfClass(int arr[], int n)
{
	double sum = 0.0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	std::cout << "Average of class: " << sum / n;
}

double gpa(double s){ return s / 10;}

int main()
{
	int arr[20];
	const int n = 20;
	int score[10][20];
	const int m = 10;
	double sum2 = 0.0;
	
	std::cout << "GPA of class (Average score of each student)..." << '\n' << '\n';
	for (int k = 0; k < 20; k++)
	{
		for (int h = 0; h < 10; h++)
		{
			std::cout << "Enter course " << h + 1 << " score: ";
			std::cin >> score[h][k];
			sum2 += score[h][k];
		}
		std::cout << "GPA: " << gpa(sum2) << '\n' << '\n';
	}
	
	for (int i = 0; i < n; i++)
	{
	    std::cout << "Student " << i + 1 << "  grade: ";
	    std::cin >> arr[i];
	}
	
	std::cout << '\n';
    averageOfClass(arr, n);
	
	return 0;
}