/*
 * FUN_1000b28a at 1000b28a
 * undefined4 __thiscall FUN_1000b28a(void * this, LPVOID param_1)
 * Address ranges: 1000b28a-1000b514
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000b28a(void *this,LPVOID param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4 [22];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44 [6];
  LPVOID local_2c;
  undefined4 local_28;
  undefined4 local_24;
  LPVOID local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  LPVOID local_c [2];
  
  pvVar1 = param_1;
  local_c[0] = (LPVOID)0x0;
  param_1 = (LPVOID)0x0;
  uVar2 = FUN_1000daba((uint)pvVar1,local_c,&param_1);
  if ((char)uVar2 != '\0') {
    local_44[0] = (int)pvVar1 * 4 + 0x10;
    local_44[3] = 0;
    local_20 = local_c[0];
    local_1c = 0;
    local_18 = 0;
    puVar5 = (undefined4 *)((int)this + 0x3318);
    local_44[1] = 1;
    local_44[2] = 8;
    local_44[4] = 0x40;
    local_44[5] = 4;
    local_14 = puVar5;
    uVar2 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3308) + 0xc))
                      ((int *)**(undefined4 **)((int)this + 0x3308),local_44,&local_20,puVar5);
    if (-1 < (int)uVar2) {
      local_a4[0x15] = (int)pvVar1 + 4;
      local_a4[0x12] = 0;
      local_a4[0x13] = 1;
      local_4c = 0;
      local_48 = 0;
      local_a4[0x14] = 0;
      iVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3308) + 0x1c))
                        ((int *)**(undefined4 **)((int)this + 0x3308),*puVar5,local_a4 + 0x12,
                         (int)this + 0x3324);
      if (-1 < iVar3) {
        puVar5 = (undefined4 *)((int)this + 0x3314);
        local_2c = param_1;
        local_a4[0xf] = 0;
        local_28 = 0;
        local_24 = 0;
        local_a4[0xc] = 0x40004;
        local_a4[0xd] = 1;
        local_a4[0xe] = 8;
        local_a4[0x10] = 0x40;
        local_a4[0x11] = 4;
        local_10 = puVar5;
        iVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3308) + 0xc))
                          ((int *)**(undefined4 **)((int)this + 0x3308),local_a4 + 0xc,&local_2c,
                           puVar5);
        if (-1 < iVar3) {
          local_a4[6] = 0;
          local_a4[10] = 0;
          local_a4[0xb] = 0;
          local_a4[7] = 1;
          local_a4[8] = 0;
          local_a4[9] = 0x10001;
          iVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3308) + 0x1c))
                            ((int *)**(undefined4 **)((int)this + 0x3308),*puVar5,local_a4 + 6,
                             (int)this + 0x3320);
          if (-1 < iVar3) {
            local_a4[0] = (int)pvVar1 * 4 + 4;
            local_a4[1] = 2;
            puVar5 = (undefined4 *)((int)this + 0x331c);
            local_a4[2] = 8;
            local_a4[3] = 0x10000;
            local_a4[4] = 0x40;
            local_a4[5] = 4;
            iVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3308) + 0xc))
                              ((int *)**(undefined4 **)((int)this + 0x3308),local_a4,0,puVar5);
            if (-1 < iVar3) {
              local_b0 = (int)pvVar1 + 1;
              local_bc = 0;
              local_ac = 0;
              local_a8 = 0;
              local_b8 = 1;
              local_b4 = 0;
              iVar3 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3308) + 0x1c))
                                ((int *)**(undefined4 **)((int)this + 0x3308),*puVar5,&local_bc,
                                 (int)this + 0x3328);
              if (-1 < iVar3) {
                thunk_FUN_10052276(param_1);
                uVar4 = thunk_FUN_10052276(local_c[0]);
                return CONCAT31((int3)((uint)uVar4 >> 8),1);
              }
              (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
            }
            (**(code **)(**(int **)((int)this + 0x3320) + 8))(*(int **)((int)this + 0x3320));
            puVar5 = local_10;
          }
          (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
        }
        (**(code **)(**(int **)((int)this + 0x3324) + 8))(*(int **)((int)this + 0x3324));
        puVar5 = local_14;
      }
      uVar2 = (**(code **)(*(int *)*puVar5 + 8))((int *)*puVar5);
    }
  }
  return uVar2 & 0xffffff00;
}

