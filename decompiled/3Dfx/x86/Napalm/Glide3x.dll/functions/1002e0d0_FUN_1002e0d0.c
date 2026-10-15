/*
 * FUN_1002e0d0 at 1002e0d0
 * undefined __fastcall FUN_1002e0d0(int * param_1)
 * Address ranges: 1002e0d0-1002e0f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e0d0(int *param_1)

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

