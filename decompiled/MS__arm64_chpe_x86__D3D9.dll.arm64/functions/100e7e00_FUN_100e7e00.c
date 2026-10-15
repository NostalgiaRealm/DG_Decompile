/*
 * FUN_100e7e00 at 100e7e00
 * undefined FUN_100e7e00(void)
 * Address ranges: 100e7e00-100e7e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e7e00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  piVar1 = (int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  do {
    iVar2 = *piVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar5) {
      *piVar1 = iVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_100e79a0(param_1);
  }
  if (iVar2 == 0) {
    FUN_100d3450(iVar3 + 0x66b4);
  }
  return iVar2;
}

