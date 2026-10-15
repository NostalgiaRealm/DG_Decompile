/*
 * FUN_1006f7d0 at 1006f7d0
 * undefined FUN_1006f7d0(void)
 * Address ranges: 1006f7d0-1006f867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006f7d0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x4a0);
  iVar3 = 0;
  if (*(uint *)(param_1 + 0x4bc) != 0) {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x4b8) + uVar2 * 4);
      if (*piVar1 == param_2) {
        iVar3 = piVar1[0x358];
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x4bc));
  }
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x4a0);
  return iVar3;
}

