/*
 * FUN_1001ebf8 at 1001ebf8
 * undefined FUN_1001ebf8(void)
 * Address ranges: 1001ebf8-1001edcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ebf8(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *extraout_w11;
  undefined1 auVar6 [16];
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    if (param_2 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
      piVar2 = (int *)(param_1 + 0xc);
      param_2 = param_2 * 0x41;
      iVar3 = *piVar2 + param_2;
      if ((((param_3 != *(byte *)(iVar3 + 0x155)) || (param_4 != *(byte *)(iVar3 + 0x156))) ||
          (param_5 != *(byte *)(iVar3 + 0x157))) ||
         (((param_6 != *(byte *)(iVar3 + 0x158) || (param_7 != *(int *)(iVar3 + 0x159))) ||
          (param_8 != *(int *)(iVar3 + 0x15d))))) {
        auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff,param_3,param_4,param_5,
                        param_6,param_7,param_8);
        *(char *)(*piVar2 + param_2 + 0x155) = (char)param_3;
        *(char *)(*piVar2 + param_2 + 0x156) = (char)param_4;
        *(char *)(*piVar2 + param_2 + 0x157) = (char)param_5;
        *(char *)(*piVar2 + param_2 + 0x158) = (char)param_6;
        *(int *)(*piVar2 + param_2 + 0x159) = param_7;
        *(int *)(*piVar2 + param_2 + 0x15d) = param_8;
      }
      FUN_1001ced8(param_1);
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

