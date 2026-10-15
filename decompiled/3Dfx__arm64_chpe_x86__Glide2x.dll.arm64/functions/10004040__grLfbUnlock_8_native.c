/*
 * _grLfbUnlock@8_native at 10004040
 * undefined _grLfbUnlock@8_native(void)
 * Address ranges: 10004040-10004133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbUnlock_8_native(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint extraout_w1;
  ulonglong uVar6;
  ulonglong uVar7;
  code *extraout_w11;
  undefined1 auVar8 [16];
  
  iVar5 = FUN_1001ba50();
  bVar3 = false;
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (extraout_w1 < 3) {
      uVar6 = (ulonglong)*(uint *)(*(int *)(iVar5 + 0xc) + 0x98);
      uVar7 = (ulonglong)*(uint *)(*(int *)(iVar5 + 0xc) + 0x9c);
    }
    else {
      uVar6 = 0;
      uVar7 = 0;
    }
    auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(auVar8._0_8_ & 0xffffffff,param_1,auVar8._8_8_ & 0xffffffff,1,0,0,
                            uVar6 & 0xffffffff,uVar7 & 0xffffffff,0);
    bVar3 = cVar4 != '\0';
    do {
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return bVar3;
}

