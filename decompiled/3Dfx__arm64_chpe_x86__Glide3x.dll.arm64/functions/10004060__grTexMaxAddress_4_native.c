/*
 * _grTexMaxAddress@4_native at 10004060
 * undefined _grTexMaxAddress@4_native(void)
 * Address ranges: 10004060-1000411f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grTexMaxAddress_4_native(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar4 = FUN_100093b8();
  uVar5 = FUN_10009ae0(iVar4);
  if ((uVar5 & 1) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (param_1 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797)) {
      if (*(char *)(iVar4 + 0x3c) == '\0') {
        iVar6 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x793);
      }
      else {
        piVar1 = (int *)(iVar4 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        iVar6 = *(int *)(*(int *)(iVar4 + 0xc) + param_1 * 0x4e8 + 800);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
      }
    }
    iVar6 = iVar6 + -0x10;
  }
  return iVar6;
}

