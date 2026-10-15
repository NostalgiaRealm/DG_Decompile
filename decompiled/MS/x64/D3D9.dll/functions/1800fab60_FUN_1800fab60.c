/*
 * FUN_1800fab60 at 1800fab60
 * undefined __fastcall FUN_1800fab60(int * param_1)
 * Address ranges: 1800fab60-1800fab7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fab60(int *param_1)

{
  bool bVar1;
  
  LOCK();
  bVar1 = *param_1 == 0;
  if (bVar1) {
    *param_1 = 1;
  }
  UNLOCK();
  while (!bVar1) {
    LOCK();
    bVar1 = *param_1 == 0;
    if (bVar1) {
      *param_1 = 1;
    }
    UNLOCK();
  }
  return;
}

