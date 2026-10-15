/*
 * FUN_100a0d94 at 100a0d94
 * undefined FUN_100a0d94(void)
 * Address ranges: 100a0d94-100a0dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a0d94(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int unaff_w28;
  
  piVar1 = (int *)(*(int *)(*(int *)(unaff_w28 + 4) + 4) + 0x1dc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
                    /* WARNING: Could not recover jumptable at 0x100a0dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(8);
  return;
}

