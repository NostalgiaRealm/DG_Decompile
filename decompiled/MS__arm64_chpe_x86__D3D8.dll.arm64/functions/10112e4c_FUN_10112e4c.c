/*
 * FUN_10112e4c at 10112e4c
 * undefined FUN_10112e4c(void)
 * Address ranges: 10112e4c-10112e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10112e4c(ulonglong param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int unaff_w28;
  
  piVar2 = *(int **)(unaff_w28 + 4);
  do {
    iVar1 = *(int *)param_1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1 & 0xffffffff,0x10);
    if (bVar4) {
      *(int *)param_1 = iVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x10112e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

