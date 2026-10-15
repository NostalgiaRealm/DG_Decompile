/*
 * FUN_1001eb38 at 1001eb38
 * undefined FUN_1001eb38(void)
 * Address ranges: 1001eb38-1001ec4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001eb38(float param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_2 + 0x3c) != '\0') {
    piVar1 = (int *)(param_2 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (param_3 < *(int *)(*(int *)(param_2 + 0x1c) + 0x797)) {
      iVar4 = (int)(param_1 * 4.0);
      if (iVar4 < -0x20) {
        iVar4 = 0x20;
      }
      if (0x1f < iVar4) {
        iVar4 = 0x1f;
      }
      if ((float)iVar4 * 0.25 != *(float *)(*(int *)(param_2 + 0xc) + param_3 * 0x41 + 0x166)) {
        auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff);
        *(float *)(param_3 * 0x41 + *(int *)(param_2 + 0xc) + 0x166) = (float)iVar4 * 0.25;
      }
    }
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

