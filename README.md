# AI8051U Dhrystone

This repository contains Dhrystone benchmark project files for STC AI8051U MCU.

The benchmark result is output through `UART 1(P1.6 as RX, P1.7 as TX)` with serial settings `115200 8 N 1`. The MCU should run at 40MHz to match the clock settings of this project. You may use `AI8051U-34K64.cfg` for AI-ISP(formerly STC-ISP) MCU programming software config.

I'm using Dhrystone v2.1 from https://github.com/Keith-S-Thompson/dhrystone for this project. After modifying part of Dhrystone for this cursed platform, it seems to work fine now. An example result is shown below. The development environment of this project is Keil C251. For development environment setup, refer to STC datasheet/user manual for detailed instructions.

```log
AI8051U Dhrystone Benchmark
===Begin Benchmark===

Dhrystone Benchmark, Version 2.1 (Language: C)

Program compiled without 'register' attribute

Execution starts, 114514 runs through Dhrystone
Execution ends

Final values of the variables used in the benchmark:

Int_Glob:            5
        should be:   5
Bool_Glob:           1
        should be:   1
Ch_1_Glob:           A
        should be:   A
Ch_2_Glob:           B
        should be:   B
Arr_1_Glob[8]:       4127
        should be:   7
Arr_2_Glob[8][7]:    10
        should be:   Number_Of_Runs + 10
Ptr_Glob->
  Ptr_Comp:          10246
        should be:   (implementation-dependent)
  Discr:             0
        should be:   0
  Enum_Comp:         2
        should be:   2
  Int_Comp:          17
        should be:   17
  Str_Comp:          DHRYSTONE PROGRAM, SOME STRING
        should be:   DHRYSTONE PROGRAM, SOME STRING
Next_Ptr_Glob->
  Ptr_Comp:          10246
        should be:   (implementation-dependent), same as above
  Discr:             0
        should be:   0
  Enum_Comp:         1
        should be:   1
  Int_Comp:          18
        should be:   18
  Str_Comp:          DHRYSTONE PROGRAM, SOME STRING
        should be:   DHRYSTONE PROGRAM, SOME STRING
Int_1_Loc:           5
        should be:   5
Int_2_Loc:           13
        should be:   13
Int_3_Loc:           7
        should be:   7
Enum_Loc:            1
        should be:   1
Str_1_Loc:           DHRYSTONE PROGRAM, 1'ST STRING
        should be:   DHRYSTONE PROGRAM, 1'ST STRING
Str_2_Loc:           DHRYSTONE PROGRAM, 2'ND STRING
        should be:   DHRYSTONE PROGRAM, 2'ND STRING

Microseconds for one run through Dhrystone:   43.6
Dhrystones per Second:                      22912.0
VAX MIPS rating:                              13.0

===End of Benchmark===
```
