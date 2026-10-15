/*
 * FUN_10019760 at 10019760
 * undefined FUN_10019760(void)
 * Address ranges: 10019760-100197cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019760(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(DAT_1013d014 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  piVar1 = (int *)(DAT_1013d014 + 0x20);
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

