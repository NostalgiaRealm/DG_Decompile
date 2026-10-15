/*
 * _grEnable@4_native at 10003c50
 * undefined _grEnable@4_native(void)
 * Address ranges: 10003c50-10003e1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grEnable_4_native(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  
  iVar5 = FUN_1000ae60();
  uVar8 = FUN_1000af10(iVar5);
  if ((uVar8 & 1) != 0) {
    switch(param_1) {
    case 4:
      *(undefined1 *)(iVar5 + 0x58) = 1;
      break;
    case 6:
      iVar6 = FUN_1000cd68(iVar5);
      if (((&DAT_100aa5c1)[iVar6 * 0x18] != '\0') && (piVar2 = (int *)(iVar5 + 0xc), *piVar2 != 0))
      {
        piVar1 = (int *)(iVar5 + 0x1c);
        iVar5 = 0;
        if (0 < *(int *)(*piVar1 + 0x797)) {
          do {
            *(undefined4 *)(*piVar2 + iVar5 * 0x4e8 + 0x458) = 0;
            iVar6 = iVar5 * 0x4e8;
            iVar5 = iVar5 + 1;
            *(int *)(*piVar2 + iVar6 + 0x45c) =
                 *(int *)(*piVar1 + 0x797) * *(int *)(*piVar1 + 0x793);
          } while (iVar5 < *(int *)(*piVar1 + 0x797));
        }
      }
      break;
    case 7:
      if (*(char *)(iVar5 + 0x3c) != '\0') {
        piVar2 = (int *)(iVar5 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        uVar8 = FUN_1000b5c0(iVar5);
        if (((((uVar8 & 1) != 0) && (uVar8 = FUN_1000af10(iVar5), (uVar8 & 1) != 0)) &&
            (iVar6 = FUN_1000cd68(iVar5), iVar6 == 4)) &&
           (*(char *)(*(int *)(iVar5 + 0xc) + 0xf0) == '\0')) {
          uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(uVar7,1);
          *(undefined1 *)(*(int *)(iVar5 + 0xc) + 0xf0) = 1;
        }
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar2),0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
      }
    }
  }
  return;
}

