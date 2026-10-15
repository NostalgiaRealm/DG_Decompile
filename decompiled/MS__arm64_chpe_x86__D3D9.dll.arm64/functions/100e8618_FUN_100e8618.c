/*
 * FUN_100e8618 at 100e8618
 * undefined FUN_100e8618(void)
 * Address ranges: 100e8618-100e864f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e8618(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x78);
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
  if (iVar2 + -1 + *(int *)(param_1 + 0x74) == 0) {
    FUN_100e8908(param_1);
    return;
  }
  return;
}

