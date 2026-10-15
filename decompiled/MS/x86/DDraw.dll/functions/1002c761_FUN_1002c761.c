/*
 * FUN_1002c761 at 1002c761
 * uint __fastcall FUN_1002c761(int param_1)
 * Address ranges: 1002c761-1002c787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002c761(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x19c) >> 2;
  if (((uVar1 & 1) != 0) &&
     ((uVar1 = *(uint *)(param_1 + 0x1a0), uVar1 == 0x32545844 || (uVar1 == 0x34545844)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

