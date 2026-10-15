/*
 * FUN_10027659 at 10027659
 * undefined __fastcall FUN_10027659(int param_1)
 * Address ranges: 10027659-10027684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027659(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10036a70(*(int *)(param_1 + 0xa8) + 0x11c0);
  if ((char)uVar1 == '\0') {
    FUN_10036a10(*(int *)(param_1 + 0xa8) + 0x11c0);
    return;
  }
  return;
}

