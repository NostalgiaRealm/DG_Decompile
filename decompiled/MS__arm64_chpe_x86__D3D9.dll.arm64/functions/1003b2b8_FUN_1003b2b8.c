/*
 * FUN_1003b2b8 at 1003b2b8
 * undefined FUN_1003b2b8(void)
 * Address ranges: 1003b2b8-1003b3cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003b2b8(int param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  char local_40 [16];
  
  param_1 = param_1 * 0x228;
  bVar6 = false;
  iVar3 = *(int *)(&DAT_1017155c + param_1);
  if (param_3 == iVar3 && iVar3 != 0) {
    FUN_10039f48(local_40);
    iVar3 = *(int *)(&DAT_10171560 + param_1) + -1;
    *(int *)(&DAT_10171560 + param_1) = iVar3;
    bVar6 = iVar3 == 0;
    if (bVar6) {
      iVar3 = *(int *)(&DAT_10171558 + param_1);
      puVar1 = (undefined4 *)(iVar3 + 0x50);
      (*(code *)PTR_FUN_1016c034)(param_3,*puVar1);
      *puVar1 = 0;
      (*(code *)PTR_FUN_1016c014)(param_3);
      *(undefined1 *)(iVar3 + 0x65) = 1;
      *(int *)(&DAT_1017155c + param_1) = 0;
    }
    *param_4 = 1;
    if (local_40[0] == '\0') {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
    else {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    piVar2 = (int *)(DAT_10175b54 + 0x20);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return bVar6;
}

