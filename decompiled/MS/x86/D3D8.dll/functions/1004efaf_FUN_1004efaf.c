/*
 * FUN_1004efaf at 1004efaf
 * uint __stdcall FUN_1004efaf(byte param_1)
 * Address ranges: 1004efaf-1004efd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004efaf(byte param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 4;
  do {
    uVar1 = uVar1 & 0xff | 1 << (param_1 & 3);
    param_1 = param_1 >> 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

