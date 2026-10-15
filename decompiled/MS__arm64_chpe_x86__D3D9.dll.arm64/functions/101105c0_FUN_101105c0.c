/*
 * FUN_101105c0 at 101105c0
 * undefined FUN_101105c0(void)
 * Address ranges: 101105c0-10110657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_101105c0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  (*(code *)PTR_FUN_1016c074)(param_1 + 0x4a0);
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
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x4a0);
  return iVar3;
}

