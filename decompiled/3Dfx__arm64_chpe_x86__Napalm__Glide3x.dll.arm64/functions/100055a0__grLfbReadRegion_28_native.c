/*
 * _grLfbReadRegion@28_native at 100055a0
 * undefined _grLfbReadRegion@28_native(void)
 * Address ranges: 100055a0-100056c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbReadRegion_28_native
               (undefined4 param_1,uint param_2,uint param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_w10;
  int extraout_w11;
  code *extraout_w11_00;
  uint local_30;
  uint auStack_2c [3];
  
  iVar4 = FUN_1000ae60();
  uVar6 = 0;
  if (*(char *)(iVar4 + 0x3c) != '\0') {
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
    local_30 = 0;
    auStack_2c[0] = 0;
    FUN_10010e00(*(undefined4 *)(iVar4 + 0xc),param_1,&local_30,auStack_2c);
    uVar6 = extraout_w10;
    if (((param_2 < local_30 && param_3 < auStack_2c[0]) && (param_2 < param_2 + extraout_w11)) &&
       (param_3 < param_3 + param_5)) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar6 = (*extraout_w11_00)(uVar5,param_1,param_2,param_3);
      uVar6 = uVar6 & 0xff;
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
  return uVar6 != 0;
}

