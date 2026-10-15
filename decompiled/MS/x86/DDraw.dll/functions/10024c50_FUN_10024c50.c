/*
 * FUN_10024c50 at 10024c50
 * uint __fastcall FUN_10024c50(int param_1)
 * Address ranges: 10024c50-10024c75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10024c50(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x104) >> 4;
  if (((uVar1 & 1) == 0) &&
     (uVar1 = *(int *)(param_1 + 0x11c) * 0x228, (&DAT_1006c49c)[uVar1] != '\0')) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

