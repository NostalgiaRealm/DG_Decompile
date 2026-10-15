/*
 * FUN_18001bc20 at 18001bc20
 * undefined8 __fastcall FUN_18001bc20(longlong param_1)
 * Address ranges: 18001bc20-18001bcf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001bc20(longlong param_1)

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
  local_38 = 0x590;
  local_24 = 0x590;
  local_30 = 4;
  local_2c = 0x10000;
  uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_38,0,
                     (undefined8 *)(param_1 + 0x31c8));
  if (-1 < (int)uVar1) {
    local_1c = 1;
    local_20 = 0xd50;
    local_c = 0xd50;
    local_18 = 4;
    local_48 = &DAT_18006b500;
    local_10 = 0;
    local_40 = 0;
    uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_20,&local_48,
                       param_1 + 0x31d0);
    if (-1 < (int)uVar2) {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x31c8) + 0x10))();
  }
  return uVar1 & 0xffffffffffffff00;
}

