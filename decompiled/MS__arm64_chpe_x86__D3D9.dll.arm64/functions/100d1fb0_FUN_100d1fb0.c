/*
 * FUN_100d1fb0 at 100d1fb0
 * undefined FUN_100d1fb0(void)
 * Address ranges: 100d1fb0-100d1fcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d1fb0(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x80);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  return;
}

