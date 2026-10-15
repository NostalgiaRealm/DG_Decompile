/*
 * FUN_100b0d10 at 100b0d10
 * undefined FUN_100b0d10(void)
 * Address ranges: 100b0d10-100b0d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b0d10(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar1 + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar2 == 1) {
    piVar1 = (int *)&DAT_000058e4;
    if (*(int *)(param_1 + -100) != 0) {
      piVar1 = (int *)(*(int *)(param_1 + -100) + 4);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return iVar2;
}

