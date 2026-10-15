/*
 * _grSstWinOpen@28_native at 10002550
 * undefined _grSstWinOpen@28_native(void)
 * Address ranges: 10002550-10002683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
_grSstWinOpen_28_native
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  iVar5 = FUN_1000ae60();
  *(undefined1 *)(iVar5 + 0x3d) = 1;
  uVar7 = FUN_10009878();
  if (((uVar7 & 1) != 0) && (*(char *)(iVar5 + 0x3c) != '\0')) {
    FUN_1000c918(iVar5,0);
  }
  piVar1 = (int *)(iVar5 + 0x34);
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
  if (((iVar2 + 1 == 1) && (uVar7 = FUN_1000b5c0(iVar5), (uVar7 & 1) != 0)) &&
     (*(int *)(iVar5 + 0x30) == 0)) {
    uVar6 = FUN_1000b968(iVar5,param_1,param_2,param_3,param_4,3,param_5,param_6,param_7);
  }
  else {
    uVar6 = 0;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  *(undefined1 *)(iVar5 + 0x3d) = 0;
  return uVar6;
}

