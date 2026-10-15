/*
 * FUN_100af4f0 at 100af4f0
 * undefined FUN_100af4f0(void)
 * Address ranges: 100af4f0-100af50f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100af4f0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  return iVar2 + 1;
}

