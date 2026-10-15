/*
 * FUN_10003b78 at 10003b78
 * undefined FUN_10003b78(void)
 * Address ranges: 10003b78-10003bdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003b78(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = DAT_100be0b0 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x100be0b0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_100be0b0 = iVar1;
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if ((iVar1 == 0) && (DAT_100be0b8 != 0)) {
    (*(code *)PTR_FUN_100ba124)(DAT_100be0b8);
    (*(code *)PTR_FUN_100ba120)(DAT_100be0bc);
  }
  return;
}

