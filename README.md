# doge-compiler

A compiler written in C++ for learning. Using LLVM for code generation.

Target syntax:
```
arr = [1,2,3,4,5]

printOddAddEven = (arr) {
    
    for (i, arr) where (i < 5) {
        
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] + 1

        } else {
            print (1)   
        }
    }

    return arr
}

printOddAddEven (arr)
```
