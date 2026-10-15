/*
 * FUN_100eaf10 at 100eaf10
 * undefined FUN_100eaf10(void)
 * Address ranges: 100eaf10-100eaf47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100eaf10(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x70);
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
  if (iVar2 + -1 + *(int *)(param_1 + 0x6c) == 0) {
    FUN_10021ca0(param_1);
    return;
  }
  return;
}

