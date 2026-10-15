/*
 * FUN_100bdc38 at 100bdc38
 * undefined FUN_100bdc38(void)
 * Address ranges: 100bdc38-100bdc6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bdc38(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x54);
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
  if (iVar2 + -1 + *(int *)(param_1 + 0x50) == 0) {
    FUN_100176f0(param_1);
    return;
  }
  return;
}

