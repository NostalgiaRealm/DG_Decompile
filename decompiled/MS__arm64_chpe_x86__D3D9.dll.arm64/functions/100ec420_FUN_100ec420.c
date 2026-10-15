/*
 * FUN_100ec420 at 100ec420
 * undefined FUN_100ec420(void)
 * Address ranges: 100ec420-100ec45b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ec420(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_1 + 4);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  uVar4 = FUN_100ed0a0(*(int *)(param_1 + -0x30) + 200);
  return uVar4;
}

