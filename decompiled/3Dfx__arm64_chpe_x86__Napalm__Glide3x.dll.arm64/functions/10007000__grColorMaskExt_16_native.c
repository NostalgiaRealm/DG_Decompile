/*
 * _grColorMaskExt@16_native at 10007000
 * undefined _grColorMaskExt@16_native(void)
 * Address ranges: 10007000-1000715f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grColorMaskExt_16_native(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  code *extraout_w11;
  
  iVar8 = FUN_1000ae60();
  if (*(char *)(iVar8 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar8 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar10 = FUN_1000b5c0(iVar8);
    if ((uVar10 & 1) != 0) {
      piVar2 = (int *)(iVar8 + 0xc);
      bVar4 = param_1 != 0;
      iVar8 = *piVar2;
      bVar5 = param_2 != 0;
      bVar6 = param_3 != 0;
      bVar7 = param_4 != 0;
      if ((((bVar4 != (bool)*(char *)(iVar8 + 0xec)) || (bVar5 != (bool)*(char *)(iVar8 + 0xed))) ||
          (bVar6 != (bool)*(char *)(iVar8 + 0xee))) || (bVar7 != (bool)*(char *)(iVar8 + 0xef))) {
        uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar9,bVar4,bVar5,bVar6,bVar7);
        *(bool *)(*piVar2 + 0xec) = bVar4;
        *(bool *)(*piVar2 + 0xed) = bVar5;
        *(bool *)(*piVar2 + 0xee) = bVar6;
        *(bool *)(*piVar2 + 0xef) = bVar7;
      }
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

