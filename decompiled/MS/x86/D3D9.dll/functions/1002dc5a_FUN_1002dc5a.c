/*
 * FUN_1002dc5a at 1002dc5a
 * int __fastcall FUN_1002dc5a(undefined4 * param_1)
 * Address ranges: 1002dc5a-1002dd2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1002dc5a(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[0x2f] + -1;
  param_1[0x2f] = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
    if (param_1[0x16] != 0) {
      do {
        (**(code **)(**(int **)(param_1[0x15] + uVar3 * 4) + 0x10))();
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[0x16]);
    }
    thunk_FUN_100cfd6c((LPVOID)param_1[0x15]);
    piVar1 = param_1 + 0x2d;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (((uint)param_1[0xd] >> 3 & 1) == 0) {
      FUN_1002cece(param_1,*piVar1,param_1[4] * 0x40 + 0xfffU & 0xfffff000);
    }
    FUN_1002d71a((int)(param_1 + 0x13));
    if (((param_1[0x1b] == 0) && (param_1[0x1c] == 0)) && ((int *)param_1[0x14] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[0x14] + 0x10))();
    }
    if ((*piVar1 != -1) && (*piVar1 != 0)) {
      CloseHandle((HANDLE)*piVar1);
    }
    *piVar1 = -1;
    *param_1 = &PTR_D3DPERF_GetStatus_100d5224;
    thunk_FUN_100cfd6c((LPVOID)param_1[0x15]);
    FUN_100cfd6c(param_1);
  }
  return iVar2;
}

