/*
 * FUN_180042980 at 180042980
 * undefined __cdecl FUN_180042980(uint * param_1)
 * Address ranges: 180042980-1800429c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042980(uint *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_180060820(param_1,1,0);
  iVar1 = (int)uVar2;
  while (iVar1 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    uVar2 = FUN_180060820(param_1,1,0);
    iVar1 = (int)uVar2;
  }
  return;
}

