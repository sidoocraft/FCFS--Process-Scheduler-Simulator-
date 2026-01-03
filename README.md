FCFS Process Scheduler Simulator
Introduction

In modern operating systems, CPU scheduling is a critical function that determines the order in which processes access the CPU. The First-Come, First-Served (FCFS) scheduling algorithm is one of the simplest and most intuitive. It follows a non-preemptive queue-based system, where the process that arrives first is executed first.

The FCFS Process Scheduler Simulator is a tool designed to help students, developers, and enthusiasts visualize the behavior of FCFS scheduling, calculate process metrics, and analyze the impact of process order on system performance.

Project Objectives

Simulate CPU scheduling using the FCFS algorithm.

Understand the behavior of non-preemptive scheduling.

Calculate Waiting Time (WT), Turnaround Time (TAT), and Completion Time (CT) for processes.

Visualize process execution using a Gantt chart.

Analyze the performance and efficiency of FCFS scheduling.

Serve as an educational tool for operating system learners.

Methodology

Process Data Collection: User inputs Process ID, Arrival Time, and Burst Time for each process.

Process Sorting: Processes are sorted in ascending order of arrival time.

Scheduling Simulation: Processes are executed in order of arrival (non-preemptive).

Calculation of Metrics:

Completion Time (CT) = Time process finishes execution

Turnaround Time (TAT) = CT - Arrival Time

Waiting Time (WT) = TAT - Burst Time

Visualization: Gantt chart shows the sequence and duration of each process execution.

Result Analysis: Average WT and TAT are calculated to evaluate performance.

Implementation Details

The simulator can be implemented in programming languages such as C, C++, Java, or Python.

Modules:

Input Module: Accepts number of processes and their details.

Sorting Module: Sorts processes by arrival time.

Scheduling Module: Executes processes according to FCFS and calculates metrics.

Output Module: Displays results and generates a Gantt chart.

Optional Enhancements: Input validation and dynamic addition of processes.

Algorithm Explanation

Steps of FCFS Scheduling:

Initialize the ready queue with all processes.

Sort processes by arrival time.

Execute each process to completion (non-preemptive).

Calculate metrics:

Completion Time (CT) = Start Time + Burst Time

Turnaround Time (TAT) = CT - Arrival Time

Waiting Time (WT) = TAT - Burst Time

Repeat until all processes finish execution.

Display results along with a Gantt chart.

Flow: Input Process Data → Sort by Arrival Time → Execute Process → Calculate CT, TAT, WT → Display Result & Gantt Chart

Sample Input

Process 1: Arrival Time = 0, Burst Time = 5
Process 2: Arrival Time = 1, Burst Time = 3
Process 3: Arrival Time = 2, Burst Time = 8
Process 4: Arrival Time = 3, Burst Time = 6

Sample Output

Process 1 → Completion Time = 5, Turnaround Time = 5, Waiting Time = 0
Process 2 → Completion Time = 8, Turnaround Time = 7, Waiting Time = 4
Process 3 → Completion Time = 16, Turnaround Time = 14, Waiting Time = 6
Process 4 → Completion Time = 22, Turnaround Time = 19, Waiting Time = 13

Gantt Chart:
P1 | P2 | P3 | P4
0 5 8 16 22

Average Turnaround Time (TAT) = 11.25
Average Waiting Time (WT) = 5.75

Observations:

Processes are executed in the order they arrive.

Longer processes may delay shorter processes (convoy effect).

FCFS is simple but may not always provide optimal CPU utilization.

Conclusion

The FCFS Process Scheduler Simulator demonstrates how processes are scheduled using the First-Come, First-Served algorithm. By calculating Waiting Time, Turnaround Time, and Completion Time, and visualizing execution with a Gantt chart, users can better understand process scheduling and the effects of non-preemptive algorithms. This project serves as an effective educational tool for learning operating system concepts and analyzing CPU scheduling efficiency.
