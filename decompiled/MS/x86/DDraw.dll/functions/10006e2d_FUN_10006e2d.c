/*
 * FUN_10006e2d at 10006e2d
 * undefined4 __thiscall FUN_10006e2d(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10006e2d-10006f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10006e2d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)((int)this + 0xd200);
  piVar3 = (int *)*piVar1;
  puVar2 = (undefined4 *)((int)this + 0xd1fc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar1 = 0;
    (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
    *puVar2 = 0;
  }
  local_54 = param_1;
  local_50 = param_2;
  local_3c = 0;
  local_4c = 1;
  local_48 = 1;
  local_40 = 1;
  local_38 = 1;
  local_10 = param_3;
  local_c = param_4;
  local_30 = 0;
  local_2c = 0;
  local_8 = 0;
  local_44 = 0x1c;
  local_34 = 8;
  iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xcf04) + 0x14))
                    ((int *)**(undefined4 **)((int)this + 0xcf04),&local_54,&local_10,puVar2);
  if (-1 < iVar4) {
    local_28 = 0x1c;
    local_18 = 0;
    local_14 = 0;
    local_24 = 4;
    local_20 = 0;
    local_1c = 0xffffffff;
    iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xcf04) + 0x1c))
                      ((int *)**(undefined4 **)((int)this + 0xcf04),*puVar2,&local_28,piVar1);
    if (iVar4 < 0) {
      uVar5 = (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
      *puVar2 = 0;
      return uVar5 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

