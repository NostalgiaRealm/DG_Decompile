/*
 * FUN_100e7260 at 100e7260
 * undefined FUN_100e7260(void)
 * Address ranges: 100e7260-100e73b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e7260(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  code *extraout_w11;
  
  piVar1 = param_1 + 4;
  piVar2 = param_1 + 1;
  iVar4 = *piVar1;
  do {
    iVar3 = *piVar2 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
    if (bVar6) {
      *piVar2 = iVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (param_1[2] + iVar3 == 0) {
    if (((*(uint *)(*piVar1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
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
    FUN_100d32f0(*piVar1,param_1);
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar8);
    *param_1 = &PTR_FUN_1015fb5c;
    param_1[7] = 0;
    FUN_10132260(param_1,0x2c);
    if (bVar6) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  if (iVar3 == 0) {
    FUN_100d3450(iVar4 + 0x66b4);
  }
  return iVar3;
}

