for i in range(10):
    tot = int(input())
    diff = int(input())
    halfway = tot // 2
    half_diff = diff // 2

    if (tot % 2 == 0):
        klaudia = halfway + half_diff
        natalia = halfway - half_diff
                
    elif (tot % 2):
        klaudia = halfway + half_diff + 1
        natalia = halfway - half_diff
        
    print(klaudia)
    print(natalia)
     
