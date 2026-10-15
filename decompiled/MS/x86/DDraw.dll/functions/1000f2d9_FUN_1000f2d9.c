/*
 * FUN_1000f2d9 at 1000f2d9
 * undefined __fastcall FUN_1000f2d9(undefined4 * param_1)
 * Address ranges: 1000f2d9-1000f35f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f2d9(undefined4 *param_1)

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
      goto LAB_1000f313;
    }
    do {
      iVar4 = (uVar3 << 4 | 8) + param_1[1];
LAB_1000f313:
      local_8 = *(int *)(iVar4 + 4);
      FUN_1004eb05((void *)(iVar1 * 0x16c0 + iVar2 + 0x1d00),&local_8);
      (**(code **)(**(int **)(iVar4 + 4) + 8))(*(int **)(iVar4 + 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[2]);
  }
  thunk_FUN_10060be1((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

