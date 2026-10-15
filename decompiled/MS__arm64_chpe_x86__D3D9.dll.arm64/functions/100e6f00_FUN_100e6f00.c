/*
 * FUN_100e6f00 at 100e6f00
 * undefined FUN_100e6f00(void)
 * Address ranges: 100e6f00-100e6f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e6f00(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar2 + -1 + *(int *)(param_1 + 4) == 0) {
    FUN_100e68b8(param_1);
    return;
  }
  return;
}

