/*
 * FUN_100eb670 at 100eb670
 * undefined FUN_100eb670(void)
 * Address ranges: 100eb670-100eb6a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100eb670(int param_1)

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
    FUN_100eb4e0(param_1);
    return;
  }
  return;
}

