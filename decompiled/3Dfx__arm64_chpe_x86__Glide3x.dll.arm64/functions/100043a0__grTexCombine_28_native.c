/*
 * _grTexCombine@28_native at 100043a0
 * undefined _grTexCombine@28_native(void)
 * Address ranges: 100043a0-10004593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexCombine_28_native
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
               int param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  code *extraout_w11;
  
  iVar9 = param_7;
  iVar7 = FUN_100093b8();
  if (*(char *)(iVar7 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar7 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (param_1 < *(int *)(*(int *)(iVar7 + 0x1c) + 0x797)) {
      piVar2 = (int *)(iVar7 + 0xc);
      iVar6 = param_1 * 0x55;
      iVar3 = *piVar2 + iVar6;
      if ((((param_2 != *(byte *)(iVar3 + 0x193)) || (param_3 != *(byte *)(iVar3 + 0x194))) ||
          (param_4 != *(byte *)(iVar3 + 0x195))) ||
         (((param_5 != *(byte *)(iVar3 + 0x196) || (param_6 != *(int *)(iVar3 + 0x197))) ||
          (iVar9 != *(int *)(iVar3 + 0x19b))))) {
        uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar8,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        *(char *)(iVar6 + *piVar2 + 0x193) = (char)param_2;
        *(char *)(iVar6 + *piVar2 + 0x194) = (char)param_3;
        *(char *)(iVar6 + *piVar2 + 0x195) = (char)param_4;
        *(char *)(iVar6 + *piVar2 + 0x196) = (char)param_5;
        *(int *)(iVar6 + *piVar2 + 0x197) = param_6;
        *(int *)(iVar6 + *piVar2 + 0x19b) = param_7;
      }
      FUN_1000ad98(iVar7);
      *(undefined4 *)(*piVar2 + 0x294) = 0;
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

