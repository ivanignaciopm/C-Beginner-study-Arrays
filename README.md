# C Beginner Study: Arrays

The main goal of this exercise is to visualize how C work with matrices and what is one of the common methods to get the size of a row, of a column and the matrix itself.

One interesting aspect is that in C you work with the size in bytes of the elements.

By default C let you create a matrix with no number of rows defined:

```
int matrix[][4];
```

In this example the array could have any number of rows you want. **However the size of each each row is mandatory to be defined;** in this case we have made each row of size 4.

You can try with this code adding a new row to the matrix, and see how the result changes. To try this you should:

* [ ] Add a row to the matrix
* [ ] Compile it with `gcc c_exercise.c -o c_exercise`
* [ ] Run it with `./c_exercise`
