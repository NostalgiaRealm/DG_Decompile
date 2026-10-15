/*
 * FUN_1005f8f0 at 1005f8f0
 * undefined FUN_1005f8f0(void)
 * Address ranges: 1005f8f0-1005f927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1005f8f0(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  do {
    lVar5 = *plVar1;
    do {
      lVar6 = *plVar1;
      lVar2 = lVar6;
      if (lVar6 == lVar5) {
        lVar2 = lVar5 + 1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(plVar1),0x10);
      if (bVar4) {
        *plVar1 = lVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    DataMemoryBarrier(2,3);
  } while (lVar6 != lVar5);
  return lVar5 + 1;
}

