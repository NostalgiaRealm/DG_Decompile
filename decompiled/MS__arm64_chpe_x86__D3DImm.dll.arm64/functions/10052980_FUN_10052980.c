/*
 * FUN_10052980 at 10052980
 * undefined FUN_10052980(void)
 * Address ranges: 10052980-10052b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10052980(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  piVar1 = (int *)(param_1 + (param_2 + 0x52c) * 4);
  if (*piVar1 == param_3) {
    return;
  }
  switch(param_2) {
  case 1:
    *(int *)(param_1 + 0x1530) = param_3;
    puVar4 = (undefined1 *)(param_1 + 0x1755);
    break;
  case 2:
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,0x8b,param_3);
    piVar3 = (int *)(param_1 + 0x4bc);
    goto LAB_10052b24;
  case 3:
    if (*(int *)(*(int *)(param_1 + 0xa58) + 0x30) != 1) {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_00)(uVar2,0xb,param_3 == 1);
      *(uint *)(param_1 + 700) = (uint)(param_3 == 1);
    }
    goto switchD_100529c8_default;
  case 4:
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_01)(uVar2,0x8c,param_3);
    piVar3 = (int *)(param_1 + 0x4c0);
    goto LAB_10052b24;
  case 5:
    puVar4 = (undefined1 *)(param_1 + 0xa86);
    break;
  case 6:
    puVar4 = (undefined1 *)(param_1 + 0xa87);
    break;
  case 7:
    puVar4 = (undefined1 *)(param_1 + 0xa88);
    break;
  case 8:
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_02)(uVar2,0x8d,param_3);
    piVar3 = (int *)(param_1 + 0x4c4);
LAB_10052b24:
    *piVar3 = param_3;
  default:
    goto switchD_100529c8_default;
  }
  *puVar4 = 1;
switchD_100529c8_default:
  *piVar1 = param_3;
  return;
}

