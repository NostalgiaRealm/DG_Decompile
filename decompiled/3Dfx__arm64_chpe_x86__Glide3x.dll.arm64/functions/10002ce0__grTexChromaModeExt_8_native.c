/*
 * _grTexChromaModeExt@8_native at 10002ce0
 * undefined _grTexChromaModeExt@8_native(void)
 * Address ranges: 10002ce0-10002deb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexChromaModeExt_8_native(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  code *extraout_w11;
  
  iVar4 = FUN_100093b8();
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
    uVar7 = FUN_10009ae0(iVar4);
    if (((uVar7 & 1) != 0) && (iVar5 = FUN_1000ae88(iVar4), (&DAT_100a23f4)[iVar5 * 0x18] != '\0'))
    {
      if (param_2 != *(int *)(*(int *)(iVar4 + 0xc) + param_1 * 0x55 + 0x1b6)) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6,param_1,param_2);
        *(int *)(param_1 * 0x55 + *(int *)(iVar4 + 0xc) + 0x1b6) = param_2;
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

