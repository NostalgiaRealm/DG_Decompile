/*
 * FUN_18000e600 at 18000e600
 * undefined8 __fastcall FUN_18000e600(longlong param_1)
 * Address ranges: 18000e600-18000e6d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000e600(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_34 = 2;
  local_38 = 0x670;
  local_24 = 0x670;
  local_30 = 4;
  local_2c = 0x10000;
  uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_38,0,
                     (undefined8 *)(param_1 + 0x3348));
  if (-1 < (int)uVar1) {
    local_1c = 1;
    local_20 = 0xd50;
    local_c = 0xd50;
    local_18 = 4;
    local_48 = &DAT_18006c3b0;
    local_10 = 0;
    local_40 = 0;
    uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_20,&local_48,
                       param_1 + 0x3350);
    if (-1 < (int)uVar2) {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x3348) + 0x10))();
  }
  return uVar1 & 0xffffffffffffff00;
}

