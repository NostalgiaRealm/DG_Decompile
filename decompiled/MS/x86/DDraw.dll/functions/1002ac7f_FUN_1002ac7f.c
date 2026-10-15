/*
 * FUN_1002ac7f at 1002ac7f
 * undefined4 __fastcall FUN_1002ac7f(int param_1)
 * Address ranges: 1002ac7f-1002aca0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002ac7f(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760250;
  if (((*(byte *)(param_1 + 0x1b8) & 0x80) != 0) &&
     (uVar1 = 0x80004001, *(char *)(param_1 + 8) != '\0')) {
    uVar1 = 0x887601c2;
  }
  return uVar1;
}

