/*
 * FUN_1002c1a5 at 1002c1a5
 * undefined __fastcall FUN_1002c1a5(int param_1)
 * Address ranges: 1002c1a5-1002c1cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c1a5(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x2978) == 0) || (*(int *)(param_1 + 0x2a40) != 0)) {
    uVar1 = 0xff0000;
  }
  *(uint *)(param_1 + 0x2bec) = *(ushort *)(param_1 + 0x2bec) | uVar1;
  return;
}

