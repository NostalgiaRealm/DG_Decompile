/*
 * _grGetGammaTableExt@16_native at 10005a80
 * undefined _grGetGammaTableExt@16_native(void)
 * Address ranges: 10005a80-10005b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGetGammaTableExt_16_native(uint param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int extraout_w1;
  uint uVar7;
  
  iVar6 = FUN_1000ae60();
  if (*(char *)(iVar6 + 0x3c) != '\0') {
    piVar2 = (int *)(iVar6 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    uVar7 = 0;
    if (param_1 != 0) {
      piVar3 = (int *)(iVar6 + 0xc);
      do {
        *(int *)(extraout_w1 + uVar7 * 4) = (int)*(float *)(*piVar3 + uVar7 * 0xc + 0x1310) * 0xff;
        *(int *)(param_3 + uVar7 * 4) = (int)*(float *)(*piVar3 + (uVar7 + 0x197) * 0xc) * 0xff;
        iVar6 = uVar7 * 0xc;
        iVar1 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(int *)(param_4 + iVar1) = (int)*(float *)(*piVar3 + iVar6 + 0x1318) * 0xff;
      } while (uVar7 < param_1);
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

