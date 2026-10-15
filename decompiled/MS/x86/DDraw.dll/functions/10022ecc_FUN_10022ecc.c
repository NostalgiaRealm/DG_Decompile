/*
 * FUN_10022ecc at 10022ecc
 * undefined __fastcall FUN_10022ecc(int * param_1)
 * Address ranges: 10022ecc-10022eea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10022ecc(int *param_1)

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

