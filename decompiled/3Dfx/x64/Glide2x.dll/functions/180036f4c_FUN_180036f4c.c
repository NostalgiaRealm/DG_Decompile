/*
 * FUN_180036f4c at 180036f4c
 * undefined8 __fastcall FUN_180036f4c(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, byte param_5, undefined8 * param_6, undefined8 param_7)
 * Address ranges: 180036f4c-180037034
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180036f4c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       byte param_5,undefined8 *param_6,undefined8 param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int local_78 [7];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_58 = 1;
  local_54 = 1;
  local_48 = 0;
  local_50 = (-(uint)((*(int *)(param_1 + 0x10) != 5 & param_5) != 0) & 9) + 0x2c;
  local_40 = 0x40;
  local_38 = 0;
  local_78[6] = param_2;
  local_5c = param_3;
  local_4c = param_4;
  uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 200),local_78 + 6,0,param_6);
  if (-1 < (int)uVar1) {
    local_78[1] = 5;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    local_78[0] = (-(uint)((*(int *)(param_1 + 0x10) != 5 & param_5) != 0) & 10) + 0x2d;
    uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x50))
                      ((longlong *)**(undefined8 **)(param_1 + 200),*param_6,local_78,param_7);
    if (-1 < (int)uVar2) {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = (**(code **)(*(longlong *)*param_6 + 0x10))();
    *param_6 = 0;
  }
  return uVar1 & 0xffffffffffffff00;
}

