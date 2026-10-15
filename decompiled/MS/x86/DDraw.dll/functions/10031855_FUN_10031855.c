/*
 * FUN_10031855 at 10031855
 * undefined4 __fastcall FUN_10031855(int * param_1, int * param_2)
 * Address ranges: 10031855-10031886
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10031855(int *param_1,int *param_2)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = in_EAX & 0xffffff00;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x6c)) {
    piVar2 = FUN_10060d45(param_2,0,0x7c);
    uVar1 = CONCAT31((int3)((uint)piVar2 >> 8),1);
    piVar2 = param_2;
    for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *param_1;
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 1;
    }
    *param_2 = 0x7c;
  }
  return uVar1;
}

