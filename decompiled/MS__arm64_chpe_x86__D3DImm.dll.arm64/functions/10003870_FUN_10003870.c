/*
 * FUN_10003870 at 10003870
 * undefined FUN_10003870(void)
 * Address ranges: 10003870-10003947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003870(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  undefined1 auStack_30 [16];
  
  if ((param_2 != (int *)0x0) && (param_3 = param_4, *(char *)(param_1 + 0x224) != '\0')) {
    FUN_10096840(auStack_30);
    piVar1 = (int *)(param_1 + 0x220);
    *param_2 = *piVar1 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x214) + *piVar1 * 4) + 4) = 0;
    puVar2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x214) + *piVar1 * 4) + 4);
    auVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar3._0_8_ & 0xffffffff,auVar3._8_8_ & 0xffffffff,*puVar2);
    *(char *)(param_1 + 0x224) = '\0';
    FUN_10096790(auStack_30);
    param_3 = 0;
  }
  return param_3;
}

