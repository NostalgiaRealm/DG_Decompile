/*
 * FUN_10014e13 at 10014e13
 * uint __fastcall FUN_10014e13(int param_1, int param_2)
 * Address ranges: 10014e13-10014e45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10014e13(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(&DAT_10053590 + param_1 * 4);
  uVar3 = uVar1 >> ((&DAT_10053588)[param_2] & 0x1f);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (((param_2 == 4) || (param_2 == 5)) || (uVar2 = uVar1, param_2 == 6)) {
    uVar2 = uVar3;
    uVar3 = uVar1;
  }
  return uVar2 << 0x10 | uVar3;
}

