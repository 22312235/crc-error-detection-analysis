def xor(a,b):
    return ''.join('0' if x==y else '1' for x,y in zip(a,b))

data="1101011011"
generator="10011"

print("Original Data:",data)
print("Generator:",generator)

print("\nCRC Demonstration")
