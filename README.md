# Algorithm Design and Analysis- Lab Submission
Code written as part of Object Oriented Algorithm Design and Analysis Practice Lab course @IIITDM Kancheepuram, 2020.
## Team :
        Vamsi Krishna Thigulla - COE18b056
        Srinivasan R Sharma    - COE18b065
        Paleti Krishnasai      - CED18i039
        Darshan VSS            - CED18i056
        Yoga Sri Varshan       - CED18i058
        John Zakkam            - CED18i059
 ## Deployment
 To run the code enter the following in the the terminal fro the respective directory (LAB 1, LAB 2, and so on)
 

* Once in the directory, type **make** to compile the respective files.
* Once file is made, type **./output.out** to run the program.
* Once the file is run, type **make clean** to clean the directory.
* exit the directory and proceed with next
 
 
#### Lab 1 :
``` 
         Discover three different logic for GCD(m,n), write iterative and recursive code
```
#### Lab 2
```
         1. Does there exist q and r in A such that p=q+r? (3 logics)            
         2. Identify the position of the first '-1' in array (3 logics)
         3. Print 5 patterns from given integer 'n
```
#### Lab 3
```
         1. Sort ternary array preserving stability (3 logics)
         2. Partition given integer array into two of equal size such that their respective sums are maximum.
```
#### Lab 4
```
         1. Given 'n' numbers, compute GCD using DC.   Similarly, LCD
         2. Count the number of 1's in a binary array using DC
         3. Count the number of negative numbers in an integer array using DC
         4. Implement Towers of Hanoi.
         5. Implement 2-way, 3-way merge sort.    
```
#### Lab 5
```
   Input:   Sorted Arrays; A1,...Ak    Question:  Sort union of A_i 's
         1. Incremental Design   ;  Sort(A_1,A_2), A_3), A_4,...
         2. Divide and Conquer  ;   Split k arrays into two sets of k/2 each.   Let this be done recursively until set size is 2.       
         3. Maintain k pointers,   Find MIN out of k elements pointed by the pointers and output MIN.
         4. Construct BST on union of A_i 's and perform inorder traversal
         5. Maintain a heap on k elements pointed by k pointers,  then extract MIN.
         6. Sorting 
```
#### Lab 6
```
         1. Primality check in O(nrootn).
         2. O((logn)^2) - own algo.
         3. Find k smallest elements using quicksort partition routine.
         4. Find minimum and maximum in 3n/2-2 comparisons
         5. Find minimum and maximum in 2n-3 comparisons.
```
#### Lab 7
```
       Module 1

         DFS(Graph G) -- choose start vertex arbitrarily and perform DFS
         DFS(Graph G, vertex s)
         DFS(Graph G, vertex s, vertex t) -- is t reachable from s

       Module 2

         BFS(Graph G)
         BFS(Graph G, vertex s)
         BFS(Graph G, vertex s, vertex t)

       Module 3
       
         BFS_SPATH(G,s,flag=0) -- returns spath in unweighted graphs
         BFS_SPATH(G,s,flag=1) -- returns spath in weighted graphs
         LPATH(Tree T, flag=0) - returns the longest path in T (undirected tree)
         LPATH(Tree T, flag=1) - returns the longest path in a DAG
         MAX_Weight_MST(Graph G)

       Module 4
      
         Test_bipartite(Graph G)
         Test_articulationpoints(Graph G)
         Test_bridges(Graph G)

       Module 5

        MST_Prim(Graph G)
        MST_Kruskal(Graph G)
        MST_youralgo(Graph G)

```
## Acknowledgments
* Several online resourses have been referred in the process of writing the code.
