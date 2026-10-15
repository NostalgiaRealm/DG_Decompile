/*
 * FUN_100bddb0 at 100bddb0
 * undefined FUN_100bddb0(void)
 * Address ranges: 100bddb0-100bde1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100bddb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  
  piVar1 = (int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + -0x20);
  do {
    iVar2 = *piVar1 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar6) {
      *piVar1 = iVar2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_100176f0(param_1 + -0x4c);
  }
  if (iVar2 == 0) {
    iVar3 = 0x58e0;
    if (iVar4 != 0) {
      iVar3 = iVar4;
    }
    FUN_100b1f90(iVar3);
  }
  return iVar2;
}

