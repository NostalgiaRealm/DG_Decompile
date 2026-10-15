/*
 * FUN_1001cad0 at 1001cad0
 * undefined4 * __fastcall FUN_1001cad0(undefined4 * param_1)
 * Address ranges: 1001cad0-1001cba5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1001cad0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_1005fe94;
  if (param_1[4] != 0) {
    iVar2 = param_1[6] * 0x20;
    iVar3 = param_1[3] + iVar2;
    piVar1 = *(int **)(iVar3 + 0x14);
    if (piVar1 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar1 + 0x20))(piVar1);
      uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
      if ((uVar4 <= *(uint *)(iVar3 + 0x1c)) &&
         ((uVar4 < *(uint *)(iVar3 + 0x1c) || ((uint)uVar5 < *(uint *)(iVar3 + 0x18))))) {
        iVar3 = param_1[3];
        piVar1 = *(int **)(iVar2 + 0x14 + iVar3);
        (**(code **)(*piVar1 + 0x24))
                  (piVar1,*(undefined4 *)(iVar2 + 0x18 + iVar3),
                   *(undefined4 *)(iVar2 + 0x1c + iVar3),param_1[0xb]);
        WaitForSingleObject((HANDLE)param_1[0xb],0xffffffff);
      }
    }
    uVar4 = 0;
    if (param_1[4] != 0) {
      do {
        piVar1 = *(int **)(param_1[3] + 0xc + uVar4 * 0x20);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[4]);
    }
    thunk_FUN_1005c76c((LPVOID)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    CloseHandle((HANDLE)param_1[0xb]);
    param_1[0xb] = 0;
  }
  thunk_FUN_1005c76c((LPVOID)param_1[3]);
  FUN_1005c76c(param_1);
  return param_1;
}

