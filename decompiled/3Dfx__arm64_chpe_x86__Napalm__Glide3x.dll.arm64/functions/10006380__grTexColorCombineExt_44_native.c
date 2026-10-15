/*
 * _grTexColorCombineExt@44_native at 10006380
 * undefined _grTexColorCombineExt@44_native(void)
 * Address ranges: 10006380-1000661b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexColorCombineExt_44_native
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
               int param_8,int param_9,undefined4 param_10,uint param_11,undefined4 param_12,
               int param_13)

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
    if (((((uVar7 & 1) != 0) && (uVar7 = FUN_1000af10(iVar4), (uVar7 & 1) != 0)) &&
        (iVar5 = FUN_1000cd68(iVar4), iVar5 == 4)) &&
       (param_1 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797))) {
      if (2 < param_11) {
        param_11 = 0;
      }
      iVar5 = *(int *)(iVar4 + 0xc) + param_1 * 0x9d;
      if ((((param_2 != *(int *)(iVar5 + 0x21e)) || (param_3 != *(int *)(iVar5 + 0x222))) ||
          ((param_4 != *(int *)(iVar5 + 0x226) ||
           ((param_5 != *(int *)(iVar5 + 0x22a) || (param_6 != *(int *)(iVar5 + 0x22e))))))) ||
         ((param_7 != *(int *)(iVar5 + 0x232) ||
          ((((param_8 != *(int *)(iVar5 + 0x236) || (param_9 != *(int *)(iVar5 + 0x23a))) ||
            (param_11 != *(uint *)(iVar5 + 0x23e))) || (param_13 != *(int *)(iVar5 + 0x242))))))) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        *(int *)(iVar5 + 0x21e) = param_2;
        *(int *)(iVar5 + 0x222) = param_3;
        *(int *)(iVar5 + 0x226) = param_4;
        *(int *)(iVar5 + 0x22a) = param_5;
        *(int *)(iVar5 + 0x22e) = param_6;
        *(int *)(iVar5 + 0x232) = param_7;
        *(int *)(iVar5 + 0x236) = param_8;
        *(int *)(iVar5 + 0x23a) = param_9;
        *(uint *)(iVar5 + 0x23e) = param_11;
        *(int *)(iVar5 + 0x242) = param_13;
        FUN_1000cba8(iVar4);
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x3d0) = 0;
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

