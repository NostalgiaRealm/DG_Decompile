/*
 * FUN_100661e4 at 100661e4
 * undefined __fastcall FUN_100661e4(undefined4 * param_1)
 * Address ranges: 100661e4-1006626a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100661e4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  uVar3 = 0;
  iVar1 = param_1[5];
  iVar2 = param_1[4];
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      iVar4 = 0;
      goto LAB_1006621e;
    }
    do {
      iVar4 = (uVar3 << 4 | 8) + param_1[1];
LAB_1006621e:
      local_8 = *(int *)(iVar4 + 4);
      FUN_1009c58b((void *)(iVar1 * 0x16c0 + iVar2 + 0x1d00),&local_8);
      (**(code **)(**(int **)(iVar4 + 4) + 8))(*(int **)(iVar4 + 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[2]);
  }
  thunk_FUN_100ad48c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

