/*
 * FUN_1001fab7 at 1001fab7
 * undefined __fastcall FUN_1001fab7(int param_1)
 * Address ranges: 1001fab7-1001fadd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001fab7(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x2b30) == 0) || (*(int *)(param_1 + 0x2c20) != 0)) {
    uVar1 = 0xff0000;
  }
  *(uint *)(param_1 + 0x2ddc) = *(ushort *)(param_1 + 0x2ddc) | uVar1;
  return;
}

