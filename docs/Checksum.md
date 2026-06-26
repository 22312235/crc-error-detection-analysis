# Internet Checksum

## Overview

The Internet Checksum is an error detection technique used by several Internet protocols.

It works by adding blocks of transmitted data using One's Complement arithmetic and attaching the resulting checksum to the message.

The receiver performs the same calculation. If the calculated checksum matches the transmitted checksum, the data is considered valid.

## Advantages

- Simple implementation
- Fast execution
- Low memory usage

## Limitations

- Less reliable than CRC
- Cannot detect all transmission errors
- Limited burst error detection

## Common Applications

- IPv4
- TCP
- UDP
