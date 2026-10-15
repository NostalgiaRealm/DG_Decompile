/*
 * FUN_1001e8d0 at 1001e8d0
 * undefined FUN_1001e8d0(void)
 * Address ranges: 1001e8d0-1001eaa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1001e8d0(int param_1,uint param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  int *piVar1;
  code *pcVar2;
  ulonglong uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  switch(param_3) {
  case 0:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 1;
    break;
  case 2:
    iVar4 = 2;
    break;
  default:
    goto switchD_1001e928_caseD_3;
  case 6:
    piVar1 = (int *)(*(int *)(param_1 + 0x365c) + 0x128);
    goto LAB_1001e968;
  case 7:
    piVar1 = (int *)(*(int *)(param_1 + 0x365c) + 300);
LAB_1001e968:
    iVar4 = *piVar1;
    *piVar1 = -1;
    if (iVar4 == -1) {
      return 0;
    }
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  uVar3 = FUN_1001d430(param_1,param_2 & 1,iVar4,param_4,param_5,param_6,param_7,param_8,param_9);
  if ((uVar3 & 1) != 0) {
    if (2 < iVar4) {
      FUN_1001cc28(*(undefined4 *)(param_1 + 0x365c),iVar4,*(undefined4 *)(param_1 + 0x2b5c),
                   *(undefined4 *)(param_1 + 0x2b60),*(undefined4 *)(param_1 + 0x2b64),1);
      FUN_1001cc28(*(undefined4 *)(param_1 + 0x365c),iVar4,*(undefined4 *)(param_1 + 0x2b70),
                   *(undefined4 *)(param_1 + 0x2b74),*(undefined4 *)(param_1 + 0x2b78),1);
    }
    uVar5 = 1;
  }
  (*pcVar2)();
  (*extraout_w11_00)(param_1);
switchD_1001e928_caseD_3:
  return uVar5;
}

