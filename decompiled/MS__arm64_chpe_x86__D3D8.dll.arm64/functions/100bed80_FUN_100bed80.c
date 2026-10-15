/*
 * FUN_100bed80 at 100bed80
 * undefined FUN_100bed80(void)
 * Address ranges: 100bed80-100bee33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bed80(int param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  
  uVar2 = 0x8876086c;
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar3 = FUN_100ff610(param_2,&DAT_101290e0,0x10);
      puVar1 = &DAT_101290c0;
      if (iVar3 != 0) {
        puVar1 = param_2;
      }
      uVar2 = FUN_100b1ef0(*(int *)(param_1 + 0x10) + 0x58e0,puVar1,param_3);
    }
    else {
      uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar2 = (*extraout_w11)(uVar2,param_2,param_3);
    }
  }
  return uVar2;
}

