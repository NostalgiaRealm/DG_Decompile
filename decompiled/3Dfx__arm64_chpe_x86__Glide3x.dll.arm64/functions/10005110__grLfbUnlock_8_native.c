/*
 * _grLfbUnlock@8_native at 10005110
 * undefined _grLfbUnlock@8_native(void)
 * Address ranges: 10005110-100051fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbUnlock_8_native(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  undefined4 local_30;
  undefined4 auStack_2c [3];
  
  iVar5 = FUN_100093b8();
  bVar3 = false;
  if (*(char *)(iVar5 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar5 + 0x38);
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    local_30 = 0;
    auStack_2c[0] = 0;
    FUN_1000ee78(*(undefined4 *)(iVar5 + 0xc),param_2,auStack_2c,&local_30);
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(uVar6,param_1,param_2,1,0,0,auStack_2c[0],local_30,0);
    bVar3 = cVar4 != '\0';
    do {
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar2) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return bVar3;
}

