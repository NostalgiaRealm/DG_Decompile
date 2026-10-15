/*
 * FUN_10002eae at 10002eae
 * undefined __fastcall FUN_10002eae(int param_1)
 * Address ranges: 10002eae-10002eda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10002eae(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xf8);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(param_1 + 0x789) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

