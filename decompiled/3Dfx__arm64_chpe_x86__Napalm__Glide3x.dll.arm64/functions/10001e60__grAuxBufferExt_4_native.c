/*
 * _grAuxBufferExt@4_native at 10001e60
 * undefined _grAuxBufferExt@4_native(void)
 * Address ranges: 10001e60-10001f3b
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
    uVar7 = FUN_1000b5c0(iVar4);
    if (((uVar7 & 1) != 0) && (iVar5 = FUN_1000cd68(iVar4), (&DAT_100aa5c1)[iVar5 * 0x18] != '\0'))
    {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6,param_1);
      *(char *)(*(int *)(iVar4 + 0xc) + 0xe5) = (char)param_1;
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

