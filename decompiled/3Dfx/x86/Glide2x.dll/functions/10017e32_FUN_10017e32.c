/*
 * FUN_10017e32 at 10017e32
 * undefined __fastcall FUN_10017e32(int param_1)
 * Address ranges: 10017e32-10017e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10017e32(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10 [3];
  
  if (*(char *)(param_1 + 0x3150) != '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 0x3188) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(param_1 + 0x318c),0,4,0,local_10);
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)(param_1 + 0x2bd0);
      for (iVar2 = 0x160; iVar2 != 0; iVar2 = iVar2 + -1) {
        *local_10[0] = *puVar3;
        puVar3 = puVar3 + 1;
        local_10[0] = local_10[0] + 1;
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x3188) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x318c),0);
      *(undefined1 *)(param_1 + 0x3150) = 0;
    }
  }
  return;
}

