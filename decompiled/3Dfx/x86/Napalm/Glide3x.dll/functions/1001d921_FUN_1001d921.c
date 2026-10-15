/*
 * FUN_1001d921 at 1001d921
 * undefined __fastcall FUN_1001d921(undefined4 * param_1)
 * Address ranges: 1001d921-1001d93e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001d921(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x16];
  *param_1 = &PTR_FUN_10059240;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_1005923c;
  return;
}

