/*
 * FUN_1000e760 at 1000e760
 * undefined FUN_1000e760(void)
 * Address ranges: 1000e760-1000e913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e760(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
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
  
  if (*(int *)(param_1 + 0xcf00) != 0) {
    FUN_10009558(param_1 + 0xcfc8);
    uVar10 = FUN_10009428(param_1 + 0xcfb0);
    puVar1 = (uint *)(param_1 + 0xd1ec);
    uVar11 = 0;
    if (*puVar1 != 0) {
      do {
        uVar10 = FUN_10009368(uVar10,*(undefined8 *)
                                      (*(int *)(param_1 + 0xd1e4) + uVar11 * 0x40 + 0x34));
        uVar11 = uVar11 + 1;
      } while (uVar11 < *puVar1);
    }
    piVar4 = (int *)(param_1 + 0xcf00);
    *puVar1 = 0;
    puVar2 = (undefined4 *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0xd200) != 0) {
      FUN_1006a960(*(int *)(param_1 + 0xcf00),*puVar2,*(int *)(param_1 + 0xd200));
      *(undefined4 *)(param_1 + 0xd200) = 0;
    }
    pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (*(int *)(param_1 + 0xd1fc) != 0) {
      uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar9);
      *(undefined4 *)(param_1 + 0xd1fc) = 0;
    }
    FUN_1000b930(param_1);
    FUN_1006aa48(*piVar4,*puVar2,*(undefined4 *)(param_1 + 0xd1dc));
    *(undefined4 *)(param_1 + 0xd1dc) = 0;
    uVar9 = (*pcVar8)();
    auVar12 = (*extraout_w11_00)(uVar9);
    *(undefined4 *)(param_1 + 0xd1e0) = 0;
    auVar12 = FUN_1006a470(auVar12._0_8_,auVar12._8_8_,0x28,param_1 + 53000);
    FUN_1006a688(auVar12._0_8_,auVar12._8_8_,1,param_1 + 0xcfa8,param_1 + 0xcfac);
    piVar3 = (int *)(*piVar4 + 0x49c);
    do {
      iVar5 = *piVar3;
      if (iVar5 == param_1) {
        iVar5 = 0;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
      if (bVar7) {
        *piVar3 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    FUN_10071158(*piVar4,*puVar2);
    FUN_1006c900(*piVar4);
    *piVar4 = 0;
  }
  return;
}

