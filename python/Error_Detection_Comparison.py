methods={
    "Parity":{
        "Reliability":3,
        "Cost":1
    },
    "Checksum":{
        "Reliability":6,
        "Cost":3
    },
    "CRC":{
        "Reliability":10,
        "Cost":5
    }
}

for method,values in methods.items():
    print(method)
    print(values)
