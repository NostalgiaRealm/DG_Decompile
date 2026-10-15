/*
 * FUN_10026090 at 10026090
 * undefined FUN_10026090(void)
 * Address ranges: 10026090-100265fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10026090(int param_1,byte param_2,byte param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  byte unaff_100002b7;
  byte unaff_100002bf;
  code *pcVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    if (*(int *)(param_1 + 0x54) == 0) {
      if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
        if (param_4 == 0) {
          return 0;
        }
        if (param_4 == *(int *)(param_1 + 0x60)) {
          return 0;
        }
      }
      piVar1 = (int *)(*(int *)(param_1 + 0x1d6c) + 0x2c);
      if (*piVar1 != 0) {
        *piVar1 = 0;
      }
      piVar1 = (int *)(*(int *)(param_1 + 0x1d70) + 0x2c);
      if (*piVar1 != 0) {
        *piVar1 = 0;
      }
      FUN_10025ea0(param_1,param_2,param_3,param_4);
      return 0;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x1d6c) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = (int *)(param_1 + 0x1d70);
    if (*(int *)(*piVar1 + 0x2c) != 0) {
      *(int *)(*piVar1 + 0x2c) = 0;
    }
    piVar2 = (int *)(*piVar1 + 0x30);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    *(byte *)(param_1 + 0x1d3f) = *(int *)(*piVar1 + 0x58) != 0 | *(byte *)(param_1 + 0x1d3f);
    *(int *)(*piVar1 + 0x58) = 0;
    uVar11 = FUN_1001fc20(param_1);
    if ((uVar11 & 1) != 0) {
      iVar12 = 0x70;
      if (*(int *)(param_1 + 0x2024) == *piVar1) {
        iVar12 = 0x50;
      }
      FUN_10072d20(*(undefined4 *)(*(int *)(param_1 + 0x1d54) + 0x1304),*(int *)(param_1 + 0x54),1,
                   *(undefined4 *)(iVar12 + param_1),0);
    }
    iVar12 = *(int *)(param_1 + 0x1d54);
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0x1d6c) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = (int *)(param_1 + 0x1d70);
    if (*(int *)(*piVar1 + 0x2c) != 0) {
      *(int *)(*piVar1 + 0x2c) = 0;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      piVar2 = (int *)(*piVar1 + 0x30);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
        if (bVar8) {
          *piVar2 = *piVar2 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      DataMemoryBarrier(2,3);
      *(byte *)(param_1 + 0x1d3f) = *(int *)(*piVar1 + 0x58) != 0 | *(byte *)(param_1 + 0x1d3f);
      *(int *)(*piVar1 + 0x58) = 0;
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x1d6c) + 0x30);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    uVar11 = FUN_1001fc20(param_1);
    pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if ((uVar11 & 1) != 0) {
      iVar13 = *(int *)(param_1 + 0x6c);
      iVar12 = 0x70;
      if (*(int *)(param_1 + 0x2024) == *piVar1) {
        iVar12 = 0x50;
      }
      uVar3 = *(undefined4 *)(iVar12 + param_1);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      iVar12 = *(int *)(*(int *)(param_1 + 0x1d54) + 0x1304);
      iVar5 = *(int *)(iVar12 + 0x8ec);
      piVar1 = (int *)(iVar12 + 0x628);
      if (iVar5 != 0) {
        iVar6 = *piVar1;
        uVar14 = *(uint *)(iVar12 + 0x8e8);
        *piVar1 = iVar6 + 1;
        if (((iVar6 == 0) && (*(int *)(iVar12 + 0x8e0) != 0)) && (*(uint *)(iVar12 + 0x958) != 0)) {
          uVar15 = 0;
          do {
            uVar10 = (*pcVar9)();
            (*extraout_w11)(uVar10);
            uVar15 = uVar15 + 1;
            param_2 = unaff_100002b7;
            param_3 = unaff_100002bf;
          } while (uVar15 < *(uint *)(iVar12 + 0x958));
        }
        uVar11 = (ulonglong)uVar14;
        auVar16 = (*pcVar9)(*(undefined4 *)(iVar12 + 0x638),iVar5,uVar11);
        (*extraout_w11_00)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_ & 0xffffffff,uVar11 & 0xffffffff
                          );
        *(int *)(iVar12 + 0x8ec) = 0;
      }
      iVar5 = *piVar1;
      *piVar1 = iVar5 + 1;
      if ((iVar5 == 0) && (*(int *)(iVar12 + 0x8e0) != 0)) {
        uVar14 = 0;
        if (*(uint *)(iVar12 + 0x958) != 0) {
          do {
            uVar10 = (*pcVar9)();
            (*extraout_w11_01)(uVar10);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(iVar12 + 0x958));
        }
      }
      uVar10 = (*pcVar9)();
      (*extraout_w11_02)(uVar10,iVar13,1,uVar4,uVar3,0);
      cVar7 = *(char *)(iVar12 + 0x620);
      *(char *)(iVar12 + 0x620) = '\0';
      iVar13 = 8;
      if (cVar7 == '\0') {
        iVar13 = 1;
      }
      iVar13 = iVar13 + *(int *)(iVar12 + 0x624);
      *(int *)(iVar12 + 0x624) = iVar13;
      if (((*(int *)(iVar12 + 0x630) <= iVar13) && (*(int *)(iVar12 + 0x8e0) != 0)) &&
         (*(int *)(iVar12 + 0x634) == 0)) {
        FUN_10071e00(iVar12 + 4,0);
      }
    }
    iVar12 = *(int *)(param_1 + 0x1d54);
  }
  iVar12 = *(int *)(iVar12 + 0x1304);
  iVar13 = *(int *)(iVar12 + 0x634) + -1;
  *(int *)(iVar12 + 0x634) = iVar13;
  if ((iVar13 == 0) && (*(int *)(iVar12 + 0x630) <= *(int *)(iVar12 + 0x624))) {
    FUN_10071e00(iVar12 + 4,0);
  }
  FUN_10025ea0(param_1,param_2,param_3,param_4);
  FUN_100968f0(param_1 + 0x20,0,8);
  return 0;
}

