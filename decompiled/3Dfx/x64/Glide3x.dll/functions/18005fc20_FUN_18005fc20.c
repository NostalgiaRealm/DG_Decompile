/*
 * FUN_18005fc20 at 18005fc20
 * undefined __fastcall FUN_18005fc20(int * param_1)
 * Address ranges: 18005fc20-18005fc3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005fc20(int *param_1)

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

