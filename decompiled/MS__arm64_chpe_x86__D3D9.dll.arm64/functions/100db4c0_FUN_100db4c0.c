/*
 * FUN_100db4c0 at 100db4c0
 * undefined FUN_100db4c0(void)
 * Address ranges: 100db4c0-100db657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100db4c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_50 [16];
  
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
  FUN_10157b40(auStack_50);
  iVar6 = FUN_100e5650(param_1 + 100,param_2);
  if (*(char *)(param_1 + -0x62f0) == '\0') {
    cVar5 = FUN_100da390(param_1 + -0x66b4,param_2,iVar6);
    uVar7 = 0x8876086c;
    if (cVar5 != '\0') {
      uVar7 = 0;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
    if (param_2 == 0) {
      if (*(int *)(iVar2 + 0x4f98) != 0) {
        FUN_100ec110(*(int *)(iVar2 + 0x4f98));
      }
      *(undefined4 *)(iVar2 + 0x4f98) = 0;
    }
    else {
      uVar7 = 0x8876086c;
      if (iVar6 == 0) goto LAB_100db610;
      piVar1 = (int *)(param_2 + 8);
      do {
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      if (*(int *)(iVar2 + 0x4f98) != 0) {
        FUN_100ec110(*(int *)(iVar2 + 0x4f98));
      }
      *(int *)(iVar2 + 0x4f98) = param_2;
    }
    *(undefined1 *)(iVar2 + 0xac1d) = 1;
    uVar7 = 0;
  }
LAB_100db610:
  FUN_10157a90(auStack_50);
  if (bVar4) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar7;
}

