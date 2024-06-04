def main():
    n= int(input())
    numeros = []
    soma = 0
    for i in range(n):
        num = int(input())

        if num == 0 :
            numeros[i - 1] = 0
        else:
         numeros.append(num)
         soma += num
    print(soma)

main()