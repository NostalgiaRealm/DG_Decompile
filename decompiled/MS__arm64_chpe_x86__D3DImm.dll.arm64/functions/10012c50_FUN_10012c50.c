/*
 * FUN_10012c50 at 10012c50
 * undefined FUN_10012c50(void)
 * Address ranges: 10012c50-10012c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012c50(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x1c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  return;
}

