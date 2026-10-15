/*
 * FUN_1005c1d0 at 1005c1d0
 * undefined __fastcall FUN_1005c1d0(int * param_1)
 * Address ranges: 1005c1d0-1005c1f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005c1d0(int *param_1)

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

