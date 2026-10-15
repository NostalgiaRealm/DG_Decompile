/*
 * FUN_10059900 at 10059900
 * undefined FUN_10059900(void)
 * Address ranges: 10059900-1005998f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10059900(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  if (*(ushort *)(param_1 + 4) != 0) {
    do {
      uVar2 = 0;
      if (uVar3 != 0) {
        do {
          if (*(int *)(param_1 + 0x18 + uVar3 * 0x1c) == *(int *)(param_1 + 0x18 + uVar2 * 0x1c))
          goto LAB_1005997c;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      if (uVar2 == uVar3) {
        iVar1 = **(int **)(param_1 + uVar3 * 0x1c + 0x18) + iVar1;
      }
LAB_1005997c:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 4));
  }
  return iVar1;
}

