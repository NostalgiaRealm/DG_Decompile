/*
 * _grTexLodBiasValue@8_native at 10004a10
 * undefined _grTexLodBiasValue@8_native(void)
 * Address ranges: 10004a10-10004b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexLodBiasValue_8_native(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *extraout_w11;
  float extraout_s0;
  
  iVar4 = FUN_1000ae60();
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
    if (param_1 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797)) {
      iVar6 = (int)(extraout_s0 * 4.0);
      if (iVar6 < -0x20) {
        iVar6 = 0x20;
      }
      if (0x1f < iVar6) {
        iVar6 = 0x1f;
      }
      if ((float)iVar6 * 0.25 != *(float *)(*(int *)(iVar4 + 0xc) + param_1 * 0x9d + 0x24f)) {
        uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar5,param_1);
        *(float *)(*(int *)(iVar4 + 0xc) + param_1 * 0x9d + 0x24f) = (float)iVar6 * 0.25;
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

