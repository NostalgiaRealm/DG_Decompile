/*
 * FUN_100ecb10 at 100ecb10
 * undefined FUN_100ecb10(void)
 * Address ranges: 100ecb10-100ecb47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ecb10(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xd0);
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
  if (iVar2 + -1 + *(int *)(param_1 + 0xcc) == 0) {
    FUN_100ece70(param_1);
    return;
  }
  return;
}

