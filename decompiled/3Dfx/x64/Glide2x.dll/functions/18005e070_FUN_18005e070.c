/*
 * FUN_18005e070 at 18005e070
 * undefined __fastcall FUN_18005e070(int * param_1)
 * Address ranges: 18005e070-18005e08a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e070(int *param_1)

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

