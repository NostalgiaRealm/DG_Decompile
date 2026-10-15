/*
 * FUN_1001fe94 at 1001fe94
 * undefined __fastcall FUN_1001fe94(int param_1)
 * Address ranges: 1001fe94-1001feba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001fe94(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x29f4) == 0) || (*(int *)(param_1 + 0x2ae0) != 0)) {
    uVar1 = 0xff0000;
  }
  *(uint *)(param_1 + 0x2c8c) = *(ushort *)(param_1 + 0x2c8c) | uVar1;
  return;
}

