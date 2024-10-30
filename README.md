# doge-compiler

A compiler written in C++ for learning. Using Flex for lexing, Bison for parsing and LLVM for code generation.

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

18/10/2024: Why is there more Makefile than C++? Because I bit off more than I could chew. Damn. I'm not giving up, I'm coming back another time. I need to properly learn C++ before this shit. Jesus Christ.

