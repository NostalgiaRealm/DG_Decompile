/*
 * FUN_10037900 at 10037900
 * undefined FUN_10037900(void)
 * Address ranges: 10037900-10037957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037900(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (DAT_100c296c != 0) {
    DAT_100c296c = DAT_100c296c + -1;
  }
  piVar1 = (int *)(DAT_100c2958 + 0x18);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
                    /* WARNING: Could not recover jumptable at 0x10037954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return;
}

