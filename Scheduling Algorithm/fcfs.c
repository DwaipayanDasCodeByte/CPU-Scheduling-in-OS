#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burst_time[n], arrival_time[n], waiting_time[n], turnaround_time[n], completion_time[n];
    int total_wt = 0, total_tat = 0;

    // Input Arrival Time and Burst Time for each process
    printf("Enter Arrival Time and Burst Time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process P%d (Arrival Time, Burst Time): ", i + 1);
        scanf("%d %d", &arrival_time[i], &burst_time[i]);
    }

    // Sort processes by Arrival Time (FCFS rule)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arrival_time[i] > arrival_time[j]) {
                // Swap Arrival Time
                int temp = arrival_time[i];
                arrival_time[i] = arrival_time[j];
                arrival_time[j] = temp;

                // Swap Burst Time to match
                temp = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = temp;
            }
        }
    }

    // Calculate Completion Time
    int current_time = 0; // Tracks system time
    for (i = 0; i < n; i++) {
        if (current_time < arrival_time[i]) {
            current_time = arrival_time[i]; // CPU waits until the process arrives
        }
        completion_time[i] = current_time + burst_time[i];
        current_time = completion_time[i];
}

    // Calculate Turnaround Time and Waiting Time
    for (i = 0; i < n; i++) {
        turnaround_time[i] = completion_time[i] - arrival_time[i];              // TAT = CT - AT
        waiting_time[i] = turnaround_time[i] - burst_time[i];                   // WT = TAT - BT
        total_wt += waiting_time[i];
        total_tat += turnaround_time[i];
    }

    // Display Results
    printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, arrival_time[i], burst_time[i], completion_time[i], turnaround_time[i], waiting_time[i]);
    }

    // Calculate and display average WT and TAT
    float avg_wt = (float)total_wt / n;
    float avg_tat = (float)total_tat / n;
    printf("\nAverage Waiting Time: %.2f\n", avg_wt);
    printf("Average Turnaround Time: %.2f\n", avg_tat);

    return 0;
}
