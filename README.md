# COMP 4901O: Ret2dl_resolve

Reference from 0CTF 2018 babystack

## No RELRO
```
gcc -m32 -fno-pie -no-pie -fno-stack-protector -z norelro dl_resolve.c -o no_relro
```

## Partial RELRO

```
gcc -m32 -fno-pie -no-pie -fno-stack-protector dl_resolve.c -o partial_relro
```