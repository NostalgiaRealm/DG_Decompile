/*
 * FUN_1001e9f0 at 1001e9f0
 * undefined FUN_1001e9f0(void)
 * Address ranges: 1001e9f0-1001eab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001e9f0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_40 [32];
  
  piVar1 = (int *)(DAT_10175b54 + 0x20);
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
    iVar4 = *(int *)(DAT_10175b54 + 0x1c);
    while (iVar4 != 0) {
      (*(code *)PTR_FUN_1016c238)(auStack_40,0,0,0,0x400000);
      iVar4 = *(int *)(DAT_10175b54 + 0x1c);
    }
  }
  piVar1 = (int *)(DAT_10175b54 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
  if (iVar4 == 0) {
    FUN_100071d0(1);
  }
  return param_1;
}

