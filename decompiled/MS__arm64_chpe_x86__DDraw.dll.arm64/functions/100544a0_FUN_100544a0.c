/*
 * FUN_100544a0 at 100544a0
 * undefined FUN_100544a0(void)
 * Address ranges: 100544a0-100544c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100544a0(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + 0x1dc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  return 0;
}

