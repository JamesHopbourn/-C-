#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 10; i++)
    printf("%d ", i);
  printf("\n");

  for (int j = 0; j < 10; ++j)
    printf("%d ", j);
  printf("\n");
  return 0;
}

/*
i++.s
100003f30: push   rbp
100003f31: mov    rbp,rsp
100003f34: sub    rsp,0x20
100003f38: mov    DWORD PTR [rbp-0x4],0x0
100003f3f: mov    DWORD PTR [rbp-0x8],edi
100003f42: mov    QWORD PTR [rbp-0x10],rsi
100003f46: mov    DWORD PTR [rbp-0x14],0x0
100003f4d: cmp    DWORD PTR [rbp-0x14],0xa
100003f51: jge    100003f76 <_main+0x46>
100003f57: mov    esi,DWORD PTR [rbp-0x14]
100003f5a: lea    rdi,[rip+0x51]        # 100003fb2 <_main+0x82>
100003f61: mov    al,0x0
100003f63: call   100003f92 <_main+0x62>
100003f68: mov    eax,DWORD PTR [rbp-0x14]
100003f6b: add    eax,0x1
100003f6e: mov    DWORD PTR [rbp-0x14],eax
100003f71: jmp    100003f4d <_main+0x1d>
100003f76: lea    rdi,[rip+0x39]        # 100003fb6 <_main+0x86>
100003f7d: mov    al,0x0
100003f7f: call   100003f92 <_main+0x62>
100003f84: mov    ecx,DWORD PTR [rbp-0x4]
100003f87: mov    DWORD PTR [rbp-0x18],eax
100003f8a: mov    eax,ecx
100003f8c: add    rsp,0x20
100003f90: pop    rbp
100003f91: ret


++i.s
100003f30: push   rbp
100003f31: mov    rbp,rsp
100003f34: sub    rsp,0x20
100003f38: mov    DWORD PTR [rbp-0x4],0x0
100003f3f: mov    DWORD PTR [rbp-0x8],edi
100003f42: mov    QWORD PTR [rbp-0x10],rsi
100003f46: mov    DWORD PTR [rbp-0x14],0x0
100003f4d: cmp    DWORD PTR [rbp-0x14],0xa
100003f51: jge    100003f76 <_main+0x46>
100003f57: mov    esi,DWORD PTR [rbp-0x14]
100003f5a: lea    rdi,[rip+0x51]        # 100003fb2 <_main+0x82>
100003f61: mov    al,0x0
100003f63: call   100003f92 <_main+0x62>
100003f68: mov    eax,DWORD PTR [rbp-0x14]
100003f6b: add    eax,0x1
100003f6e: mov    DWORD PTR [rbp-0x14],eax
100003f71: jmp    100003f4d <_main+0x1d>
100003f76: lea    rdi,[rip+0x39]        # 100003fb6 <_main+0x86>
100003f7d: mov    al,0x0
100003f7f: call   100003f92 <_main+0x62>
100003f84: mov    ecx,DWORD PTR [rbp-0x4]
100003f87: mov    DWORD PTR [rbp-0x18],eax
100003f8a: mov    eax,ecx
100003f8c: add    rsp,0x20
100003f90: pop    rbp
100003f91: ret
*/