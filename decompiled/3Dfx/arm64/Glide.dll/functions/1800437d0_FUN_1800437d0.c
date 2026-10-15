/*
 * FUN_1800437d0 at 1800437d0
 * undefined __cdecl FUN_1800437d0(uint * param_1)
 * Address ranges: 1800437d0-180043817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800437d0(uint *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_180061670(param_1,1,0);
  iVar1 = (int)uVar2;
  while (iVar1 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    uVar2 = FUN_180061670(param_1,1,0);
    iVar1 = (int)uVar2;
  }
  return;
}

