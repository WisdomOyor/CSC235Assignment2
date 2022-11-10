#include <stdio.h>
#include <string.h>

int main(){
    //Declare the variables
    int numberOfTestCases;
    char adamInput[100][100];
    int i;
    int j;
    char *testCase;

    //Read the string from user
    printf("Enter the number of test cases: \n");
    scanf("%d", &numberOfTestCases);

    //Get the test cases
    //NB: The rule is, there are only two sets of inputs: "U" and "D".
    for (i = 0; i < numberOfTestCases; i++)
    {   
        printf("Enter a test case: ");
        scanf("%s", adamInput[i]);
        testCase = adamInput[i];
        int steps = 0;
        
        for(int j = 0; j < strlen(testCase); j++) {
            if (testCase[j] == 'D'){
                break;
            } steps += 1;
        }
        //Display the number of steps
        printf("Number of steps: %i\n", steps);
    }  

    return 0;
}