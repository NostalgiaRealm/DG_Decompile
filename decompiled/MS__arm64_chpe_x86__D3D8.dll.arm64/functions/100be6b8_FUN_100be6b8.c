/*
 * FUN_100be6b8 at 100be6b8
 * undefined FUN_100be6b8(void)
 * Address ranges: 100be6b8-100be6ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100be6b8(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 100);
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
  if (iVar2 + -1 + *(int *)(param_1 + 0x60) == 0) {
    FUN_100be998(param_1);
    return;
  }
  return;
}

