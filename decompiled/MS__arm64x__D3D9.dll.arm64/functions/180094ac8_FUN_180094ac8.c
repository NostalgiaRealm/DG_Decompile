/*
 * FUN_180094ac8 at 180094ac8
 * undefined FUN_180094ac8(void)
 * Address ranges: 180094ac8-180094ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180094ac8(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  uint *puVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  ulonglong local_28;
  
  if ((*(int *)(param_1 + -0xd4) - 0x24U & 0xfffffffa) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x2c) +
                     (ulonglong)(uint)(param_2 + *(int *)(param_1 + -0xc4) * param_3) * 0x20);
    local_30 = (ulonglong)*puVar1;
    local_28 = (ulonglong)(puVar1[1] + *puVar1);
    (**(code **)(**(longlong **)(param_1 + -0x3c) + 0x48))
              (*(longlong **)(param_1 + -0x3c),0,&local_30);
  }
  local_40 = 0;
  local_38 = FUN_1800a2b50(param_1 + -0x100,*(undefined4 *)(param_1 + -0xdc),param_2);
  local_34 = FUN_1800a2b98(param_1 + -0x100,*(undefined4 *)(param_1 + -0xd8));
  (**(code **)(*(longlong *)(param_1 + -0x100) + 0x18))
            (param_1 + -0x100,param_2 + *(int *)(param_1 + -0xc4) * param_3,&local_40);
  FUN_180091fa8(param_1 + -0x100,param_1 + -0xa0,param_1 + -0x50,param_4,param_5,param_2,param_3,
                &local_40);
  return 0;
}

