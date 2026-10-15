/*
 * FUN_1004b290 at 1004b290
 * undefined FUN_1004b290(void)
 * Address ranges: 1004b290-1004b2e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b290(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  do {
    piVar5 = (int *)param_1;
    iVar2 = *piVar5;
    iVar1 = iVar2;
    if (iVar2 == 0) {
      iVar1 = 1;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1 & 0xffffffff,0x10);
    if (bVar4) {
      *piVar5 = iVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar2 != 0) {
    do {
      DataMemoryBarrier(2,2);
      Yield();
      do {
        iVar2 = *piVar5;
        iVar1 = iVar2;
        if (iVar2 == 0) {
          iVar1 = 1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1 & 0xffffffff,0x10);
        if (bVar4) {
          *piVar5 = iVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      DataMemoryBarrier(2,3);
    } while (iVar2 != 0);
  }
  return;
}

