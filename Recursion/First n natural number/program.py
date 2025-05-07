def printAscending(n):
  if(n<1):
    return
  else:
    printAscending(n-1)
    print(n,end=" ")

def printDescending(n):
  if(n<1):
    return
  else:
    printAscending(n-1)
    print(n,end=" ")
   

printAscending(20)
print("\n")
printDescending(10)
    
    
    