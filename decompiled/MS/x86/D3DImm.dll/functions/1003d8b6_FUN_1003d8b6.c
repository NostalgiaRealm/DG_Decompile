/*
 * FUN_1003d8b6 at 1003d8b6
 * undefined __fastcall FUN_1003d8b6(undefined4 * param_1)
 * Address ranges: 1003d8b6-1003d903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003d8b6(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x2a0];
  *param_1 = &PTR_FUN_1005f480;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_10008257(param_1 + 0x5f2);
  FUN_10008257(param_1 + 0x5ee);
  FUN_10045e14(param_1 + 0x54e);
  thunk_FUN_1005c76c((LPVOID)param_1[0x549]);
  FUN_10005d60(param_1);
  return;
}

