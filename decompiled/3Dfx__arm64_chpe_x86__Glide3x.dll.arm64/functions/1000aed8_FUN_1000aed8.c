/*
 * FUN_1000aed8 at 1000aed8
 * undefined FUN_1000aed8(void)
 * Address ranges: 1000aed8-1000afb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aed8(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (param_2 != 0) {
      FUN_1007e4a0(param_2,*(int *)(param_1 + 0xc) + 0xe0,0x1af);
      uVar6 = uRam100a28c8;
      uVar5 = _DAT_100a28c0;
      uVar4 = _DAT_100a28b0;
      *(undefined8 *)(param_2 + 0x1b7) = uRam100a28b8;
      *(undefined8 *)(param_2 + 0x1af) = uVar4;
      *(undefined8 *)(param_2 + 0x1c7) = uVar6;
      *(undefined8 *)(param_2 + 0x1bf) = uVar5;
      uVar6 = uRam100a28e8;
      uVar5 = _DAT_100a28e0;
      uVar4 = _DAT_100a28d0;
      *(undefined8 *)(param_2 + 0x1d7) = uRam100a28d8;
      *(undefined8 *)(param_2 + 0x1cf) = uVar4;
      *(undefined8 *)(param_2 + 0x1e7) = uVar6;
      *(undefined8 *)(param_2 + 0x1df) = uVar5;
      uVar6 = uRam100a2908;
      uVar5 = _DAT_100a2900;
      uVar4 = _DAT_100a28f0;
      *(undefined8 *)(param_2 + 0x1f7) = uRam100a28f8;
      *(undefined8 *)(param_2 + 0x1ef) = uVar4;
      *(undefined8 *)(param_2 + 0x207) = uVar6;
      *(undefined8 *)(param_2 + 0x1ff) = uVar5;
      uVar4 = _DAT_100a2910;
      *(undefined8 *)(param_2 + 0x217) = uRam100a2918;
      *(undefined8 *)(param_2 + 0x20f) = uVar4;
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*(int *)(param_1 + 0xc),param_2 + 0x21f);
      (*extraout_w11)(uVar7);
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

