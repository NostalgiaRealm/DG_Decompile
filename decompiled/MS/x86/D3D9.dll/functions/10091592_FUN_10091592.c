/*
 * FUN_10091592 at 10091592
 * undefined __stdcall FUN_10091592(int param_1)
 * Address ranges: 10091592-100915be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091592(int param_1)

{
  int iVar1;
  int *piVar2;
  
  LOCK();
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    piVar2 = (int *)(*(int *)(param_1 + -100) + 8);
    if (*(int *)(param_1 + -100) == 0) {
      piVar2 = (int *)&DAT_000066bc;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

