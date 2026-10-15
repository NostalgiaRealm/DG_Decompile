/*
 * _grSstOpen@24_native at 10002380
 * undefined _grSstOpen@24_native(void)
 * Address ranges: 10002380-100024b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool _grSstOpen_24_native
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 extraout_w11;
  
  iVar4 = FUN_1001beb0();
  piVar1 = (int *)(iVar4 + 0x34);
  *(undefined1 *)(iVar4 + 0x3d) = extraout_w11;
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
  if (((iVar5 + 1 == 1) && (uVar6 = FUN_1001c150(iVar4), (uVar6 & 1) != 0)) &&
     (*(int *)(iVar4 + 0x30) == 0)) {
    iVar5 = FUN_1001c468(iVar4,0,param_1,param_2,param_3,0,param_4,param_6,0);
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
  if (iVar5 != 0) {
    _DAT_1009f7c8 = 0;
    _DAT_1009f7c0 = 0;
    _DAT_1009f7d8 = 0;
    _DAT_1009f7d0 = 0;
    _DAT_1009f7ec = 0;
    _DAT_1009f7e0 = 0;
    DAT_1009f7e4._0_4_ = 1;
    DAT_1009f7e4._4_4_ = 1;
  }
  return iVar5 != 0;
}

