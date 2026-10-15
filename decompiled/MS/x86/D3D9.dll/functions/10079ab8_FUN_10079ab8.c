/*
 * FUN_10079ab8 at 10079ab8
 * int __fastcall FUN_10079ab8(int param_1)
 * Address ranges: 10079ab8-10079aea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10079ab8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa8) + 0x1cef4);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(uint *)(&DAT_100d2658 + iVar2 * 4) < uVar1) {
    if (uVar1 == 0x10) {
      iVar2 = 0x22;
    }
    else {
      if (uVar1 == 0x18) {
        return 0x23;
      }
      if (uVar1 == 0x20) {
        return 0x26;
      }
    }
  }
  return iVar2;
}

