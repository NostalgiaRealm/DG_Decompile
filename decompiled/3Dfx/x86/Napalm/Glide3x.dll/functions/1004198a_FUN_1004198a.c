/*
 * FUN_1004198a at 1004198a
 * undefined __fastcall FUN_1004198a(undefined4 * param_1)
 * Address ranges: 1004198a-100419ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004198a(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_1005aaf0;
  if (param_1[4] != 0) {
    FUN_10041a9b(param_1,param_1[6]);
    uVar3 = 0;
    if (param_1[4] != 0) {
      do {
        piVar2 = *(int **)(*piVar1 + 0xc + uVar3 * 0x20);
        (**(code **)(*piVar2 + 8))(piVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[4]);
    }
    thunk_FUN_10055686((LPVOID)*piVar1);
    *piVar1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    CloseHandle((HANDLE)param_1[0xb]);
    param_1[0xb] = 0;
  }
  thunk_FUN_10055686((LPVOID)*piVar1);
  return;
}

