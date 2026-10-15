/*
 * FUN_10003cd0 at 10003cd0
 * undefined FUN_10003cd0(void)
 * Address ranges: 10003cd0-10003d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003cd0(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = DAT_100be0c8 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x100be0c8,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_100be0c8 = iVar1;
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if ((iVar1 == 0) && (DAT_100be0b4 != 0)) {
    FUN_100014f8(DAT_100be0b4);
    iVar1 = DAT_100be0b4;
    if (DAT_100be0b4 != 0) {
      FUN_100014b0(DAT_100be0b4);
      FUN_10091460(iVar1,0x5c);
    }
    DAT_100be0b4 = 0;
  }
  return;
}

