/*
 * FUN_1003e3a0 at 1003e3a0
 * undefined FUN_1003e3a0(void)
 * Address ranges: 1003e3a0-1003e3f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e3a0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  DAT_10170b00 = DAT_10170b00 + -1;
  (*(code *)PTR_FUN_1016c0c0)(DAT_10170b04);
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

