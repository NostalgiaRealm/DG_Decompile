/*
 * _grSstPerfStats@4_native at 100029c0
 * undefined _grSstPerfStats@4_native(void)
 * Address ranges: 100029c0-10002aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstPerfStats_4_native(uint *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  undefined1 auStack_40 [12];
  uint local_34;
  uint uStack_30;
  uint local_28;
  uint local_20;
  uint uStack_1c;
  
  iVar4 = FUN_1001beb0();
  if (*(char *)(iVar4 + 0x3c) == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  else {
    piVar1 = (int *)(iVar4 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5,auStack_40);
    param_1[3] = local_34 & 0xffffff;
    param_1[1] = uStack_30 & 0xffffff;
    *param_1 = local_20 & 0xffffff;
    param_1[4] = uStack_1c & 0xffffff;
    param_1[2] = local_28 & 0xffffff;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

