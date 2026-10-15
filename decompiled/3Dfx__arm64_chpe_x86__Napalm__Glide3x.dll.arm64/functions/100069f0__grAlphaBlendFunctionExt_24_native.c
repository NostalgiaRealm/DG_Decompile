/*
 * _grAlphaBlendFunctionExt@24_native at 100069f0
 * undefined _grAlphaBlendFunctionExt@24_native(void)
 * Address ranges: 100069f0-10006bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaBlendFunctionExt_24_native
               (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  
  iVar5 = FUN_1000ae60();
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    uVar8 = FUN_1000b5c0(iVar5);
    if ((((uVar8 & 1) != 0) && (uVar8 = FUN_1000af10(iVar5), (uVar8 & 1) != 0)) &&
       (iVar6 = FUN_1000cd68(iVar5), iVar6 == 4)) {
      piVar2 = (int *)(iVar5 + 0xc);
      if (0xf < (int)param_1) {
        param_1 = 0;
      }
      iVar5 = *piVar2;
      if (0xf < (int)param_2) {
        param_2 = 0;
      }
      if (2 < param_3) {
        param_3 = 0;
      }
      if (2 < param_6) {
        param_6 = 0;
      }
      if ((((param_1 != *(byte *)(iVar5 + 0xe6)) || (param_2 != *(byte *)(iVar5 + 0xe7))) ||
          ((param_4 != *(byte *)(iVar5 + 0xe8) ||
           ((param_5 != *(byte *)(iVar5 + 0xe9) || (param_3 != *(byte *)(iVar5 + 0xea))))))) ||
         (param_6 != *(byte *)(iVar5 + 0xeb))) {
        uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar7,param_1,param_2,param_3,param_4,param_5,param_6);
        *(char *)(*piVar2 + 0xe6) = (char)param_1;
        *(char *)(*piVar2 + 0xe7) = (char)param_2;
        *(char *)(*piVar2 + 0xe8) = (char)param_4;
        *(char *)(*piVar2 + 0xe9) = (char)param_5;
        *(char *)(*piVar2 + 0xea) = (char)param_3;
        *(char *)(*piVar2 + 0xeb) = (char)param_6;
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

