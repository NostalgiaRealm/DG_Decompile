/*
 * FUN_100b1f90 at 100b1f90
 * undefined FUN_100b1f90(void)
 * Address ranges: 100b1f90-100b1fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b1f90(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(int *)(param_1 + 8) + iVar2 == 0) {
    FUN_100b1870(param_1 + -0x58e0);
    FUN_100b11f0(param_1 + -0x58e0);
    FUN_100fed20(*(undefined4 *)(param_1 + -0x58e4));
  }
  return iVar2;
}

