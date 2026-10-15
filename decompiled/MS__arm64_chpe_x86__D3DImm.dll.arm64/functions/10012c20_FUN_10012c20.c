/*
 * FUN_10012c20 at 10012c20
 * undefined FUN_10012c20(void)
 * Address ranges: 10012c20-10012c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10012c20(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x1c);
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

