#include <stdio.h>

int findTopStudent(int students, int subjects, int grades[][4]) {
    /**
     * findTopStudent - Finds the student with the highest total score.
     * @param students: Number of students (rows)
     * @param subjects: Number of subjects per student (columns)
     * @param grades: 2D array of student grades
     *
     * @return Index of the student with the highest total score
     */

    int topIndex = 0;
    int maxTotal = 0;
    int grade_sums[6];

    // TODO: Loop through each student and calculate their total score
    // TODO: Update maxTotal and topIndex when a higher total is found
    for (int i = 0; i < students; i++)
    {
        int sumofGrades = 0 ;
        for (int j = 0; j < subjects; j++)
        {
            sumofGrades += grades[i][j];
        }
       
        grade_sums[i]=sumofGrades;
    }
    for (int i = 0; i < students; i++)
    {
        maxTotal = grade_sums[0];
        if (grade_sums[i] > maxTotal)
        {
            maxTotal = grade_sums[i] ;
        }
    }
    for (int  i = 0; i < students; i++)
    {
        if (grade_sums[i] ==  maxTotal)
        {
            topIndex = i;
        }
        
    }
    
    

    return topIndex;
}

int main() {
    int grades[6][4] = {
        {75, 80, 70, 85},
        {90, 95, 88, 93},
        {60, 65, 70, 55},
        {100, 90, 95, 85},
        {45, 50, 40, 60},
        {85, 80, 75, 70}
    };

    int topStudent = findTopStudent(6, 4, grades);

    // TODO: Print the index or ID of the top student
    printf("%d",topStudent);

    return 0;
}
