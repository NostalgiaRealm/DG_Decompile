/*
 * FUN_1003e2a8 at 1003e2a8
 * undefined FUN_1003e2a8(void)
 * Address ranges: 1003e2a8-1003e39f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003e2a8(uint param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  bVar4 = false;
  if (DAT_10170b00 == 0) {
    piVar1 = (int *)(DAT_10175b54 + 0x20);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar5 + 1 == 1) && (*(int *)(DAT_10175b54 + 0x1c) != 0)) {
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
    }
    else {
      uVar6 = 0;
      while( true ) {
        iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10170b04);
        bVar4 = iVar5 != 0;
        if (iVar5 != 0) break;
        if (param_1 <= uVar6) {
          return false;
        }
        (*(code *)PTR_FUN_1016c114)(1);
        uVar6 = uVar6 + 1;
      }
      DAT_10170b00 = DAT_10170b00 + 1;
    }
  }
  return bVar4;
}

