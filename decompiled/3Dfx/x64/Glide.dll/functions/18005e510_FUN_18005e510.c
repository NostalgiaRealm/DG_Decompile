/*
 * FUN_18005e510 at 18005e510
 * undefined __fastcall FUN_18005e510(int * param_1)
 * Address ranges: 18005e510-18005e52a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e510(int *param_1)

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

