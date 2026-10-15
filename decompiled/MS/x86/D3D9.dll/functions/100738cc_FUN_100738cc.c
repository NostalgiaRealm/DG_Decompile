/*
 * FUN_100738cc at 100738cc
 * bool __thiscall FUN_100738cc(void * this, int param_1, undefined4 param_2, byte param_3)
 * Address ranges: 100738cc-10073980
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100738cc(void *this,int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_24 = (uint)param_3;
  local_10 = param_2;
  local_28 = 0x1000;
  local_20 = 8;
  local_1c = 0;
  local_18 = 0x40;
  local_14 = 0x10;
  local_c = 0;
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x1cf04) + 0xc))
                    ((int *)**(undefined4 **)((int)this + 0x1cf04),&local_28,&local_10,
                     (void *)((int)this + (param_1 + 0x73f7) * 4));
  if (iVar1 < 0) {
    bVar2 = false;
  }
  else {
    local_40 = 0;
    local_30 = 0;
    local_2c = 0;
    local_3c = 1;
    local_38 = 0;
    local_34 = 0x100;
    iVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x1cf04) + 0x1c))
                      ((int *)**(undefined4 **)((int)this + 0x1cf04),
                       *(undefined4 *)((int)this + param_1 * 4 + 0x1cfdc),&local_40,
                       (void *)((int)this + (param_1 + 0x7437) * 4));
    bVar2 = -1 < iVar1;
  }
  return bVar2;
}

