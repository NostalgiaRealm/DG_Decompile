/*
 * FUN_100bdc10 at 100bdc10
 * undefined FUN_100bdc10(void)
 * Address ranges: 100bdc10-100bdc2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bdc10(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x54);
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

