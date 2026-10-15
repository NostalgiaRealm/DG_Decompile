/*
 * FUN_100b55c0 at 100b55c0
 * undefined FUN_100b55c0(void)
 * Address ranges: 100b55c0-100b5893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b55c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  code *extraout_w11;
  uint uVar12;
  
  piVar1 = (int *)(param_1 + 0x1cf00);
  if (*piVar1 != 0) {
    FUN_100b2c28(param_1 + 0x1d02c);
    piVar2 = (int *)(param_1 + 0x1cf04);
    FUN_10130fb8(*piVar2 + 0x11c0);
    FUN_101138b0(*(int *)(*piVar2 + 0x1304) + 4,0);
    FUN_101194c0(*piVar1,*(undefined4 *)(param_1 + 0x1d044));
    *(undefined4 *)(param_1 + 0x1d044) = 0;
    iVar6 = *(int *)(param_1 + 0x1d048);
    if (iVar6 != -1) {
      iVar7 = *(int *)(*piVar2 + 0x15d8);
      iVar3 = iVar7 + 0x1c;
      (*(code *)PTR_FUN_1016c074)(iVar3);
      FUN_10111aa8(iVar7,iVar6,1);
      (*(code *)PTR_FUN_1016c0c0)(iVar3);
    }
    FUN_101194c0(*piVar1,*(undefined4 *)(param_1 + 0x1cf08));
    *(undefined4 *)(param_1 + 0x1cf08) = 0;
    iVar6 = *piVar1 + *(int *)(param_1 + 0x14) * 0x16c0;
    *piVar2 = iVar6 + 0x6c0;
    puVar4 = (undefined4 *)(param_1 + 0x1d028);
    FUN_1011b230(iVar6 + 0x1d00,*puVar4);
    FUN_10132260(*puVar4,8);
    *puVar4 = 0;
    iVar6 = *(int *)(param_1 + 0x1cf7c);
    if (iVar6 != 0) {
      FUN_100557b0(iVar6,1);
    }
    *(int *)(param_1 + 0x1cf7c) = 0;
    iVar6 = *(int *)(param_1 + 0x1cf80);
    if (iVar6 != 0) {
      FUN_100557b0(iVar6,1);
    }
    *(int *)(param_1 + 0x1cf80) = 0;
    iVar6 = *(int *)(param_1 + 0x1d024);
    if (iVar6 != 0) {
      FUN_1011adc8(*piVar2 + 0x1640,iVar6);
    }
    uVar12 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x1cf84 + uVar12 * 4);
      if (iVar6 != 0) {
        FUN_1011adc8(*piVar2 + 0x1640,iVar6);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x28);
    piVar5 = (int *)(param_1 + 0x1cf0c);
    FUN_1011acc0(*piVar2 + 0x1640,*piVar5);
    if (*piVar5 != 0) {
      FUN_1011e7a0(*(undefined4 *)(*piVar1 + 0x172c0),*piVar5,0,1);
    }
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar11 = (*extraout_w11)(uVar10);
    *piVar5 = 0;
    uVar11 = FUN_10119648(uVar11,1,(int *)(param_1 + 0x1d024));
    FUN_10119648(uVar11,0x28,param_1 + 0x1cf84);
    piVar2 = (int *)(*piVar1 + 0x49c);
    do {
      iVar6 = *piVar2;
      if (iVar6 == param_1) {
        iVar6 = 0;
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar9) {
        *piVar2 = iVar6;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    DataMemoryBarrier(2,3);
    FUN_10127718(*piVar1,*(int *)(param_1 + 0x14));
    FUN_1010d6f0(*piVar1);
    *piVar1 = 0;
    (*(code *)PTR_FUN_1016c048)(*(undefined4 *)(param_1 + 0x1d060));
    *(undefined4 *)(param_1 + 0x1d060) = 0;
  }
  return;
}

