/*
 * FUN_1002c723 at 1002c723
 * uint __fastcall FUN_1002c723(int param_1)
 * Address ranges: 1002c723-1002c760
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002c723(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x19c);
  if ((((uVar1 & 1) == 0) &&
      ((*(int *)(param_1 + 0x108) == 0 ||
       ((*(uint *)(*(int *)(param_1 + 0x108) + 0x10) & 0x400) == 0)))) &&
     ((uVar1 = uVar1 >> 2, (uVar1 & 1) == 0 ||
      ((uVar1 = *(uint *)(param_1 + 0x1a0), uVar1 == 0x32545844 || (uVar1 == 0x34545844)))))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

