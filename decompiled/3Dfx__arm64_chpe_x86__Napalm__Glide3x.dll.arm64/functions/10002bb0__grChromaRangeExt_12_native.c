/*
 * _grChromaRangeExt@12_native at 10002bb0
 * undefined _grChromaRangeExt@12_native(void)
 * Address ranges: 10002bb0-10002d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromaRangeExt_12_native(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  code *extraout_w11;
  
  iVar6 = FUN_1000ae60();
  if (*(char *)(iVar6 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar6 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    uVar10 = FUN_1000b5c0(iVar6);
    if (((uVar10 & 1) != 0) && (iVar7 = FUN_1000cd68(iVar6), (&DAT_100aa5c3)[iVar7 * 0x18] != '\0'))
    {
      puVar2 = (uint *)(iVar6 + 0xc);
      uVar10 = (ulonglong)*puVar2;
      uVar8 = FUN_10010da8(uVar10,param_1);
      uVar9 = FUN_10010da8(uVar10 & 0xffffffff,param_2);
      uVar11 = 0xff000000;
      iVar6 = 3;
      do {
        uVar3 = uVar11 & uVar9;
        if (uVar3 < (uVar11 & uVar8)) {
          uVar9 = uVar9 & (uVar11 ^ 0xffffffff) | uVar11 & uVar8;
          uVar8 = uVar8 & (uVar11 ^ 0xffffffff) | uVar3;
        }
        uVar11 = uVar11 >> 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if ((uVar8 != *(uint *)((int)uVar10 + 0x15d)) || (uVar9 != *(uint *)((int)uVar10 + 0x161))) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar10 & 0xffffffff,uVar8,uVar9);
        *(uint *)(*puVar2 + 0x15d) = uVar8;
        *(uint *)(*puVar2 + 0x161) = uVar9;
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

