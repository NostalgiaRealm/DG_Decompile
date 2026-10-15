/*
 * FUN_1003bdec at 1003bdec
 * undefined __fastcall FUN_1003bdec(undefined4 * param_1)
 * Address ranges: 1003bdec-1003be5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003bdec(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_100543f0;
  FUN_1003c171(param_1);
  uVar3 = 0;
  piVar1 = param_1 + 0xd;
  if (param_1[0xe] != 0) {
    do {
      piVar2 = *(int **)(*piVar1 + uVar3 * 8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      FUN_1004f626(*(LPVOID *)(*piVar1 + 4 + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[0xe]);
  }
  thunk_FUN_1004f626((LPVOID)*piVar1);
  *piVar1 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_100386e2(param_1 + 0x10);
  thunk_FUN_1004f626((LPVOID)*piVar1);
  return;
}

