/*
 * FUN_1003b650 at 1003b650
 * undefined FUN_1003b650(void)
 * Address ranges: 1003b650-1003b6b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003b650(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = DAT_10170ad4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x10170ad4,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_10170ad4 = iVar1;
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if ((iVar1 == 0) && (DAT_10170adc != 0)) {
    (*(code *)PTR_FUN_1016c0f4)(DAT_10170adc);
    (*(code *)PTR_FUN_1016c0f0)(DAT_10170ae0);
  }
  return;
}

