/*
 * _grTexDownloadTable@8_native at 10004f00
 * undefined _grTexDownloadTable@8_native(void)
 * Address ranges: 10004f00-10004fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadTable_8_native(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_1000ae60();
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
    iVar5 = 0;
    if (0 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797)) {
      do {
        FUN_1000e4a0(iVar4,iVar5,param_1,param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x797));
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
  return;
}

