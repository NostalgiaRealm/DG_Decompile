/*
 * FUN_1004c3e1 at 1004c3e1
 * undefined __fastcall FUN_1004c3e1(undefined4 * param_1)
 * Address ranges: 1004c3e1-1004c458
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c3e1(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_8;
  
  uVar1 = 0;
  local_8 = param_1;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      iVar2 = 0;
      goto LAB_1004c403;
    }
    do {
      iVar2 = uVar1 * 0x40 + param_1[1];
LAB_1004c403:
      if (*(undefined4 **)(iVar2 + 0x10) != (undefined4 *)0x0) {
        local_8 = *(undefined4 **)(iVar2 + 0x10);
        FUN_100beb63((void *)param_1[4],(int *)&local_8);
        (**(code **)(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[2]);
  }
  thunk_FUN_100cfd6c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10008783(param_1);
  return;
}

