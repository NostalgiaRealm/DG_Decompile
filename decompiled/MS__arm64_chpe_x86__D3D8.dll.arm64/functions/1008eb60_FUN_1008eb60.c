/*
 * FUN_1008eb60 at 1008eb60
 * undefined FUN_1008eb60(void)
 * Address ranges: 1008eb60-1008ec4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008eb60(int param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  ulonglong uVar4;
  code *extraout_w11;
  uint uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((*(int *)(param_1 + -0x60) != 0) && (*(char *)(param_1 + -0x4c) != param_2)) {
    *(char *)(param_1 + -0x4c) = param_2;
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar5 = 0;
    if (*(uint *)(param_1 + -100) != 0) {
      iVar1 = param_1 + -0x88;
      do {
        uVar4 = 0;
        local_50 = 0;
        local_48 = FUN_100ae4d0(iVar1,*(undefined4 *)(param_1 + -0x74),0);
        uVar3 = FUN_100ae528(iVar1,*(undefined4 *)(param_1 + -0x70),uVar4 & 0xffffffff);
        local_44 = (undefined4)uVar3;
        (*pcVar2)(uVar3,*(int *)(param_1 + -0x5c) * uVar5);
        (*extraout_w11)(iVar1,extraout_x1,&local_50);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + -100));
    }
  }
  return;
}

