/*
 * FUN_1000a650 at 1000a650
 * undefined FUN_1000a650(void)
 * Address ranges: 1000a650-1000a78b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a650(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  
  uVar6 = FUN_1000af10(param_1);
  if ((uVar6 & 1) != 0) {
    switch(param_2) {
    case 4:
      *(undefined1 *)(param_1 + 0x58) = 0;
      break;
    case 6:
      iVar4 = FUN_1000cd68(param_1);
      if ((&DAT_100aa5c1)[iVar4 * 0x18] != '\0') {
        FUN_1000b528(param_1);
      }
      break;
    case 7:
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
        uVar6 = FUN_1000b5c0(param_1);
        if (((((uVar6 & 1) != 0) && (uVar6 = FUN_1000af10(param_1), (uVar6 & 1) != 0)) &&
            (iVar4 = FUN_1000cd68(param_1), iVar4 == 4)) &&
           (*(char *)(*(int *)(param_1 + 0xc) + 0xf0) != '\0')) {
          uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(uVar5,0);
          *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xf0) = 0;
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
    }
  }
  return;
}

