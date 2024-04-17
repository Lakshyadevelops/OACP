# Counting Sub-Grids
<h2> 
Algo Steps -
</h2>
<h3>

1. Initialize ans to zero.

2. Iterate over a pair of rows and then iterate over a column counting the number of pair of cells in these rows having black color

3. count * (count-1)/2 is the number of sub grids possible by these dots

4. Similarly do this for ever other column 
</h3>

Note - It can be sped up a bit more by clubbing around 32 rows bit into an int and speeding up the algorithm approximately by a factor of 32

