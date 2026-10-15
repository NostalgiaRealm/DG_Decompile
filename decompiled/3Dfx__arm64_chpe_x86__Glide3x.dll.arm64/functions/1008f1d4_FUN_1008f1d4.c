/*
 * FUN_1008f1d4 at 1008f1d4
 * undefined FUN_1008f1d4(void)
 * Address ranges: 1008f1d4-1008f203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f1d4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int unaff_w28;
  
  piVar1 = (int *)(*(int *)(unaff_w28 + 4) + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
                    /* WARNING: Could not recover jumptable at 0x1008f200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

