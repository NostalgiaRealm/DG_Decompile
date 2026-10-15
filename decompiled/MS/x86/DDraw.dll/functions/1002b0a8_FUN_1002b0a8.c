/*
 * FUN_1002b0a8 at 1002b0a8
 * undefined4 __fastcall FUN_1002b0a8(int param_1)
 * Address ranges: 1002b0a8-1002b0c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002b0a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760250;
  if (((*(byte *)(param_1 + 0x1b8) & 0x80) != 0) &&
     (uVar1 = 0x80004001, *(char *)(param_1 + 8) != '\0')) {
    uVar1 = 0x887601c2;
  }
  return uVar1;
}

