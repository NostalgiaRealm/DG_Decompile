/*
 * FUN_10028224 at 10028224
 * undefined __fastcall FUN_10028224(undefined4 * param_1)
 * Address ranges: 10028224-10028241
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10028224(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[9];
  *param_1 = &PTR_FUN_10053d7c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_10053d78;
  return;
}

