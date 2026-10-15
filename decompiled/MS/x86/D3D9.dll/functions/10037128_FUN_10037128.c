/*
 * FUN_10037128 at 10037128
 * undefined __fastcall FUN_10037128(undefined4 * param_1)
 * Address ranges: 10037128-10037177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10037128(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      iVar2 = 0;
      goto LAB_10037146;
    }
    do {
      iVar2 = uVar3 * 0x18 + param_1[1];
LAB_10037146:
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[2]);
  }
  thunk_FUN_100cfd6c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10008783(param_1);
  return;
}

