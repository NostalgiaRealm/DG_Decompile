/*
 * FUN_100a6895 at 100a6895
 * int * __stdcall FUN_100a6895(int * param_1, uint param_2)
 * Address ranges: 100a6895-100a68ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100a6895(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if ((param_2 & 0x1f) != 0) {
    iVar1 = -1 << (sbyte)(param_2 & 0x1f);
  }
  *param_1 = iVar1;
  param_1[2] = param_2 + 0x1f >> 3 & 0x1ffffffc;
  uVar3 = param_2 + 0x1f >> 5;
  uVar2 = uVar3 & 0x1f;
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = -1 << (sbyte)uVar2;
  }
  param_1[1] = iVar1;
  param_1[3] = uVar3 + 0x1f >> 3 & 0x1ffffffc;
  return param_1;
}

