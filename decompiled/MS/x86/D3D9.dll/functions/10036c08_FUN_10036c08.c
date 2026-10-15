/*
 * FUN_10036c08 at 10036c08
 * undefined __fastcall FUN_10036c08(int param_1)
 * Address ranges: 10036c08-10036c20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10036c08(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

