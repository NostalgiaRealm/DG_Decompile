/*
 * _grSstWinOpen@28_native at 10002380
 * undefined _grSstWinOpen@28_native(void)
 * Address ranges: 10002380-10002497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSstWinOpen_28_native
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar4 = FUN_1001ba50();
  piVar1 = (int *)(iVar4 + 0x34);
  *(undefined1 *)(iVar4 + 0x3d) = 1;
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
  if (((iVar5 + 1 == 1) && (uVar6 = FUN_1001bcf0(iVar4), (uVar6 & 1) != 0)) &&
     (*(int *)(iVar4 + 0x30) == 0)) {
    iVar5 = FUN_1001c008(iVar4,param_1,param_2,param_3,param_4,0,param_5,param_6,param_7);
  }
  else {
    iVar5 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  *(undefined1 *)(iVar4 + 0x3d) = 0;
  return iVar5 != 0;
}

