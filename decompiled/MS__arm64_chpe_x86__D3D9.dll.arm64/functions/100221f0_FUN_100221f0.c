/*
 * FUN_100221f0 at 100221f0
 * undefined FUN_100221f0(void)
 * Address ranges: 100221f0-1002238b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100221f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  code *extraout_w11;
  
  piVar1 = (int *)(param_1 + 0x2c);
  puVar3 = (uint *)&DAT_00000dd0;
  if (*piVar1 != 0) {
    puVar3 = (uint *)(*piVar1 + -0x58e4);
  }
  if (((*puVar3 >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar7 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar7 == 0) {
      FUN_100071d0(0);
    }
  }
  piVar2 = (int *)(param_1 + 0xc);
  if (*piVar2 != 0) {
    if ((*(int *)(param_1 + 0x44) == 0) ||
       (((*(uint *)(param_1 + 0x34) >> 9 & 1) == 0 && (*(char *)(param_1 + 99) == '\0')))) {
      *piVar2 = 0;
      piVar2 = (int *)(param_1 + 0x1c);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar7 = 0;
      if (*piVar1 != 0) {
        iVar7 = *piVar1 + -0x66b4;
      }
      FUN_1000dc00(iVar7,param_1);
    }
    else {
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar8);
      *piVar2 = 0;
      if (*(uint *)(param_1 + 0x5c) != 0xffffffff) {
        puVar3 = (uint *)&DAT_00006664;
        if (*piVar1 != 0) {
          puVar3 = (uint *)(*piVar1 + -0x50);
        }
        *puVar3 = *puVar3 & (1 << (ulonglong)(*(uint *)(param_1 + 0x5c) & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  if (bVar6) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

