/*
 * FUN_1800d48f8 at 1800d48f8
 * undefined FUN_1800d48f8(void)
 * Address ranges: 1800d48f8-1800d4997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800d48f8(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_6 == 1) {
    uVar2 = (**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar1 = func_0x000180222cb8(uVar2,s_disable_18023ae40);
    if (iVar1 == 0) {
      *param_5 = 0;
    }
    else {
      iVar1 = func_0x000180222cb8(uVar2,s_enable_18023ae34);
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        iVar1 = func_0x000180222cb8(uVar2,s_enablebreak_18023ae50);
        if (iVar1 != 0) goto LAB_1800d4988;
        uVar3 = 2;
      }
      *param_5 = uVar3;
    }
    uVar2 = 1;
  }
  else {
LAB_1800d4988:
    uVar2 = 0;
  }
  return uVar2;
}

