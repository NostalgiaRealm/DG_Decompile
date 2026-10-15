/*
 * _grVertexLayout@12_native at 100014f0
 * undefined _grVertexLayout@12_native(void)
 * Address ranges: 100014f0-10001643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grVertexLayout_12_native(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_w11;
  code *extraout_w11_00;
  int iVar6;
  
  iVar4 = FUN_100093b8();
  switch(extraout_w11) {
  case 1:
    iVar6 = 0;
    break;
  case 2:
    iVar6 = 1;
    break;
  case 3:
    iVar6 = 2;
    break;
  case 4:
    iVar6 = 6;
    break;
  case 5:
    iVar6 = 7;
    break;
  default:
    goto switchD_1000152c_caseD_6;
  case 0x10:
    iVar6 = 4;
    break;
  case 0x20:
    iVar6 = 3;
    break;
  case 0x30:
    iVar6 = 5;
    break;
  case 0x40:
    iVar6 = 8;
    break;
  case 0x41:
    iVar6 = 10;
    break;
  case 0x42:
    iVar6 = 0xc;
    break;
  case 0x50:
    iVar6 = 9;
    break;
  case 0x51:
    iVar6 = 0xb;
    break;
  case 0x52:
    iVar6 = 0xd;
  }
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
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar5,iVar6,param_2,param_3);
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
  *(undefined4 *)(&DAT_100a28b0 + iVar6 * 4) = param_2;
  *(undefined4 *)(iVar6 * 4 + 0x100a28e8) = param_3;
switchD_1000152c_caseD_6:
  return;
}

