/*
 * FUN_10019690 at 10019690
 * undefined FUN_10019690(void)
 * Address ranges: 10019690-10019757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10019690(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_40 [32];
  
  piVar1 = (int *)(DAT_1013d014 + 0x20);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = iVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (iVar4 + 1 == 1) {
    iVar4 = *(int *)(DAT_1013d014 + 0x1c);
    while (iVar4 != 0) {
      (*(code *)PTR_FUN_10134238)(auStack_40,0,0,0,0x400000);
      iVar4 = *(int *)(DAT_1013d014 + 0x1c);
    }
  }
  piVar1 = (int *)(DAT_1013d014 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  iVar4 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
  if (iVar4 == 0) {
    FUN_10006560(1);
  }
  return param_1;
}

