/*
 * FUN_1006f182 at 1006f182
 * int __fastcall FUN_1006f182(int param_1)
 * Address ranges: 1006f182-1006f1b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1006f182(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe0) + 0x1cef4);
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

