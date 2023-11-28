def main():
    cyfer = input().upper()
    key = input().upper()
    cyfer_len = len(cyfer)
    key = key*(cyfer_len//len(key)) + key[:(cyfer_len%len(key))]
    return key
print(main())