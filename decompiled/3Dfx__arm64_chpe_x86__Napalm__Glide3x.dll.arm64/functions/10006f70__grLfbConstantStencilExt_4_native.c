/*
 * _grLfbConstantStencilExt@4_native at 10006f70
 * undefined _grLfbConstantStencilExt@4_native(void)
 * Address ranges: 10006f70-10006ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantStencilExt_4_native(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  
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
    uVar5 = FUN_1000b5c0(iVar4);
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_1000af10(iVar4), (uVar5 & 1) != 0)) {
      FUN_1000cd68(iVar4);
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

