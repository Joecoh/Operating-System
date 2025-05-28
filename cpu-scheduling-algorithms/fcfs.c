echo "Enter number of processes:"
read n

declare -a bt wait tat
total_wt=0
total_tat=0

for (( i=0; i<n; i++ ))
do
    echo "Enter burst time for process $((i+1)):"
    read bt[i]
done

wait[0]=0

for (( i=1; i<n; i++ ))
do
    wait[i]=$(( wait[i-1] + bt[i-1] ))
done

echo "P#  Burst  Wait  Turnaround"
for (( i=0; i<n; i++ ))
do
    tat[i]=$(( bt[i] + wait[i] ))
    total_wt=$(( total_wt + wait[i] ))
    total_tat=$(( total_tat + tat[i] ))
    echo "$((i+1))   ${bt[i]}     ${wait[i]}      ${tat[i]}"
done

echo "Average Waiting Time: $(echo "scale=2; $total_wt/$n" | bc)"
echo "Average Turnaround Time: $(echo "scale=2; $total_tat/$n" | bc)"
