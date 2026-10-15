/*
 * FUN_101168e4 at 101168e4
 * undefined FUN_101168e4(void)
 * Address ranges: 101168e4-10116913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101168e4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int unaff_w28;
  
  piVar1 = (int *)(*(int *)(unaff_w28 + 4) + 0xe0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
                    /* WARNING: Could not recover jumptable at 0x10116910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

