/*
 * FUN_100188cc at 100188cc
 * int __fastcall FUN_100188cc(int param_1)
 * Address ranges: 100188cc-100188fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100188cc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe0) + 0xcef4);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(uint *)(&DAT_10062820 + iVar2 * 4) < uVar1) {
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

