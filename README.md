# Bit-string-recording
    
   You have to reorder a given bit string as specified. The only operation allowed is swapping adjacent
bit pairs. Please write a program that calculates the minimum number of swaps required.
    The initial bit string is simply represented by a sequence of bits, while the target is specified by a
run-length code. The run-length code of a bit string is a sequence of the lengths of maximal consecutive
sequences of zeros or ones in the bit string. For example, the run-length code of “011100” is “1 3 2”.
Note that there are two different bit strings with the same run-length code, one starting with zero and
the other starting with one. The target is either of these two.
    In Sample Input 1, bit string “100101” should be reordered so that its run-length code is “1 3 2”,
which means either “100011” or “011100”. At least four swaps are required to obtain “011100”. On the
other hand, only one swap is required to make “100011”. Thus, in this example, 1 is the answer.
