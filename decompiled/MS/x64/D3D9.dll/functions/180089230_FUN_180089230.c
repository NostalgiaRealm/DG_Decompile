/*
 * FUN_180089230 at 180089230
 * undefined8 __fastcall FUN_180089230(longlong param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5)
 * Address ranges: 180089230-180089350
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180089230(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  plVar1 = (longlong *)(param_1 + 0x1d4f8);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1d4f0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1d4f0) = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x1d4f0);
  local_90 = param_5;
  local_68 = 1;
  local_64 = 1;
  local_60 = 0x1c;
  local_5c = 1;
  local_54 = 1;
  local_50 = 8;
  local_48 = 0;
  local_8c = 0;
  local_98 = param_4;
  local_70 = param_2;
  local_6c = param_3;
  uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),&local_70,&local_98,puVar2);
  if (-1 < (int)uVar3) {
    local_88 = 0x1c;
    local_78 = 0;
    local_84 = 4;
    local_7c = 0xffffffff;
    uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),*puVar2,&local_88,plVar1);
    if ((int)uVar3 < 0) {
      uVar4 = (**(code **)(*(longlong *)*puVar2 + 0x10))();
      *puVar2 = 0;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

