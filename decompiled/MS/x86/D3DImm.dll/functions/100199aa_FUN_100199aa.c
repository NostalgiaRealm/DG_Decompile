/*
 * FUN_100199aa at 100199aa
 * undefined __fastcall FUN_100199aa(undefined4 * param_1)
 * Address ranges: 100199aa-100199f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100199aa(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      iVar2 = 0;
      goto LAB_100199c8;
    }
    do {
      iVar2 = uVar3 * 0x18 + param_1[1];
LAB_100199c8:
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[2]);
  }
  thunk_FUN_1005c76c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10008257(param_1);
  return;
}

