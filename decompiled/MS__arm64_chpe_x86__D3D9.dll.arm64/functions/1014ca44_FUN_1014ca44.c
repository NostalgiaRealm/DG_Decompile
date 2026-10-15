/*
 * FUN_1014ca44 at 1014ca44
 * undefined FUN_1014ca44(void)
 * Address ranges: 1014ca44-1014ca6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1014ca44(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x78);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
                    /* WARNING: Could not recover jumptable at 0x1014ca68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

