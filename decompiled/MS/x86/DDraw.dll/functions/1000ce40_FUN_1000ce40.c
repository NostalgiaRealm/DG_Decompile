/*
 * FUN_1000ce40 at 1000ce40
 * int __fastcall FUN_1000ce40(int param_1)
 * Address ranges: 1000ce40-1000ce72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000ce40(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa8) + 0xcef4);
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

