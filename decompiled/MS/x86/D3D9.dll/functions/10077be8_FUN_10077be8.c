/*
 * FUN_10077be8 at 10077be8
 * char __fastcall FUN_10077be8(int param_1)
 * Address ranges: 10077be8-10077c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_10077be8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((((((iVar1 != 0x17) && (iVar1 != 0x18)) && (iVar1 != 0x19)) &&
       ((iVar1 != 0x16 && (iVar1 != 0x1a)))) &&
      ((iVar1 != 0x1b && ((iVar1 != 0x1c && (iVar1 != 0x1d)))))) &&
     ((iVar1 != 0x1e && ((iVar1 != 0x1f && (iVar1 != 0x15)))))) {
    uVar2 = 5;
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar2 = 7;
    }
    return '\x01' - (uVar2 < *(uint *)(&DAT_100d2658 + iVar1 * 4));
  }
  return '\x01';
}

