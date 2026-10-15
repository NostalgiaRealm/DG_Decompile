/*
 * FUN_1800607a0 at 1800607a0
 * ulonglong __cdecl FUN_1800607a0(uint * param_1, int param_2)
 * Address ranges: 1800607a0-1800607db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800607a0(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((DAT_18006b840 & 1) != 0) {
    LOAcquire();
    uVar3 = *param_1;
    *param_1 = uVar3 + param_2;
    LORelease();
    return (ulonglong)(uVar3 + param_2);
  }
  if (DAT_18006b840 != 0) {
    do {
      uVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return (ulonglong)(uVar3 + param_2);
  }
  uVar4 = FUN_180060920();
  return uVar4;
}

