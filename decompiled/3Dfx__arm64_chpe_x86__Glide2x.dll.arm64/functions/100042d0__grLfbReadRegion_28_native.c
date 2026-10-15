/*
 * _grLfbReadRegion@28_native at 100042d0
 * undefined _grLfbReadRegion@28_native(void)
 * Address ranges: 100042d0-100043eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbReadRegion_28_native
               (uint param_1,undefined8 param_2,ulonglong param_3,int param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint extraout_w1;
  uint uVar5;
  char cVar6;
  uint uVar7;
  code *extraout_w11;
  uint uVar8;
  undefined1 auVar9 [16];
  
  iVar4 = FUN_1001ba50();
  cVar3 = '\0';
  cVar6 = '\0';
  if (*(char *)(iVar4 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar4 + 0x38);
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (param_1 < 3) {
      uVar7 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x98);
      uVar8 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x9c);
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
    }
    uVar5 = (uint)param_3;
    if (((extraout_w1 < uVar7 && uVar5 < uVar8) && (extraout_w1 < extraout_w1 + param_4)) &&
       (uVar5 < uVar5 + param_5)) {
      auVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar3 = (*extraout_w11)(auVar9._0_8_ & 0xffffffff,param_1,auVar9._8_8_ & 0xffffffff,
                              param_3 & 0xffffffff);
    }
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    cVar6 = cVar3;
  }
  return cVar6 != '\0';
}

