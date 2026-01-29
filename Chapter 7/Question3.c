#include<stdio.h>

typedef struct student {
    int roll_num;
    char name[100];
    int num[3];
    int total;
    float percentage;
    char grade;
} stu;

int main() {
    stu st;
    int i;

    while (1) {
    	printf("\t\t\t\t\t------ STUDENT MANAGEMENT SYSTEM ------\n\n");
        printf("\nEnter Roll Number (-1 to exit): ");
        scanf("%d", &st.roll_num);

        if (st.roll_num == -1){
		    break;
		}

        printf("Enter Student Name: ");
        scanf("%s", st.name);

        st.total = 0;
        for (i = 0; i < 3; i++) {
            printf("Enter Marks of Subject %d: ", i + 1);
            scanf("%d", &st.num[i]);
            st.total += st.num[i];
        }

        st.percentage = (st.total / 300.0) * 100;

        if (st.percentage >= 90 && st.percentage <= 100){
			st.grade = 'A';
		}
        else if (st.percentage >= 75 && st.percentage < 90){
        	st.grade = 'B';	
		}
        else if (st.percentage >= 60 && st.percentage < 75){
			st.grade = 'C';
		}
        else{
    	    st.grade = 'D';     	
		}


        printf("\n--- Student Record ---\n");
        printf("Name: %s\n", st.name);
        printf("Roll No: %d\n", st.roll_num);
        printf("Total: %d\n", st.total);
        printf("Percentage: %.2f\n", st.percentage);
        printf("Grade: %c\n", st.grade);
    }

    return 0;
}
