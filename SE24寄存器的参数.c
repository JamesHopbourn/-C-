/* ====================================================
#   Copyright (C) 2020 All rights reserved.
#
#   Author        : James Hopbourn
#   Email         : JamesHopbourn@gmail.com
#   File Name     : 8p.c
#   Last Modified : 2020-10-14 23:28
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

int main() {
  int a = 1;
  printf("a=%d; b=%d; c=%d; d=%d; e=%d; f=%d; g=%d; h=%d", 1, 2, 3, 4, 5, 6, 7,
         8);
  return 0;
}

/*
lldb 8p
(lldb) target create "8p"
Current executable set to '/Users/james/Desktop/8p' (x86_64).
(lldb) b main
Breakpoint 1: where = 8p`main, address = 0x0000000100003f00
(lldb) r
Process 18224 launched: '/Users/james/Desktop/8p' (x86_64)
Process 18224 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
    frame #0: 0x0000000100003f00 8p`main
8p`main:
->  0x100003f00 <+0>: push   rbp
    0x100003f01 <+1>: mov    rbp, rsp
    0x100003f04 <+4>: sub    rsp, 0x20
    0x100003f08 <+8>: mov    dword ptr [rbp - 0x4], 0x0
Target 0: (8p) stopped.
(lldb) dis
8p`main:
->  0x100003f00 <+0>:  push   rbp
    0x100003f01 <+1>:  mov    rbp, rsp
    0x100003f04 <+4>:  sub    rsp, 0x20
    0x100003f08 <+8>:  mov    dword ptr [rbp - 0x4], 0x0
    0x100003f0f <+15>: lea    rdi, [rip + 0x6c]         ; "a=%d; b=%d; c=%d;
d=%d; e=%d; f=%d; g=%d; h=%d" 0x100003f16 <+22>: mov    esi, 0x1 0x100003f1b
<+27>: mov    edx, 0x2 0x100003f20 <+32>: mov    ecx, 0x3 0x100003f25 <+37>: mov
r8d, 0x4 0x100003f2b <+43>: mov    r9d, 0x5 0x100003f31 <+49>: mov    dword ptr
[rsp], 0x6 0x100003f38 <+56>: mov    dword ptr [rsp + 0x8], 0x7 0x100003f40
<+64>: mov    dword ptr [rsp + 0x10], 0x8 0x100003f48 <+72>: mov    al, 0x0
    0x100003f4a <+74>: call   0x100003f60               ; symbol stub for:
printf 0x100003f4f <+79>: mov    ecx, 0x9 0x100003f54 <+84>: mov    dword ptr
[rbp - 0x8], eax 0x100003f57 <+87>: mov    eax, ecx 0x100003f59 <+89>: add rsp,
0x20 0x100003f5d <+93>: pop    rbp 0x100003f5e <+94>: ret (lldb) br s -a
0x100003f48 Breakpoint 2: where = 8p`main + 72, address = 0x0000000100003f48
(lldb) br list
Current breakpoints:
1: name = 'main', locations = 1, resolved = 1, hit count = 1
  1.1: where = 8p`main, address = 0x0000000100003f00, resolved, hit count = 1

2: address = 8p[0x0000000100003f48], locations = 1, resolved = 1, hit count = 0
  2.1: where = 8p`main + 72, address = 0x0000000100003f48, resolved, hit count =
0

(lldb) br command add 2
Enter your debugger command(s).  Type 'DONE' to end.
> register read $esi $edx $ecx $r8d $r9d
> x/1w $rsp
> x/1w $rsp+0x8
> x/1w $rsp+0x10
(lldb) c
Process 18224 resuming
(lldb)  register read $esi $edx $ecx $r8d $r9d
     esi = 0x00000001
     edx = 0x00000002
     ecx = 0x00000003
     r8d = 0x00000004
     r9d = 0x00000005

(lldb)  x/1w $rsp
0x7ffeefbff1e0: 0x00000006

(lldb)  x/1w $rsp+0x8
0x7ffeefbff1e8: 0x00000007

(lldb)  x/1w $rsp+0x10
0x7ffeefbff1f0: 0x00000008

Process 18224 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 2.1
    frame #0: 0x0000000100003f48 8p`main + 72
8p`main:
->  0x100003f48 <+72>: mov    al, 0x0
    0x100003f4a <+74>: call   0x100003f60               ; symbol stub for:
printf 0x100003f4f <+79>: mov    ecx, 0x9 0x100003f54 <+84>: mov    dword ptr
[rbp - 0x8], eax Target 0: (8p) stopped. (lldb) br s -a 0x100003f54 Breakpoint
3: where = 8p`main + 84, address = 0x0000000100003f54 (lldb) register read $ecx
     ecx = 0x00000003
(lldb) c
Process 18224 resuming
Process 18224 stopped
* thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 3.1
    frame #0: 0x0000000100003f54 8p`main + 84
8p`main:
->  0x100003f54 <+84>: mov    dword ptr [rbp - 0x8], eax
    0x100003f57 <+87>: mov    eax, ecx
    0x100003f59 <+89>: add    rsp, 0x20
    0x100003f5d <+93>: pop    rbp
Target 0: (8p) stopped.
(lldb) register read $ecx
     ecx = 0x00000009
*/
