/*
 * FUN_100360e0 at 100360e0
 * undefined __fastcall FUN_100360e0(int * param_1)
 * Address ranges: 100360e0-10036104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100360e0(int *param_1)

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

