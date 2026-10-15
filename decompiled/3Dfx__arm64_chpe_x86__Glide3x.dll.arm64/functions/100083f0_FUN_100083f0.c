/*
 * FUN_100083f0 at 100083f0
 * undefined FUN_100083f0(void)
 * Address ranges: 100083f0-100084af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100083f0(int param_1,undefined8 *param_2)

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
  uRam100a28b8 = param_2[1];
  _DAT_100a28b0 = *param_2;
  uRam100a28c8 = param_2[3];
  _DAT_100a28c0 = param_2[2];
  uRam100a28d8 = param_2[5];
  _DAT_100a28d0 = param_2[4];
  uRam100a28e8 = param_2[7];
  _DAT_100a28e0 = param_2[6];
  uRam100a28f8 = param_2[9];
  _DAT_100a28f0 = param_2[8];
  uRam100a2908 = param_2[0xb];
  _DAT_100a2900 = param_2[10];
  uRam100a2918 = param_2[0xd];
  _DAT_100a2910 = param_2[0xc];
  return;
}

