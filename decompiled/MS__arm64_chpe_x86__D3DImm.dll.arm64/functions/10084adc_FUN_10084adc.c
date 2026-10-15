/*
 * FUN_10084adc at 10084adc
 * undefined FUN_10084adc(void)
 * Address ranges: 10084adc-10084b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10084adc(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x1c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
                    /* WARNING: Could not recover jumptable at 0x10084b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}

