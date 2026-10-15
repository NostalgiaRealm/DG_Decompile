/*
 * FUN_100db660 at 100db660
 * undefined FUN_100db660(void)
 * Address ranges: 100db660-100db79f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100db660(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar4 = true;
    iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar5 == 0) {
      FUN_100071d0(0);
    }
  }
  if (*(char *)(param_1 + -0x62f0) == '\0') {
    FUN_100d9030(param_1 + -0x66b4,param_2);
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DataMemoryBarrier(2,3);
    }
    if (*(int *)(iVar5 + 0x4f9c) != 0) {
      FUN_100eb670(*(int *)(iVar5 + 0x4f9c));
    }
    *(int *)(iVar5 + 0x4f9c) = param_2;
    *(undefined1 *)(iVar5 + 0xac20) = 1;
  }
  if (bVar4) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

