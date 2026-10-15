/*
 * FUN_180104150 at 180104150
 * undefined FUN_180104150(void)
 * Address ranges: 180104150-1801041a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180104150(uint *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (((ulonglong)param_1 & 3) != 0) {
    uVar4 = FUN_1801043a0(param_1,2,param_2,0,0);
    return uVar4;
  }
  iVar5 = (int)param_2;
  if ((DAT_180246160 & 1) != 0) {
    LOAcquire();
    uVar3 = *param_1;
    *param_1 = uVar3 + iVar5;
    LORelease();
    return (ulonglong)(uVar3 + iVar5);
  }
  if (DAT_180246160 != 0) {
    do {
      uVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3 + iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return (ulonglong)(uVar3 + iVar5);
  }
  uVar4 = FUN_180104350();
  return uVar4;
}

