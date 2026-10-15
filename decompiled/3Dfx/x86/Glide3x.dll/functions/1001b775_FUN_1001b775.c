/*
 * FUN_1001b775 at 1001b775
 * undefined __fastcall FUN_1001b775(undefined4 * param_1)
 * Address ranges: 1001b775-1001b792
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001b775(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[9];
  *param_1 = &PTR_FUN_10055e90;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_10055e8c;
  return;
}

