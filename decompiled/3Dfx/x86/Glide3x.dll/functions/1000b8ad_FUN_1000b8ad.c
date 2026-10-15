/*
 * FUN_1000b8ad at 1000b8ad
 * undefined __fastcall FUN_1000b8ad(int param_1)
 * Address ranges: 1000b8ad-1000b916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b8ad(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10 [3];
  
  if (*(char *)(param_1 + 0x32d0) != '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 0x3308) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(param_1 + 0x330c),0,4,0,local_10);
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)(param_1 + 0x2c70);
      for (iVar2 = 0x198; iVar2 != 0; iVar2 = iVar2 + -1) {
        *local_10[0] = *puVar3;
        puVar3 = puVar3 + 1;
        local_10[0] = local_10[0] + 1;
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x3308) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x330c),0);
      *(undefined1 *)(param_1 + 0x32d0) = 0;
    }
  }
  return;
}

