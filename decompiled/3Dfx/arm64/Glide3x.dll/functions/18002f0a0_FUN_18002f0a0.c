/*
 * FUN_18002f0a0 at 18002f0a0
 * undefined8 __cdecl FUN_18002f0a0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, byte param_5, undefined8 * param_6, undefined8 param_7)
 * Address ranges: 18002f0a0-18002f19f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18002f0a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5
             ,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  local_50 = 0x100000001;
  local_30 = 0;
  local_48 = 0x35;
  if ((*(int *)(param_1 + 0x10) != 5 & param_5) == 0) {
    local_48 = 0x2c;
  }
  local_40 = 0;
  uStack_38 = 0x40;
  local_58 = param_2;
  uStack_54 = param_3;
  uStack_44 = param_4;
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 200),&local_58,0,param_6);
  if (-1 < iVar1) {
    local_64 = 0;
    local_60 = 0;
    local_70 = 0x37;
    if ((*(int *)(param_1 + 0x10) != 5 & param_5) == 0) {
      local_70 = 0x2d;
    }
    local_6c = 5;
    iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x50))
                      ((longlong *)**(undefined8 **)(param_1 + 200),*param_6,&local_70,param_7);
    if (-1 < iVar1) {
      return 1;
    }
    (**(code **)(*(longlong *)*param_6 + 0x10))();
    *param_6 = 0;
  }
  return 0;
}

