/*
 * FUN_10031780 at 10031780
 * undefined FUN_10031780(void)
 * Address ranges: 10031780-100317e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031780(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = DAT_1013cef0 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x1013cef0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_1013cef0 = iVar1;
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if ((iVar1 == 0) && (DAT_1013cef8 != 0)) {
    (*(code *)PTR_FUN_101340f4)(DAT_1013cef8);
    (*(code *)PTR_FUN_101340f0)(DAT_1013cefc);
  }
  return;
}

