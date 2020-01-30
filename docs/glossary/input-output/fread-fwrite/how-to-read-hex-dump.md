If you use a hex viewer and hover over the following,
you'll see that the values correspond with what we
wrote in `fread-fwrite-program`.

**Note**:
Because I'm on a mac, that output is in little endian format.
So we we read DC 07, we read actually have to read it from right to left.
`07 DC` === 2012
`DC 07` === 56327... which is not correct!

`08` is just 8.
`1A` is 26......A is in the one's place which is equal to 10. then `1` is in the twos place, which represents 16. We have one 16. 10+16 = 26.

Then as we continue reading down, we find 2, 4, 6, 8 10 easily because
in hex they are all are the same as in base 10, except10, which is `0A`.

```c
Offset: 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 	

Each digit is 4 bits, so 2 digits together make a byte. ON the first row, we have 16 pairs / 16 bytes
          |           
00000000: DC 07 00 00 08 00 00 00 1A 00 00 00 02 00 00 00    \...............
00000010: 04 00 00 00 06 00 00 00 08 00 00 00 0A 00 00 00    ................
```


