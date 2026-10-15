/*
 * FUN_1000cdb8 at 1000cdb8
 * undefined FUN_1000cdb8(void)
 * Address ranges: 1000cdb8-1000ce97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000cdb8(int param_1,int param_2)

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
      FUN_10083b40(param_2,*(int *)(param_1 + 0xc) + 0xe4,0x2e6);
      uVar6 = uRam100aaa98;
      uVar5 = _DAT_100aaa90;
      uVar4 = _DAT_100aaa80;
      *(undefined8 *)(param_2 + 0x2ee) = uRam100aaa88;
      *(undefined8 *)(param_2 + 0x2e6) = uVar4;
      *(undefined8 *)(param_2 + 0x2fe) = uVar6;
      *(undefined8 *)(param_2 + 0x2f6) = uVar5;
      uVar6 = uRam100aaab8;
      uVar5 = _DAT_100aaab0;
      uVar4 = _DAT_100aaaa0;
      *(undefined8 *)(param_2 + 0x30e) = uRam100aaaa8;
      *(undefined8 *)(param_2 + 0x306) = uVar4;
      *(undefined8 *)(param_2 + 0x31e) = uVar6;
      *(undefined8 *)(param_2 + 0x316) = uVar5;
      uVar6 = uRam100aaad8;
      uVar5 = _DAT_100aaad0;
      uVar4 = _DAT_100aaac0;
      *(undefined8 *)(param_2 + 0x32e) = uRam100aaac8;
      *(undefined8 *)(param_2 + 0x326) = uVar4;
      *(undefined8 *)(param_2 + 0x33e) = uVar6;
      *(undefined8 *)(param_2 + 0x336) = uVar5;
      uVar4 = _DAT_100aaae0;
      *(undefined8 *)(param_2 + 0x34e) = uRam100aaae8;
      *(undefined8 *)(param_2 + 0x346) = uVar4;
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*(int *)(param_1 + 0xc),param_2 + 0x356);
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

