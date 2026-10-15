/*
 * FUN_1002d5a2 at 1002d5a2
 * undefined4 __thiscall FUN_1002d5a2(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, byte param_4, undefined4 * param_5, undefined4 param_6)
 * Address ranges: 1002d5a2-1002d674
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1002d5a2(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4,
            undefined4 *param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [6];
  
  local_48 = param_1;
  local_44 = param_2;
  local_28 = 0x40;
  local_40 = 1;
  local_3c = 1;
  local_30 = 0;
  local_38 = (-(uint)((-(*(int *)((int)this + 0x10) != 5) & param_4) != 0) & 9) + 0x2c;
  local_2c = 0;
  local_34 = param_3;
  local_24 = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x14))
                    ((int *)**(undefined4 **)((int)this + 0xa8),&local_48,0,param_5);
  if (-1 < (int)uVar1) {
    local_1c[1] = 5;
    local_1c[2] = 0;
    local_1c[0] = (-(uint)((-(*(int *)((int)this + 0x10) != 5) & param_4) != 0) & 10) + 0x2d;
    local_1c[3] = 0;
    local_1c[4] = 0;
    local_1c[5] = 0;
    iVar2 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x28))
                      ((int *)**(undefined4 **)((int)this + 0xa8),*param_5,local_1c,param_6);
    if (-1 < iVar2) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar1 = (**(code **)(*(int *)*param_5 + 8))((int *)*param_5);
    *param_5 = 0;
  }
  return uVar1 & 0xffffff00;
}

