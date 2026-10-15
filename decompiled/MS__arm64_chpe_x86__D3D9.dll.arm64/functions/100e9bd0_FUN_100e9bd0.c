/*
 * FUN_100e9bd0 at 100e9bd0
 * undefined FUN_100e9bd0(void)
 * Address ranges: 100e9bd0-100e9bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e9bd0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xe4);
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

