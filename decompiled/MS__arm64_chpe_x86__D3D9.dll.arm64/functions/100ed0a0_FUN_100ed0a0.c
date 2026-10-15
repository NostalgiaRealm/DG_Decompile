/*
 * FUN_100ed0a0 at 100ed0a0
 * undefined FUN_100ed0a0(void)
 * Address ranges: 100ed0a0-100ed0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ed0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar1 + 1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar2 == 1) {
    piVar1 = (int *)&DAT_000066bc;
    if (*(int *)(param_1 + -0xb4) != 0) {
      piVar1 = (int *)(*(int *)(param_1 + -0xb4) + 8);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return iVar2;
}

