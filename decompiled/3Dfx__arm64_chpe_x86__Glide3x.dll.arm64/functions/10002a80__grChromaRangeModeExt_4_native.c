/*
 * _grChromaRangeModeExt@4_native at 10002a80
 * undefined _grChromaRangeModeExt@4_native(void)
 * Address ranges: 10002a80-10002b6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromaRangeModeExt_4_native(int param_1)

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
    if ((((uVar7 & 1) != 0) && (iVar5 = FUN_1000ae88(iVar4), (&DAT_100a23f3)[iVar5 * 0x18] != '\0'))
       && (param_1 != *(int *)(*(int *)(iVar4 + 0xc) + 0x142))) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,param_1);
      *(int *)(*(int *)(iVar4 + 0xc) + 0x142) = param_1;
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

