/*
 * _grAuxBufferExt@4_native at 10001e20
 * undefined _grAuxBufferExt@4_native(void)
 * Address ranges: 10001e20-10001efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAuxBufferExt_4_native(undefined4 param_1)

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
    if (((uVar7 & 1) != 0) && (iVar5 = FUN_1000ae88(iVar4), (&DAT_100a23f1)[iVar5 * 0x18] != '\0'))
    {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,param_1);
      *(char *)(*(int *)(iVar4 + 0xc) + 0xe1) = (char)param_1;
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

