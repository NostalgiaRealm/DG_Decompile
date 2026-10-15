/*
 * FUN_1000b508 at 1000b508
 * undefined FUN_1000b508(void)
 * Address ranges: 1000b508-1000b6a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000b508(int param_1,undefined4 param_2,uint param_3,uint param_4,ulonglong param_5,
                 int param_6,int param_7,int param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_w10;
  code *extraout_w11;
  code *extraout_w11_00;
  uint local_30;
  uint auStack_2c [3];
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x3c) == '\0') goto LAB_1000b68c;
  piVar1 = (int *)(param_1 + 0x38);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  local_30 = 0;
  auStack_2c[0] = 0;
  FUN_1000ee78(*(undefined4 *)(param_1 + 0xc),param_2,&local_30,auStack_2c);
  uVar5 = extraout_w10;
  if ((param_3 < local_30 && param_4 < auStack_2c[0]) && (param_3 < param_3 + param_6)) {
    if (param_8 < 0) {
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar5 = (*extraout_w11_00)(uVar4,param_2,param_3,param_4,param_5 & 0xffffffff);
    }
    else {
      if (param_4 + param_7 <= param_4) goto LAB_1000b678;
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar5 = (*extraout_w11)(uVar4,param_2,param_3,param_4,param_5 & 0xffffffff);
    }
    uVar5 = uVar5 & 0xff;
  }
LAB_1000b678:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
LAB_1000b68c:
  return uVar5 != 0;
}

