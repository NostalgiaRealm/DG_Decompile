/*
 * FUN_100416b0 at 100416b0
 * undefined FUN_100416b0(void)
 * Address ranges: 100416b0-10041763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100416b0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  undefined8 uVar4;
  undefined4 local_20;
  
  uVar4 = 1;
  if (*(int *)(param_1 + 0x1c) == 1) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(uVar1,*puVar3,0);
    if (iVar2 == -0x7789fde4) {
      uVar4 = 2;
    }
    else if (-1 < iVar2) {
      uVar4 = 0;
      *param_4 = local_20;
    }
  }
  return uVar4;
}

