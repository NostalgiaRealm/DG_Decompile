/*
 * FUN_18007a128 at 18007a128
 * undefined FUN_18007a128(void)
 * Address ranges: 18007a128-18007a247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18007a128(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if (*(longlong **)(param_1 + 0x1d4f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d4f8) + 0x10))();
    *(undefined8 *)(param_1 + 0x1d4f8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1d4f0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1d4f0) = 0;
  }
  uStack_94 = 0;
  local_70 = 0x100000001;
  uStack_68 = 0x10000001c;
  local_50 = 0;
  local_60 = 0x100000000;
  uStack_58 = 8;
  local_a0 = param_4;
  local_98 = param_5;
  local_78 = param_2;
  uStack_74 = param_3;
  iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),&local_78,&local_a0,
                     param_1 + 0x1d4f0);
  if (-1 < iVar1) {
    local_80 = 0;
    local_90 = 0x40000001c;
    uStack_88 = 0xffffffff00000000;
    iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1cf18) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x1cf18),
                       *(undefined8 *)(param_1 + 0x1d4f0),&local_90,param_1 + 0x1d4f8);
    if (iVar1 < 0) {
      (**(code **)(**(longlong **)(param_1 + 0x1d4f0) + 0x10))();
      *(undefined8 *)(param_1 + 0x1d4f0) = 0;
      return 0;
    }
  }
  return 1;
}

