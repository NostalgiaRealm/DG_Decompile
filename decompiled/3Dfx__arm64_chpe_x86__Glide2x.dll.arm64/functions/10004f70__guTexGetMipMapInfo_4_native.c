/*
 * _guTexGetMipMapInfo@4_native at 10004f70
 * undefined _guTexGetMipMapInfo@4_native(void)
 * Address ranges: 10004f70-10005003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _guTexGetMipMapInfo_4_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint extraout_w12;
  
  iVar4 = FUN_1001ba50();
  iVar5 = 0;
  if (*(char *)(iVar4 + 0x3c) != '\0') {
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
    if ((*(int *)(iVar4 + 0x5c) != 0 && extraout_w12 != 0xffffffff) &&
       (extraout_w12 < *(uint *)(iVar4 + 0x60))) {
      iVar5 = *(int *)(iVar4 + 0x5c) + extraout_w12 * 0xc4;
    }
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
  return iVar5;
}

