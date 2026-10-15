/*
 * FUN_1001dffd at 1001dffd
 * undefined __fastcall FUN_1001dffd(int param_1)
 * Address ranges: 1001dffd-1001e13c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001dffd(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_10 [3];
  
  if (*(char *)(param_1 + 0x3014) != '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3018) + 0x3688) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(param_1 + 0x302c),0,4,0,local_10);
    if (-1 < iVar2) {
      FUN_10055d40(local_10[0],(undefined4 *)(param_1 + 0x14),0x1000);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3018) + 0x3688) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x302c),0);
      *(undefined1 *)(param_1 + 0x3014) = 0;
    }
  }
  if (*(char *)(param_1 + 0x3015) != '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3018) + 0x3688) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(param_1 + 0x3024),0,4,0,local_10);
    if (-1 < iVar2) {
      FUN_10055d40(local_10[0],(undefined4 *)(param_1 + 0x1014),0x1000);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3018) + 0x3688) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x3024),0);
      *(undefined1 *)(param_1 + 0x3015) = 0;
    }
  }
  if (*(char *)(param_1 + 0x3016) != '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3018) + 0x3688) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(param_1 + 0x3028),0,4,0,local_10);
    if (-1 < iVar2) {
      FUN_10055d40(local_10[0],(undefined4 *)(param_1 + 0x2014),0x1000);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3018) + 0x3688) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x3028),0);
      *(undefined1 *)(param_1 + 0x3016) = 0;
    }
  }
  return;
}

