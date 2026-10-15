/*
 * FUN_10027e9a at 10027e9a
 * undefined __fastcall FUN_10027e9a(undefined4 * param_1)
 * Address ranges: 10027e9a-10027eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027e9a(undefined4 *param_1)

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

