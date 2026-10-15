/*
 * FUN_1003f95d at 1003f95d
 * undefined __fastcall FUN_1003f95d(undefined4 * param_1)
 * Address ranges: 1003f95d-1003f9d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f95d(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_8;
  
  uVar1 = 0;
  local_8 = param_1;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      iVar2 = 0;
      goto LAB_1003f97f;
    }
    do {
      iVar2 = uVar1 * 0x40 + param_1[1];
LAB_1003f97f:
      if (*(undefined4 **)(iVar2 + 0x10) != (undefined4 *)0x0) {
        local_8 = *(undefined4 **)(iVar2 + 0x10);
        FUN_1009c58b((void *)param_1[4],(int *)&local_8);
        (**(code **)(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  thunk_FUN_100ad48c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10007c30(param_1);
  return;
}

