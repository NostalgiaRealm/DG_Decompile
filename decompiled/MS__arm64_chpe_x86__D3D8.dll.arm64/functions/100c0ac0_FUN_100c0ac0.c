/*
 * FUN_100c0ac0 at 100c0ac0
 * undefined FUN_100c0ac0(void)
 * Address ranges: 100c0ac0-100c0afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c0ac0(int param_1)

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
  uVar4 = FUN_100c17a0(*(int *)(param_1 + -0x34) + 200);
  return uVar4;
}

