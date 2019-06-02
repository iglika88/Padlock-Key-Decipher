# Padlock-Key-Decipher
The padlock is opened as a cipher is decoded into a password of 4 unique symbols.

The cipher text consist of multiple repetitions of scrambled numbers and letters. 

For example: 
ahdscajsasjfdksdjfjkadjkfdjdfjdffddjddjdjdjdjdjfjjjfjjfj12493932199391919199493943919191

Decryption

In order to decrypt the cipher text you need to find the 4 characters that have the highest number of occurrences in the cipher text and
sort them based on the number of times that they are present in the cipher text. The resulting string is the key to the padlock. In case of multiple characters having the same number of occurrences, the order of the litters in the cipher text should be kept in the deciphered message.

Example

The password stored in the cipher text:
ahdscajsasjfdksdjfjkadjkfdjdfjdffddjddjdjdjdjdjfjjjfjjfj12493932199391919199493943919191
is
jd9f
The password stored in the cipher text:
dddbbbcccfffaaa
is
dbcf

