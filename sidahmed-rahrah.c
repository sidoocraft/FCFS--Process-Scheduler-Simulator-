#include <stdio.h>

int main() {
    int n;
    int arrival[10], duration[10];
    int finish[10], total[10], wait[10];
    int i;
    float avgWait = 0, avgTotal = 0;

    printf("Enter number of tasks: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nTask %d\n", i + 1);
        printf("Arrival time: ");
        scanf("%d", &arrival[i]);
        printf("Duration time: ");
        scanf("%d", &duration[i]);
    }

    finish[0] = arrival[0] + duration[0];

    for(i = 1; i < n; i++) {
        finish[i] = finish[i - 1] + duration[i];
    }

    for(i = 0; i < n; i++) {
        total[i] = finish[i] - arrival[i];
        wait[i] = total[i] - duration[i];
        avgWait += wait[i];
        avgTotal += total[i];
    }

    avgWait = avgWait / n;
    avgTotal = avgTotal / n;

    printf("\n============================================================\n");
    printf("Task  Arrival  Duration  Finishes  Total Time  Wait Time\n");
    printf("============================================================\n");

    for(i = 0; i < n; i++) {
        printf("%d     %d        %d        %d        %d          %d\n",
               i + 1,
               arrival[i],
               duration[i],
               finish[i],
               total[i],
               wait[i]);
    }

    printf("============================================================\n");
    printf("Average Total Time: %.2f\n", avgTotal);
    printf("Average Wait Time: %.2f\n", avgWait);

    return 0;
}
