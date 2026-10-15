/*
 * _guTexGetCurrentMipMap@4_native at 10004ed0
 * undefined _guTexGetCurrentMipMap@4_native(void)
 * Address ranges: 10004ed0-10004f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _guTexGetCurrentMipMap_4_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_w12;
  
  iVar4 = FUN_1001ba50();
  uVar5 = 0xffffffff;
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
    if ((*(int *)(iVar4 + 0x5c) != 0) && (extraout_w12 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797)))
    {
      uVar5 = *(undefined4 *)(iVar4 + extraout_w12 * 4 + 0x70);
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
  return uVar5;
}

