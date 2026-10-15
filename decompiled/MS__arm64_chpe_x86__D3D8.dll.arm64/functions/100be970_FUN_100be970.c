/*
 * FUN_100be970 at 100be970
 * undefined FUN_100be970(void)
 * Address ranges: 100be970-100be98b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100be970(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 100);
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

