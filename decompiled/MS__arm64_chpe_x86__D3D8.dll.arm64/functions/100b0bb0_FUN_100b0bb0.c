/*
 * FUN_100b0bb0 at 100b0bb0
 * undefined FUN_100b0bb0(void)
 * Address ranges: 100b0bb0-100b0be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b0bb0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x80);
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
  if (iVar2 + -1 + *(int *)(param_1 + 0x7c) == 0) {
    FUN_100b0be8(param_1);
    return;
  }
  return;
}

