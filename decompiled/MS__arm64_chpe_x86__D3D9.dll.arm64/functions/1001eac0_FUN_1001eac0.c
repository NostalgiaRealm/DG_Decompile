/*
 * FUN_1001eac0 at 1001eac0
 * undefined FUN_1001eac0(void)
 * Address ranges: 1001eac0-1001eb2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001eac0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(DAT_10175b54 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  piVar1 = (int *)(DAT_10175b54 + 0x20);
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

