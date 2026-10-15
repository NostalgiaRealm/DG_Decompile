/*
 * FUN_1000ce98 at 1000ce98
 * undefined FUN_1000ce98(void)
 * Address ranges: 1000ce98-1000d017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ce98(int param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar6;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (param_2 != 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5,param_2);
      FUN_10083b40(*(int *)(param_1 + 0xc) + 0xe4,param_2,0x2e6);
      iVar6 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
        do {
          FUN_1000a990(param_1,iVar6,1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797));
      }
      FUN_1000cba8(param_1);
      if (param_3 == '\0') {
        uRam100aaa88 = *(undefined8 *)(param_2 + 0x2ee);
        _DAT_100aaa80 = *(undefined8 *)(param_2 + 0x2e6);
        uRam100aaa98 = *(undefined8 *)(param_2 + 0x2fe);
        _DAT_100aaa90 = *(undefined8 *)(param_2 + 0x2f6);
        uRam100aaaa8 = *(undefined8 *)(param_2 + 0x30e);
        _DAT_100aaaa0 = *(undefined8 *)(param_2 + 0x306);
        uRam100aaab8 = *(undefined8 *)(param_2 + 0x31e);
        _DAT_100aaab0 = *(undefined8 *)(param_2 + 0x316);
        uRam100aaac8 = *(undefined8 *)(param_2 + 0x32e);
        _DAT_100aaac0 = *(undefined8 *)(param_2 + 0x326);
        uRam100aaad8 = *(undefined8 *)(param_2 + 0x33e);
        _DAT_100aaad0 = *(undefined8 *)(param_2 + 0x336);
        uRam100aaae8 = *(undefined8 *)(param_2 + 0x34e);
        _DAT_100aaae0 = *(undefined8 *)(param_2 + 0x346);
        uVar5 = (*pcVar4)(*(int *)(param_1 + 0xc),param_2 + 0x356);
        (*extraout_w11_00)(uVar5);
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

