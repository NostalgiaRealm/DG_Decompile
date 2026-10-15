/*
 * FUN_1002d360 at 1002d360
 * undefined FUN_1002d360(void)
 * Address ranges: 1002d360-1002d4fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1002d360(int param_1,uint param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = 0;
  switch(param_3) {
  case 0:
    uVar7 = 0;
    break;
  case 1:
    uVar7 = 1;
    break;
  case 2:
    uVar7 = 2;
    break;
  default:
    goto switchD_1002d3b4_default;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  uVar5 = (*pcVar3)();
  iVar6 = (*extraout_w11_00)(uVar5,uVar7);
  piVar1 = (int *)(iVar6 + ((param_2 & 1) + 0x19) * 4);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    uVar7 = 0;
  }
  else {
    *piVar1 = iVar2 + -1;
    if ((*(int *)(iVar6 + 100) == 0) && (*(int *)(iVar6 + 0x68) == 0)) {
      bVar4 = FUN_1002c068(*(undefined4 *)(param_1 + 0x315c),uVar7,param_4,param_5,param_6,param_7,
                           param_8,param_9);
      *(byte *)(iVar6 + 0x82) = *(byte *)(iVar6 + 0x82) & 0xfc | bVar4;
    }
    uVar7 = 1;
  }
  (*pcVar3)();
  (*extraout_w11_01)(param_1);
switchD_1002d3b4_default:
  return uVar7;
}

