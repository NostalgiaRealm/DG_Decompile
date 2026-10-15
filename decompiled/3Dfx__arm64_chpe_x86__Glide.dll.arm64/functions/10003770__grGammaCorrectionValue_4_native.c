/*
 * _grGammaCorrectionValue@4_native at 10003770
 * undefined _grGammaCorrectionValue@4_native(void)
 * Address ranges: 10003770-1000381b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGammaCorrectionValue_4_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *extraout_w11;
  undefined4 extraout_s0;
  
  iVar4 = FUN_1001beb0();
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
    piVar6 = (int *)(iVar4 + 0xc);
    iVar4 = 0x1158;
    FUN_100275b8(extraout_s0,extraout_s0,extraout_s0,*piVar6 + 0x1158);
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*piVar6,*piVar6 + iVar4);
    (*extraout_w11)(uVar5);
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

