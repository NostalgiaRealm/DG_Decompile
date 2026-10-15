/*
 * FUN_10063cac at 10063cac
 * int __fastcall FUN_10063cac(int param_1)
 * Address ranges: 10063cac-10063cde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10063cac(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa8) + 0x1cef4);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(uint *)(&DAT_100b04f0 + iVar2 * 4) < uVar1) {
    if (uVar1 == 0x10) {
      iVar2 = 0x17;
    }
    else {
      if (uVar1 == 0x18) {
        return 0x18;
      }
      if (uVar1 == 0x20) {
        return 0x1b;
      }
    }
  }
  return iVar2;
}

