/*
 * FUN_1000afb8 at 1000afb8
 * undefined FUN_1000afb8(void)
 * Address ranges: 1000afb8-1000b137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000afb8(int param_1,int param_2,char param_3)

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
      FUN_1007e4a0(*(int *)(param_1 + 0xc) + 0xe0,param_2,0x1af);
      iVar6 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797)) {
        do {
          FUN_10008f68(param_1,iVar6,1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*(int *)(param_1 + 0x1c) + 0x797));
      }
      FUN_1000ad98(param_1);
      if (param_3 == '\0') {
        uRam100a28b8 = *(undefined8 *)(param_2 + 0x1b7);
        _DAT_100a28b0 = *(undefined8 *)(param_2 + 0x1af);
        uRam100a28c8 = *(undefined8 *)(param_2 + 0x1c7);
        _DAT_100a28c0 = *(undefined8 *)(param_2 + 0x1bf);
        uRam100a28d8 = *(undefined8 *)(param_2 + 0x1d7);
        _DAT_100a28d0 = *(undefined8 *)(param_2 + 0x1cf);
        uRam100a28e8 = *(undefined8 *)(param_2 + 0x1e7);
        _DAT_100a28e0 = *(undefined8 *)(param_2 + 0x1df);
        uRam100a28f8 = *(undefined8 *)(param_2 + 0x1f7);
        _DAT_100a28f0 = *(undefined8 *)(param_2 + 0x1ef);
        uRam100a2908 = *(undefined8 *)(param_2 + 0x207);
        _DAT_100a2900 = *(undefined8 *)(param_2 + 0x1ff);
        uRam100a2918 = *(undefined8 *)(param_2 + 0x217);
        _DAT_100a2910 = *(undefined8 *)(param_2 + 0x20f);
        uVar5 = (*pcVar4)(*(int *)(param_1 + 0xc),param_2 + 0x21f);
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

