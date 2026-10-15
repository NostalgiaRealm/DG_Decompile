/*
 * FUN_100ec510 at 100ec510
 * undefined FUN_100ec510(void)
 * Address ranges: 100ec510-100ec587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ec510(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)(param_1 + 4);
  uVar5 = 0;
  if (*piVar1 != 0) {
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
    if (*(int *)(param_1 + 8) + iVar2 + -1 == 0) {
      FUN_100ec338(param_1 + -0x90);
    }
    uVar5 = FUN_100ed1e0(*(int *)(param_1 + -0x30) + 200);
  }
  return uVar5;
}

