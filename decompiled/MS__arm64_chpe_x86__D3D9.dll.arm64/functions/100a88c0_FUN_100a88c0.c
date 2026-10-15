/*
 * FUN_100a88c0 at 100a88c0
 * undefined FUN_100a88c0(void)
 * Address ranges: 100a88c0-100a8a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a88c0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar11;
  undefined1 auVar12 [16];
  
  if (*(int *)(param_1 + 0x1cf00) != 0) {
    FUN_100a3698(param_1 + 0x1cfc8);
    uVar10 = FUN_100a3568(param_1 + 0x1cfb0);
    uVar11 = 0;
    puVar1 = (uint *)(param_1 + 0x1d1ec);
    if (*puVar1 != 0) {
      do {
        uVar10 = FUN_100a34a8(uVar10,*(undefined8 *)
                                      (*(int *)(param_1 + 0x1d1e4) + uVar11 * 0x40 + 0x34));
        uVar11 = uVar11 + 1;
      } while (uVar11 < *puVar1);
    }
    piVar2 = (int *)(param_1 + 0x1cf00);
    *puVar1 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0x1d200);
    if (iVar5 != 0) {
      FUN_10109890(*(int *)(param_1 + 0x1cf00),*puVar3,iVar5);
      *(int *)(param_1 + 0x1d200) = 0;
    }
    pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(int *)(param_1 + 0x1d1fc) != 0) {
      uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar9);
      *(int *)(param_1 + 0x1d1fc) = 0;
    }
    FUN_100a5c30(param_1);
    FUN_10109978(*piVar2,*puVar3,*(undefined4 *)(param_1 + 0x1d1dc));
    *(undefined4 *)(param_1 + 0x1d1dc) = 0;
    uVar9 = (*pcVar8)();
    auVar12 = (*extraout_w11_00)(uVar9);
    *(undefined4 *)(param_1 + 0x1d1e0) = 0;
    auVar12 = FUN_101092b0(auVar12._0_8_,auVar12._8_8_,0x28,param_1 + 0x1cf08);
    FUN_101094c8(auVar12._0_8_,auVar12._8_8_,1,param_1 + 0x1cfa8,param_1 + 0x1cfac);
    piVar4 = (int *)(*piVar2 + 0x49c);
    do {
      iVar5 = *piVar4;
      if (iVar5 == param_1) {
        iVar5 = 0;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar4),0x10);
      if (bVar7) {
        *piVar4 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    FUN_1010bc68(*piVar2,*puVar3);
    FUN_1010d6f0(*piVar2);
    *piVar2 = 0;
  }
  return;
}

