/*
 * FUN_1800aeb1c at 1800aeb1c
 * int __fastcall FUN_1800aeb1c(longlong param_1, uint param_2, int * param_3)
 * Address ranges: 1800aeb1c-1800aeb70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800aeb1c(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((param_3 != (int *)0x0) && (*param_3 == 0xc)) {
    uVar3 = 0;
    do {
      if (param_3[1] == (&DAT_180100c60)[uVar3]) {
        if (1 < (uint)param_3[2]) {
          return 0;
        }
        iVar1 = FUN_18000419c(param_1 + -0xa0,param_2,param_3[1]);
        return iVar1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < 0x43);
  }
  return 0;
}

