/*
 * FUN_1006b580 at 1006b580
 * undefined FUN_1006b580(void)
 * Address ranges: 1006b580-1006b617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006b580(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x14)) {
    iVar3 = *(int *)(param_1 + 4);
    piVar1 = (int *)(iVar3 + 0x94);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = iVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar2 + 1 == 1) {
      uVar7 = *(undefined8 *)(iVar3 + 0x48);
      uVar6 = 0;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(iVar3 + 0x50);
      *(undefined8 *)param_2 = uVar7;
      param_2[4] = *(int *)(iVar3 + 0x58);
      *(undefined1 *)(iVar3 + 0x99) = 1;
    }
    else {
      uVar6 = 0x887602ca;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
    }
  }
  return uVar6;
}

