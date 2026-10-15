/*
 * FUN_10032020 at 10032020
 * undefined FUN_10032020(void)
 * Address ranges: 10032020-1003209b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10032020(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) == 0)) {
    piVar1 = (int *)(param_1 + 0x1c);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar2 + 1 == 1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4);
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      DataMemoryBarrier(2,3);
      uVar5 = 1;
    }
  }
  return uVar5;
}

