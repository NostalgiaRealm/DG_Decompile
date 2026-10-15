/*
 * FUN_1004c049 at 1004c049
 * undefined __fastcall FUN_1004c049(int param_1)
 * Address ranges: 1004c049-1004c05d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c049(int param_1)

{
  int iVar1;
  
  do {
    LOCK();
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x38) = 1;
      iVar1 = 0;
    }
    UNLOCK();
  } while (iVar1 != 0);
  return;
}

