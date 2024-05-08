# Maximum Flow
<!-- 
<h2>
Observation
</h2>
<h3>
If we can reach all numbers upto n then using any number k we reach all numbers upto n+k 
</h3> -->





<h2>

Algo Steps -
</h2>
<h3>

1. While there are augmenting paths from source to sink keep on adding its capacity to net flow

2. Find Augmenting paths using bfs and store the parents to follow back the path and update the capacity

3. Update the capaciy 2D array 

4. Keep on repeating steps 2 and 3 till we find no augmenting path and then we get our answer maximum flow

</h3>
