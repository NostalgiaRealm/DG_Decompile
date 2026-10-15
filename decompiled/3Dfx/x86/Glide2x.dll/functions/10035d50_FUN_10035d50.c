/*
 * FUN_10035d50 at 10035d50
 * undefined __fastcall FUN_10035d50(int * param_1)
 * Address ranges: 10035d50-10035d74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10035d50(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
    iVar1 = 0;
  }
  UNLOCK();
  while (iVar1 != 0) {
    LOCK();
    iVar1 = *param_1;
    if (iVar1 == 0) {
      *param_1 = 1;
      iVar1 = 0;
    }
    UNLOCK();
  }
  return;
}

