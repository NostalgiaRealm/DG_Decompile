/*
 * FUN_100db7b0 at 100db7b0
 * undefined FUN_100db7b0(void)
 * Address ranges: 100db7b0-100db983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100db7b0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_50 [4];
  
  local_50[0] = param_2;
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar4 = true;
    iVar6 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar6 == 0) {
      FUN_100071d0(0);
    }
  }
  uVar7 = 0;
  if (*(char *)(param_1 + -0x62f0) == '\0') {
    if (*(int *)(param_1 + 0x5bd8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x5bd8) + 0x274);
    }
    if (iVar6 != param_2) {
      iVar6 = FUN_100dcb90(param_1 + 0xc0,local_50);
      uVar7 = 0x8007000e;
      if (iVar6 != 0) {
        FUN_100d9030(param_1 + -0x66b4,iVar6);
        uVar7 = 0;
      }
    }
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
    if (*(int *)(iVar6 + 0x4f9c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar6 + 0x4f9c) + 0x274);
    }
    if (iVar5 != param_2) {
      iVar5 = FUN_100dcb90(param_1 + 0xc0,local_50);
      uVar7 = 0x8007000e;
      if (iVar5 != 0) {
        piVar1 = (int *)(iVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (*(int *)(iVar6 + 0x4f9c) != 0) {
          FUN_100eb670(*(int *)(iVar6 + 0x4f9c));
        }
        *(int *)(iVar6 + 0x4f9c) = iVar5;
        *(undefined1 *)(iVar6 + 0xac20) = 1;
        uVar7 = 0;
      }
    }
  }
  if (bVar4) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar7;
}

