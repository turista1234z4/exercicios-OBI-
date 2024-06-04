def main() :
    n = int(input())
    palavra1 = input()
    
    n =int(input())
    palavra2 = input()

    resp = 0
    i = 0
    while True:
        if i == len(palavra1) or i == len(palavra2):
            break
        if palavra1[i] == palavra2[i]:
            resp = resp+1
            i = i + 1

        else:
            break 

    print(resp)

main()