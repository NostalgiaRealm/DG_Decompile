/*
 * FUN_10147f24 at 10147f24
 * undefined FUN_10147f24(void)
 * Address ranges: 10147f24-10147f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10147f24(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int unaff_w28;
  
  piVar3 = *(int **)(unaff_w28 + 4);
  piVar1 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar5) {
      *piVar1 = iVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x10147f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

