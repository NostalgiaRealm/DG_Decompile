/*
 * FUN_1006f3d8 at 1006f3d8
 * undefined FUN_1006f3d8(void)
 * Address ranges: 1006f3d8-1006f42f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f3d8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  piVar1 = (int *)(param_1 + 0x38);
  do {
    iVar3 = *piVar1;
    iVar2 = iVar3;
    if (iVar3 == 0) {
      iVar2 = 1;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar5) {
      *piVar1 = iVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  while (iVar3 != 0) {
    DataMemoryBarrier(2,2);
    Yield();
    do {
      iVar3 = *piVar1;
      iVar2 = iVar3;
      if (iVar3 == 0) {
        iVar2 = 1;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = iVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

