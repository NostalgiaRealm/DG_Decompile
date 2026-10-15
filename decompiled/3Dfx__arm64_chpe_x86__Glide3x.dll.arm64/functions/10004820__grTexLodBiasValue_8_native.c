/*
 * _grTexLodBiasValue@8_native at 10004820
 * undefined _grTexLodBiasValue@8_native(void)
 * Address ranges: 10004820-1000493f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexLodBiasValue_8_native(ulonglong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int extraout_w1;
  int iVar5;
  code *extraout_w11;
  float extraout_s0;
  undefined1 auVar6 [16];
  
  iVar4 = FUN_100093b8(param_1,param_1 & 0xffffffff);
  if (*(char *)(iVar4 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar4 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (extraout_w1 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797)) {
      iVar5 = (int)(extraout_s0 * 4.0);
      if (iVar5 < -0x20) {
        iVar5 = 0x20;
      }
      if (0x1f < iVar5) {
        iVar5 = 0x1f;
      }
      if ((float)iVar5 * 0.25 != *(float *)(*(int *)(iVar4 + 0xc) + extraout_w1 * 0x55 + 0x1a4)) {
        auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff);
        *(float *)(extraout_w1 * 0x55 + *(int *)(iVar4 + 0xc) + 0x1a4) = (float)iVar5 * 0.25;
      }
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
  }
  return;
}

