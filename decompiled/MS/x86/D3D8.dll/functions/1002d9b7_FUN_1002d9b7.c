/*
 * FUN_1002d9b7 at 1002d9b7
 * undefined __fastcall FUN_1002d9b7(undefined4 * param_1)
 * Address ranges: 1002d9b7-1002da06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d9b7(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      iVar2 = 0;
      goto LAB_1002d9d5;
    }
    do {
      iVar2 = uVar3 * 0x18 + param_1[1];
LAB_1002d9d5:
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[2]);
  }
  thunk_FUN_100ad48c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10007c30(param_1);
  return;
}

