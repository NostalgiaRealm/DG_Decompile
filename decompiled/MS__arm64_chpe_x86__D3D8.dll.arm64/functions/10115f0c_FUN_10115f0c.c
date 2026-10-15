/*
 * FUN_10115f0c at 10115f0c
 * undefined FUN_10115f0c(void)
 * Address ranges: 10115f0c-10115f33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10115f0c(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x54);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
                    /* WARNING: Could not recover jumptable at 0x10115f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

