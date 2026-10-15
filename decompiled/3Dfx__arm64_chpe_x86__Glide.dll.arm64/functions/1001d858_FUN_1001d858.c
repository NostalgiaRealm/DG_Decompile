/*
 * FUN_1001d858 at 1001d858
 * undefined FUN_1001d858(void)
 * Address ranges: 1001d858-1001d9ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001d858(int param_1,uint param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
                 int param_6,int param_7,int param_8)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  undefined1 auVar9 [16];
  
  cVar3 = '\0';
  cVar6 = '\0';
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (param_2 < 3) {
      uVar7 = *(uint *)(*(int *)(param_1 + 0xc) + 0x98);
      uVar8 = *(uint *)(*(int *)(param_1 + 0xc) + 0x9c);
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
    }
    uVar4 = (uint)param_3;
    uVar5 = (uint)param_4;
    if ((uVar4 < uVar7 && uVar5 < uVar8) && (uVar4 < uVar4 + param_6)) {
      if (param_8 < 0) {
        auVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        cVar3 = (*extraout_w11_00)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_ & 0xffffffff,
                                   param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff);
      }
      else if (uVar5 < uVar5 + param_7) {
        auVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        cVar3 = (*extraout_w11)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_ & 0xffffffff,
                                param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff);
      }
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

