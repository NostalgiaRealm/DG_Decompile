/*
 * FUN_100271a0 at 100271a0
 * undefined FUN_100271a0(void)
 * Address ranges: 100271a0-100273f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100271a0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar4;
  uint uVar5;
  undefined4 local_50 [4];
  
  *(undefined4 *)(param_1 + 0x324) = 3;
  *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x344) = 0;
  *(undefined8 *)(param_1 + 0x33c) = 0;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined8 *)(param_1 + 0x34c) = 0;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  piVar1 = (int *)(param_1 + 0x318);
  *(undefined1 *)(param_1 + 0x38c) = 0;
  FUN_101322d0(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  iVar4 = 8;
  do {
    local_50[0] = 0xffffffff;
    FUN_10007100(piVar1,local_50);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_101322d0(*(undefined4 *)(param_1 + 0x2ec));
  *(undefined8 *)(param_1 + 0x2ec) = 0;
  *(undefined8 *)(param_1 + 0x2f4) = 0;
  FUN_101322d0(*(undefined4 *)(param_1 + 0x2fc));
  *(undefined8 *)(param_1 + 0x2fc) = 0;
  *(undefined8 *)(param_1 + 0x304) = 0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(uint *)(param_1 + 0x31c) < 9) {
    uVar5 = 0;
    do {
      if (*(int *)(*piVar1 + uVar5 * 4) != -1) {
        uVar3 = (*pcVar2)();
        (*extraout_w11_00)(uVar3,uVar5,0);
        *(undefined4 *)(*piVar1 + uVar5 * 4) = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
  }
  else {
    uVar5 = 0;
    do {
      if (*(int *)(*piVar1 + uVar5 * 4) != -1) {
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3,uVar5,0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    FUN_101322d0(*piVar1);
    *piVar1 = 0;
    iVar4 = 8;
    *(undefined4 *)(param_1 + 0x31c) = 0;
    *(undefined4 *)(param_1 + 800) = 0;
    do {
      local_50[0] = 0xffffffff;
      FUN_10007100(piVar1,local_50);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

