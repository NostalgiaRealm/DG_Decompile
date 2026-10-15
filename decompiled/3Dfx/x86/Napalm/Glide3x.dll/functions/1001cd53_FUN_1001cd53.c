/*
 * FUN_1001cd53 at 1001cd53
 * undefined __fastcall FUN_1001cd53(int param_1)
 * Address ranges: 1001cd53-1001cd7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001cd53(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1002ea60(*(int *)(param_1 + 0xa8) + 0x11c0);
  if ((char)uVar1 == '\0') {
    FUN_1002ea00(*(int *)(param_1 + 0xa8) + 0x11c0);
    return;
  }
  return;
}

