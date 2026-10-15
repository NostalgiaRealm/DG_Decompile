/*
 * FUN_10014ea7 at 10014ea7
 * int __fastcall FUN_10014ea7(uint param_1, int param_2, uint param_3, int param_4, uint param_5)
 * Address ranges: 10014ea7-10014f0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10014ea7(uint param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((int)param_3 <= param_2) {
    if (param_5 < 0x11) {
      do {
        bVar1 = FUN_10014e56(param_3,param_1 & 3);
        if (bVar1) {
          uVar2 = FUN_10014e13(param_3,param_4);
          iVar3 = iVar3 + (uint)(byte)(&DAT_1005354c)[param_5] * (uVar2 >> 0x10) * (uVar2 & 0xffff);
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 <= param_2);
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

