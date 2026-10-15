/*
 * FUN_1007c0fc at 1007c0fc
 * undefined __fastcall FUN_1007c0fc(undefined4 * param_1)
 * Address ranges: 1007c0fc-1007c182
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007c0fc(undefined4 *param_1)

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
      goto LAB_1007c136;
    }
    do {
      iVar4 = (uVar3 << 4 | 8) + param_1[1];
LAB_1007c136:
      local_8 = *(int *)(iVar4 + 4);
      FUN_100beb63((void *)(iVar1 * 0x16c0 + iVar2 + 0x1d00),&local_8);
      (**(code **)(**(int **)(iVar4 + 4) + 8))(*(int **)(iVar4 + 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[2]);
  }
  thunk_FUN_100cfd6c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

