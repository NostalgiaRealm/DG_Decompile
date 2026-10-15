/*
 * FUN_1004e440 at 1004e440
 * undefined FUN_1004e440(void)
 * Address ranges: 1004e440-1004e83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004e440(int param_1,byte param_2,byte param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  
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
      piVar1 = (int *)(*(int *)(param_1 + 0xd9d0) + 0x2c);
      if (*piVar1 != 0) {
        *piVar1 = 0;
      }
      piVar1 = (int *)(*(int *)(param_1 + 0xd9d4) + 0x2c);
      if (*piVar1 != 0) {
        *piVar1 = 0;
      }
      FUN_1004e260(param_1,param_2,param_3,param_4);
      return 0;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xd9d0) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xd9d4) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xd9d4) + 0x30);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    piVar1 = (int *)(*(int *)(param_1 + 0xd9d4) + 0x58);
    *(byte *)(param_1 + 0xd97f) = *piVar1 != 0 | *(byte *)(param_1 + 0xd97f);
    *piVar1 = 0;
    uVar10 = FUN_10048138(param_1);
    if ((uVar10 & 1) != 0) {
      iVar11 = 0x70;
      if (*(int *)(param_1 + 0xdc98) == *(int *)(param_1 + 0xd9d4)) {
        iVar11 = 0x50;
      }
      FUN_100e3940(*(undefined4 *)(*(int *)(param_1 + 0xd9b8) + 0x1304),*(int *)(param_1 + 0x54),1,
                   *(undefined4 *)(iVar11 + param_1),0);
    }
    iVar11 = *(int *)(param_1 + 0xd9b8);
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0xd9d0) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xd9d4) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0xd9d4) + 0x30);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      piVar1 = (int *)(*(int *)(param_1 + 0xd9d4) + 0x58);
      *(byte *)(param_1 + 0xd97f) = *piVar1 != 0 | *(byte *)(param_1 + 0xd97f);
      *piVar1 = 0;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xd9d0) + 0x30);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    uVar10 = FUN_10048138(param_1);
    pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if ((uVar10 & 1) != 0) {
      iVar12 = *(int *)(param_1 + 0x6c);
      iVar11 = 0x70;
      if (*(int *)(param_1 + 0xdc98) == *(int *)(param_1 + 0xd9d4)) {
        iVar11 = 0x50;
      }
      uVar2 = *(undefined4 *)(iVar11 + param_1);
      uVar3 = *(undefined4 *)(param_1 + 0x68);
      iVar11 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304);
      iVar4 = *(int *)(iVar11 + 0x8ec);
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(iVar11 + 0x8e8);
        FUN_100e09c8(iVar11);
        uVar8 = (*pcVar7)();
        (*extraout_w11)(uVar8,iVar4,uVar9);
        *(int *)(iVar11 + 0x8ec) = 0;
      }
      FUN_100e09c8(iVar11);
      uVar9 = (*pcVar7)();
      (*extraout_w11_00)(uVar9,iVar12,1,uVar3,uVar2,0);
      cVar5 = *(char *)(iVar11 + 0x620);
      *(char *)(iVar11 + 0x620) = '\0';
      iVar12 = 8;
      if (cVar5 == '\0') {
        iVar12 = 1;
      }
      iVar12 = iVar12 + *(int *)(iVar11 + 0x624);
      *(int *)(iVar11 + 0x624) = iVar12;
      if (((*(int *)(iVar11 + 0x630) <= iVar12) && (*(int *)(iVar11 + 0x8e0) != 0)) &&
         (*(int *)(iVar11 + 0x634) == 0)) {
        FUN_100e1060(iVar11 + 4,0);
      }
    }
    iVar11 = *(int *)(param_1 + 0xd9b8);
  }
  iVar11 = *(int *)(iVar11 + 0x1304);
  iVar12 = *(int *)(iVar11 + 0x634) + -1;
  *(int *)(iVar11 + 0x634) = iVar12;
  if ((iVar12 == 0) && (*(int *)(iVar11 + 0x630) <= *(int *)(iVar11 + 0x624))) {
    FUN_100e1060(iVar11 + 4,0);
  }
  FUN_1004e260(param_1,param_2,param_3,param_4);
  FUN_10121220(param_1 + 0x20,0,8);
  return 0;
}

