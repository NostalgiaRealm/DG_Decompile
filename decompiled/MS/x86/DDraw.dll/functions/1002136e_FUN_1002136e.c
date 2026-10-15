/*
 * FUN_1002136e at 1002136e
 * uint __stdcall FUN_1002136e(uint param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1002136e-100213de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002136e(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_1001fb19(param_2,param_4,param_1);
  uVar3 = 0;
  iVar2 = param_3 * 0x2c;
  if (param_3 != 0) {
    uVar3 = (uVar1 >> ((&DAT_10069412)[iVar2] + 0x18 & 0x1f)) << ((&DAT_10069413)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_1006940c)[iVar2] + 0x18 & 0x1f)) << ((&DAT_1006940d)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_1006940e)[iVar2] + 0x10 & 0x1f)) << ((&DAT_1006940f)[iVar2] & 0x1f) |
            (uVar1 >> ((&DAT_10069410)[iVar2] + 8 & 0x1f)) << ((&DAT_10069411)[iVar2] & 0x1f);
  }
  return uVar3;
}

