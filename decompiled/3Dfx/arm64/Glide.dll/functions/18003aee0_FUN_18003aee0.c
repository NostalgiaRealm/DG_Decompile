/*
 * FUN_18003aee0 at 18003aee0
 * undefined8 __cdecl FUN_18003aee0(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined8 * param_5, undefined8 * param_6, undefined8 * param_7, undefined8 * param_8, undefined8 * param_9, undefined8 param_10)
 * Address ranges: 18003aee0-18003b107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18003aee0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined8 *param_5
             ,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
             undefined8 param_10)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  
  local_a8 = 0;
  bVar1 = *(char *)(param_1 + 0x48) == '\0';
  uVar6 = 0x39;
  uVar5 = uVar6;
  if (bVar1) {
    uVar5 = 0x1e;
    uVar6 = 0x1c;
  }
  local_c8 = 0x100000001;
  local_c0 = 0x35;
  if (bVar1) {
    local_c0 = 0x1b;
  }
  local_b8 = 0;
  uStack_b0 = 0x28;
  local_d0 = param_2;
  uStack_cc = param_3;
  local_bc = param_4;
  iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 200),&local_d0,0,param_5);
  if (-1 < iVar2) {
    local_6c = 6;
    local_64 = 0;
    local_70 = uVar6;
    iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x48))
                      ((longlong *)**(undefined8 **)(param_1 + 200),*param_5,&local_70,param_7);
    if (-1 < iVar2) {
      plVar4 = (longlong *)*param_7;
      *param_6 = plVar4;
      (**(code **)(*plVar4 + 8))();
      if (param_4 == 1) {
        plVar4 = (longlong *)*param_5;
        uVar3 = 1;
        *param_8 = plVar4;
        (**(code **)(*plVar4 + 8))();
      }
      else {
        local_bc = 1;
        uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                          ((longlong *)**(undefined8 **)(param_1 + 200),&local_d0,0,param_8);
        uVar3 = ~uVar3 >> 0x1f;
      }
      if (uVar3 != 0) {
        local_9c = 4;
        local_94 = 0xffffffff;
        local_90 = 0;
        local_a0 = uVar5;
        iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x38))
                          ((longlong *)**(undefined8 **)(param_1 + 200),*param_8,&local_a0,param_9);
        if (-1 < iVar2) {
          local_84 = 4;
          local_7c = 0xffffffff;
          local_78 = 0;
          local_88 = uVar6;
          iVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x38))
                            ((longlong *)**(undefined8 **)(param_1 + 200),*param_8,&local_88,
                             param_10);
          if (-1 < iVar2) {
            return 1;
          }
          (**(code **)(*(longlong *)*param_9 + 0x10))();
        }
        (**(code **)(*(longlong *)*param_8 + 0x10))();
      }
      (**(code **)(*(longlong *)*param_7 + 0x10))();
      (**(code **)(*(longlong *)*param_6 + 0x10))();
    }
    (**(code **)(*(longlong *)*param_5 + 0x10))();
  }
  return 0;
}

