/*
 * FUN_100252c0 at 100252c0
 * int __fastcall FUN_100252c0(int param_1)
 * Address ranges: 100252c0-10025315
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100252c0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_1006c23c != 0) {
    do {
      iVar2 = (**(code **)(**(int **)(DAT_1006c24c + uVar3 * 4) + 0x24))();
      if ((param_1 == iVar2) &&
         (iVar2 = *(int *)(DAT_1006c24c + uVar3 * 4), uVar1 = *(uint *)(iVar2 + 0x104),
         (uVar1 >> 4 & 1) != 0 || (uVar1 & 1) != 0)) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_1006c23c);
  }
  return 0;
}

