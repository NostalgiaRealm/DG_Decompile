/*
 * _grTexAlphaCombineExt@44_native at 10006620
 * undefined _grTexAlphaCombineExt@44_native(void)
 * Address ranges: 10006620-100068bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexAlphaCombineExt_44_native
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
      if ((((param_2 != *(int *)(iVar5 + 0x1f6)) || (param_3 != *(int *)(iVar5 + 0x1fa))) ||
          ((param_4 != *(int *)(iVar5 + 0x1fe) ||
           ((param_5 != *(int *)(iVar5 + 0x202) || (param_6 != *(int *)(iVar5 + 0x206))))))) ||
         ((param_7 != *(int *)(iVar5 + 0x20a) ||
          ((((param_8 != *(int *)(iVar5 + 0x20e) || (param_9 != *(int *)(iVar5 + 0x212))) ||
            (param_11 != *(uint *)(iVar5 + 0x216))) || (param_13 != *(int *)(iVar5 + 0x21a))))))) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        *(int *)(iVar5 + 0x1f6) = param_2;
        *(int *)(iVar5 + 0x1fa) = param_3;
        *(int *)(iVar5 + 0x1fe) = param_4;
        *(int *)(iVar5 + 0x202) = param_5;
        *(int *)(iVar5 + 0x206) = param_6;
        *(int *)(iVar5 + 0x20a) = param_7;
        *(int *)(iVar5 + 0x20e) = param_8;
        *(int *)(iVar5 + 0x212) = param_9;
        *(uint *)(iVar5 + 0x216) = param_11;
        *(int *)(iVar5 + 0x21a) = param_13;
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

