# Patching Array

<h2>
Observation
</h2>
<h3>
If we can reach all numbers upto n then using any number k we reach all numbers upto n+k 
</h3>

<h2>

Algo Steps -
</h2>
<h3>

1. Run a while loop till when curr_possible is less than n

2. In the while loop if ind is less than 0 and we can use array element to increase curr_possible do it else

3. We increment ans and "patch" a new element curr_possible+1 such curr_possible becomes curr_possible*2+1

</h3>
