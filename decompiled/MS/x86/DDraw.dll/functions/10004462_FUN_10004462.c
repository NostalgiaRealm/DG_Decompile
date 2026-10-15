/*
 * FUN_10004462 at 10004462
 * undefined __stdcall FUN_10004462(void)
 * Address ranges: 10004462-10004492
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004462(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_1006c210;
  piVar1 = (int *)(DAT_1006c210 + 0xf8);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(iVar2 + 0x789) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(iVar2 + 0xf4));
    *(undefined4 *)(iVar2 + 0xf4) = 0;
  }
  return;
}

