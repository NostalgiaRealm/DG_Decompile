/*
 * FUN_10005b1b at 10005b1b
 * undefined4 __stdcall FUN_10005b1b(int param_1)
 * Address ranges: 10005b1b-10005b4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10005b1b(int param_1)

{
  uint3 uVar2;
  int iVar1;
  
  uVar2 = (uint3)((uint)param_1 >> 8);
  if ((((param_1 == 2) || (param_1 == 3)) || ((0xf < param_1 && (param_1 < 0x18)))) ||
     ((0xff < param_1 && (param_1 < 0x200)))) {
    iVar1 = CONCAT31(uVar2,1);
  }
  else {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

