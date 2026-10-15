/*
 * FUN_10009bd8 at 10009bd8
 * undefined FUN_10009bd8(void)
 * Address ranges: 10009bd8-10009c97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009bd8(int param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  code *extraout_w11;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    piVar1 = (int *)(param_1 + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,param_2);
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
  uRam100aaa88 = param_2[1];
  _DAT_100aaa80 = *param_2;
  uRam100aaa98 = param_2[3];
  _DAT_100aaa90 = param_2[2];
  uRam100aaaa8 = param_2[5];
  _DAT_100aaaa0 = param_2[4];
  uRam100aaab8 = param_2[7];
  _DAT_100aaab0 = param_2[6];
  uRam100aaac8 = param_2[9];
  _DAT_100aaac0 = param_2[8];
  uRam100aaad8 = param_2[0xb];
  _DAT_100aaad0 = param_2[10];
  uRam100aaae8 = param_2[0xd];
  _DAT_100aaae0 = param_2[0xc];
  return;
}

