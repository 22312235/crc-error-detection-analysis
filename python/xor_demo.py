"""
XOR Logic Demonstration
CMPE332 - Fundamentals of Computer Networks

This program demonstrates the XOR operation used in
Cyclic Redundancy Check (CRC) calculations.
"""

def xor_operation(binary1, binary2):
    """Perform XOR between two binary strings."""

    if len(binary1) != len(binary2):
        raise ValueError("Binary strings must have the same length.")

    result = ""

    for bit1, bit2 in zip(binary1, binary2):
        if bit1 == bit2:
            result += "0"
        else:
            result += "1"

    return result


def main():
    binary1 = "1011"
    binary2 = "1101"

    print("=" * 40)
    print("XOR Logic Demonstration")
    print("=" * 40)

    print(f"Binary A : {binary1}")
    print(f"Binary B : {binary2}")

    result = xor_operation(binary1, binary2)

    print(f"XOR Result: {result}")


if __name__ == "__main__":
    main()
