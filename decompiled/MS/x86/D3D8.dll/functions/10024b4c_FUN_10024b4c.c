/*
 * FUN_10024b4c at 10024b4c
 * undefined __stdcall FUN_10024b4c(void)
 * Address ranges: 10024b4c-10024b7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024b4c(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_100ba2b4;
  piVar1 = (int *)(DAT_100ba2b4 + 0xf8);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(iVar2 + 0x789) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(iVar2 + 0xf4));
    *(undefined4 *)(iVar2 + 0xf4) = 0;
  }
  return;
}

