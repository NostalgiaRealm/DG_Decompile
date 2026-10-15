/*
 * FUN_1001af90 at 1001af90
 * undefined FUN_1001af90(void)
 * Address ranges: 1001af90-1001b26b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001af90(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  uint uVar10;
  
  if (*(int *)(param_1 + 0xcf00) != 0) {
    FUN_10017ef8(param_1 + 0xd02c);
    puVar1 = (uint *)(param_1 + 0xd06c);
    uVar10 = 0;
    if (*puVar1 != 0) {
      do {
        iVar4 = *(int *)(param_1 + 0xd064) + uVar10 * 0x50;
        FUN_10017dc8(param_1 + 0xd064,*(undefined8 *)(iVar4 + 0x40),*(undefined4 *)(iVar4 + 0x48));
        uVar10 = uVar10 + 1;
      } while (uVar10 < *puVar1);
    }
    *puVar1 = 0;
    FUN_10090418(*(int *)(param_1 + 0xcf04) + 0x11c0);
    FUN_1007cfb0(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304) + 4,0);
    FUN_10072660(*(undefined4 *)(param_1 + 0xcf00),*(undefined4 *)(param_1 + 0xd044));
    iVar4 = *(int *)(param_1 + 0xd048);
    *(undefined4 *)(param_1 + 0xd044) = 0;
    if (iVar4 != -1) {
      iVar5 = *(int *)(*(int *)(param_1 + 0xcf04) + 0x15d8);
      iVar2 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_100ba0a0)(iVar2);
      FUN_10072ec8(iVar5,iVar4,1);
      (*(code *)PTR_FUN_100ba0f0)(iVar2);
    }
    FUN_10072660(*(undefined4 *)(param_1 + 0xcf00),*(undefined4 *)(param_1 + 53000));
    iVar4 = *(int *)(param_1 + 0xcf00) + *(int *)(param_1 + 0x14) * 0x16c0;
    *(int *)(param_1 + 0xcf04) = iVar4 + 0x6c0;
    *(undefined4 *)(param_1 + 53000) = 0;
    FUN_10076c38(iVar4 + 0x1d00,*(undefined4 *)(param_1 + 0xd028));
    FUN_10091460(*(undefined4 *)(param_1 + 0xd028),8);
    *(undefined4 *)(param_1 + 0xd028) = 0;
    iVar4 = *(int *)(param_1 + 0xcf7c);
    if (iVar4 != 0) {
      FUN_100770d0(iVar4);
      FUN_10091460(iVar4,0x78);
    }
    iVar4 = *(int *)(param_1 + 0xcf80);
    *(undefined4 *)(param_1 + 0xcf7c) = 0;
    if (iVar4 != 0) {
      FUN_100770d0(iVar4);
      FUN_10091460(iVar4,0x78);
    }
    *(undefined4 *)(param_1 + 0xcf80) = 0;
    if (*(int *)(param_1 + 0xd024) != 0) {
      FUN_100767d0(*(int *)(param_1 + 0xcf04) + 0x1640,*(int *)(param_1 + 0xd024));
    }
    uVar10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xcf84 + uVar10 * 4);
      if (iVar4 != 0) {
        FUN_100767d0(*(int *)(param_1 + 0xcf04) + 0x1640,iVar4);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x28);
    FUN_100766c8(*(int *)(param_1 + 0xcf04) + 0x1640,*(undefined4 *)(param_1 + 0xcf0c));
    if (*(int *)(param_1 + 0xcf0c) != 0) {
      FUN_10078440(*(undefined4 *)(*(int *)(param_1 + 0xcf00) + 0x172c0),*(int *)(param_1 + 0xcf0c),
                   0,1);
    }
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar9 = (*extraout_w11)(uVar8);
    *(undefined4 *)(param_1 + 0xcf0c) = 0;
    uVar9 = FUN_100727e8(uVar9,1,param_1 + 0xd024);
    FUN_100727e8(uVar9,0x28,param_1 + 0xcf84);
    piVar3 = (int *)(*(int *)(param_1 + 0xcf00) + 0x49c);
    do {
      iVar4 = *piVar3;
      if (iVar4 == param_1) {
        iVar4 = 0;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
      if (bVar7) {
        *piVar3 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    FUN_1007b288(*(undefined4 *)(param_1 + 0xcf00),*(int *)(param_1 + 0x14));
    FUN_1006c900(*(undefined4 *)(param_1 + 0xcf00));
    *(undefined4 *)(param_1 + 0xcf00) = 0;
    (*(code *)PTR_FUN_100ba06c)(*(undefined4 *)(param_1 + 0xd060));
    *(undefined4 *)(param_1 + 0xd060) = 0;
  }
  return;
}

