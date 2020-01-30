	#include <stdio.h>

	int main() {
		float average;
		int i;
		int j;
		int grades[5][5]; // the outer array will hold me elements at most and the inner array will hold 5 elements at most
		/*
		VISUAL
		[
			[0, 11, 22, 33, 44],
			[100, 200, 300, 400, 500]
		*/
		grades[0][0] = 0;
		grades[0][1] = 11;
		grades[0][2] = 22;
		grades[0][3] = 33;
		grades[0][4] = 44;

		grades[1][0] = 100;
		grades[1][1] = 200;
		grades[1][2] = 300;
		grades[1][3] = 400;
		grades[1][4] = 500;

		// Initialization of the multi dimesntional array
		// int grades[5][5] = {
		// 	{0, 11, 22, 33, 44},
		// 	{100, 200, 300, 400, 500}
		// };

		/* TODO: complete the for loop with appropriate terminating conditions */
		for (i = 0; i < 4; i++) {
			average = 0;
			for (j = 0; j <4; j++) {
				average += grades[i][j];
			}

			/* TODO: compute the average marks for subject i */
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}