/*
 * FUN_1002c1be at 1002c1be
 * undefined __stdcall FUN_1002c1be(void)
 * Address ranges: 1002c1be-1002c1ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c1be(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_100dea74;
  piVar1 = (int *)(DAT_100dea74 + 0xf8);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(iVar2 + 0x789) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(iVar2 + 0xf4));
    *(undefined4 *)(iVar2 + 0xf4) = 0;
  }
  return;
}

