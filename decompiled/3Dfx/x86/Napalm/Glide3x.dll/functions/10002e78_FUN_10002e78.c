/*
 * FUN_10002e78 at 10002e78
 * undefined __fastcall FUN_10002e78(int param_1)
 * Address ranges: 10002e78-10002ea4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10002e78(int param_1)

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

