/*
 * FUN_100313e8 at 100313e8
 * undefined FUN_100313e8(void)
 * Address ranges: 100313e8-100314ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100313e8(int param_1,undefined8 param_2,int param_3,undefined4 *param_4)

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
  iVar3 = *(int *)(&DAT_1013899c + param_1);
  if (param_3 == iVar3 && iVar3 != 0) {
    FUN_10030448(local_40);
    iVar3 = *(int *)(&DAT_101389a0 + param_1) + -1;
    *(int *)(&DAT_101389a0 + param_1) = iVar3;
    bVar6 = iVar3 == 0;
    if (bVar6) {
      iVar3 = *(int *)(&DAT_10138998 + param_1);
      puVar1 = (undefined4 *)(iVar3 + 0x50);
      (*(code *)PTR_FUN_10134034)(param_3,*puVar1);
      *puVar1 = 0;
      (*(code *)PTR_FUN_10134014)(param_3);
      *(undefined1 *)(iVar3 + 0x65) = 1;
      *(int *)(&DAT_1013899c + param_1) = 0;
    }
    *param_4 = 1;
    if (local_40[0] == '\0') {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
    else {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    piVar2 = (int *)(DAT_1013d014 + 0x20);
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

