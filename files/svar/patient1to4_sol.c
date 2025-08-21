#include <stdio.h> /* printf */
#include <math.h> /* pow, sqrt */

#define N 7
#define N_statistics 3
#define N_genders 2

enum Gender
{
	Male=0, Female=1
};

// Patient template
struct Patient
{
	int id;
	int age;
	float heightM;
	float weightKg;
	enum Gender gender;
};

struct statistics
{
	float gennemsnit;
	float afvigelse;
	int n;
};


int main()
{

	struct Patient patients[N] = {{.id=99, .age=18, .heightM=1.82, .weightKg=88.0, .gender=Male},
			{.id=93, .age=35, .heightM=1.63, .weightKg=69.0, .gender=Female},
			{.id=89, .age=25, .heightM=1.80, .weightKg=75.0, .gender=Male},
			{.id=83, .age=31, .heightM=1.51, .weightKg=70.0, .gender=Female},
			{.id=46, .age=29, .heightM=1.75, .weightKg=63.0, .gender=Female},
			{.id=16, .age=56, .heightM=1.52, .weightKg=54.0, .gender=Female},
			{.id=17, .age=16, .heightM=1.65, .weightKg=50.0, .gender=Male}};

	// 2. Udregn mean og std
	struct statistics stats[N_genders][N_statistics] = {{0.0,0.0},{0,0.0},{0.0,0.0}};

	// mean
	for (int i_patient = 0; i_patient < N; i_patient++)
	{
		int g = patients[i_patient].gender;
		stats[g][0].gennemsnit += patients[i_patient].age;
		stats[g][0].n++;
		stats[g][1].gennemsnit += patients[i_patient].heightM;
		stats[g][1].n++;
		stats[g][2].gennemsnit += patients[i_patient].weightKg;
		stats[g][2].n++;
	}

	for (int g = 0; g < N_genders; g++)
	{
		for (int i = 0; i < N_statistics; i++)
		{
			stats[g][i].gennemsnit /= stats[g][0].n;
		}
	}


	for (int i_patient = 0; i_patient < N; i_patient++)
	{
		int g = patients[i_patient].gender;
		stats[g][0].afvigelse += pow(patients[i_patient].age - stats[g][0].gennemsnit, 2.0);
		stats[g][1].afvigelse += pow(patients[i_patient].heightM - stats[g][1].gennemsnit, 2.0);
		stats[g][2].afvigelse += pow(patients[i_patient].weightKg - stats[g][2].gennemsnit, 2.0);
	}

	for (int g = 0; g < N_genders; g++)
	{
		for (int i = 0; i < N_statistics; i++)
		{
			int n = stats[g][i].n;
			stats[g][i].afvigelse = sqrt(stats[g][i].afvigelse/(n-1));
		}
	}

	printf("### Descriptive Statistics :\n");
	// Print patient informationen ud for patient.
	for (int g = 0; g < N_genders; g++)
	{
	(g==Male) ? printf("Males:\n") : printf("Females:\n");
	printf("  Age: %.2f (%.2f)\n",stats[g][0].gennemsnit, stats[g][0].afvigelse);
	printf("  Height: %.2f (%.2f) M\n",stats[g][1].gennemsnit, stats[g][1].afvigelse);
	printf("  Weight: %.2f (%.2f) Kg\n",stats[g][2].gennemsnit, stats[g][2].afvigelse);
	}
	return 0;
}
