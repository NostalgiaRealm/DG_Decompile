/*
 * FUN_180038440 at 180038440
 * undefined __cdecl FUN_180038440(uint * param_1)
 * Address ranges: 180038440-180038487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038440(uint *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_180064350(param_1,1,0);
  iVar1 = (int)uVar2;
  while (iVar1 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    uVar2 = FUN_180064350(param_1,1,0);
    iVar1 = (int)uVar2;
  }
  return;
}

