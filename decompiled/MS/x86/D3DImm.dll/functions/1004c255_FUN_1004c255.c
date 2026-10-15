/*
 * FUN_1004c255 at 1004c255
 * undefined4 __fastcall FUN_1004c255(int param_1)
 * Address ranges: 1004c255-1004c26e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004c255(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760005;
  if (*(char *)(param_1 + 0xd1) == '\0') {
    *(undefined1 *)(param_1 + 0xd1) = 1;
    uVar1 = 0;
  }
  return uVar1;
}

