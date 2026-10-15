/*
 * FUN_10020b4d at 10020b4d
 * undefined4 __thiscall FUN_10020b4d(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10020b4d-10020d81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10020b4d(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_6c = param_1;
  local_68 = param_2;
  local_5c = 0x27;
  local_4c = 0x28;
  local_64 = 1;
  puVar5 = (undefined4 *)((int)this + 0xdc);
  local_60 = 1;
  local_58 = 1;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_10 = puVar5;
  uVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x14))
                    ((int *)**(undefined4 **)((int)this + 0xa8),&local_6c,0,puVar5);
  if (-1 < (int)uVar3) {
    puVar1 = (undefined4 *)((int)this + 0xe0);
    iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x14))
                      ((int *)**(undefined4 **)((int)this + 0xa8),&local_6c,0,puVar1);
    if (-1 < iVar4) {
      local_28 = 0x2a;
      local_1c = 0;
      local_14 = (undefined4 *)((int)this + 0xe4);
      local_18 = 0;
      local_24 = 4;
      local_20 = 0;
      iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x24))
                        ((int *)**(undefined4 **)((int)this + 0xa8),*puVar5,&local_28,local_14);
      if (-1 < iVar4) {
        local_c = (undefined4 *)((int)this + 0xe8);
        iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x24))
                          ((int *)**(undefined4 **)((int)this + 0xa8),*puVar1,&local_28,local_c);
        if (-1 < iVar4) {
          local_40 = 0x2a;
          local_30 = 0;
          puVar5 = (undefined4 *)((int)this + 0xec);
          local_2c = 0;
          puVar2 = (undefined4 *)((int)this + 0xf0);
          local_3c = 4;
          local_38 = 0;
          local_34 = 0xffffffff;
          iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x1c))
                            ((int *)**(undefined4 **)((int)this + 0xa8),
                             *(undefined4 *)((int)this + 0xdc),&local_40,puVar5);
          if (-1 < iVar4) {
            iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x1c))
                              ((int *)**(undefined4 **)((int)this + 0xa8),*puVar1,&local_40,puVar2);
            if (-1 < iVar4) {
              local_98 = param_3;
              local_94 = param_2;
              local_80 = 0;
              local_90 = 1;
              local_8c = 1;
              local_84 = 1;
              local_78 = 0;
              local_70 = 0;
              local_88 = 0x2a;
              local_7c = 3;
              local_74 = 0x30000;
              iVar4 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xa8) + 0x14))
                                ((int *)**(undefined4 **)((int)this + 0xa8),&local_98,0,
                                 (int)this + 0x100);
              if (-1 < iVar4) {
                return CONCAT31((int3)((uint)iVar4 >> 8),1);
              }
              (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
              *puVar2 = 0;
            }
            (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
            *puVar5 = 0;
          }
          (**(code **)(*(int *)*local_c + 8))((int *)*local_c);
          *puVar2 = 0;
          puVar5 = local_10;
        }
        puVar2 = local_14;
        (**(code **)(*(int *)*local_14 + 8))((int *)*local_14);
        *puVar2 = 0;
      }
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = 0;
    }
    uVar3 = (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
    *puVar5 = 0;
  }
  return uVar3 & 0xffffff00;
}

