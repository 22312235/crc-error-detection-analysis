def calculate_checksum(data):

    checksum = sum(data)

    while checksum >> 16:
        checksum = (checksum & 0xFFFF) + (checksum >> 16)

    checksum = ~checksum & 0xFFFF

    return checksum


def main():

    data = [
        0x1234,
        0x5678,
        0x9ABC,
        0xDEF0
    ]

    print("=" * 45)
    print("Internet Checksum Demonstration")
    print("=" * 45)

    print("Input Data:")

    for value in data:
        print(f"0x{value:04X}")

    checksum = calculate_checksum(data)

    print("\nCalculated Checksum:")
    print(f"0x{checksum:04X}")


if __name__ == "__main__":
    main()
