/*
 * FUN_100bf700 at 100bf700
 * undefined FUN_100bf700(void)
 * Address ranges: 100bf700-100bf71f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bf700(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xe0);
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

