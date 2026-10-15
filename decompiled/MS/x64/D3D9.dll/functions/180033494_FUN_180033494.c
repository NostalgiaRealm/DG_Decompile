/*
 * FUN_180033494 at 180033494
 * undefined8 __fastcall FUN_180033494(longlong param_1)
 * Address ranges: 180033494-180033744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180033494(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18 [2];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_f8 = &DAT_18010f404;
  local_e8 = &DAT_18010f404;
  local_d8 = &DAT_18010f404;
  local_c8 = &DAT_18010f404;
  local_b8 = &DAT_18010f404;
  local_a8 = &DAT_18010f404;
  local_88 = 0x1c;
  local_84 = 1;
  local_f0 = 4;
  local_ec = 4;
  local_e0 = 4;
  local_dc = 4;
  local_d0 = 4;
  local_cc = 4;
  local_c0 = 4;
  local_bc = 4;
  local_b0 = 4;
  local_ac = 4;
  local_a0 = 4;
  local_9c = 4;
  local_98 = 0x100000001;
  uStack_90 = 0x100000001;
  local_7c = 0;
  local_78 = 8;
  local_70 = 0;
  local_res18[0] = (longlong *)0x0;
  uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 0x260),&local_98,&local_f8,local_res18)
  ;
  if (-1 < (int)uVar2) {
    local_148 = 0x1c;
    local_138 = 0;
    local_144 = 4;
    local_13c = 0xffffffff;
    iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x260),local_res18[0],&local_148,
                       (undefined8 *)(param_1 + 0x238));
    if (-1 < iVar1) {
      local_res10 = (longlong *)0x0;
      local_178 = 1;
      local_174 = 1;
      local_170 = 1;
      local_168 = 0x1c;
      local_164 = 1;
      local_15c = 0;
      local_158 = 8;
      local_150 = 4;
      local_16c = 6;
      iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x28))
                        ((longlong *)**(undefined8 **)(param_1 + 0x260),&local_178,&local_f8,
                         &local_res10);
      if (-1 < iVar1) {
        local_130 = 0x1c;
        local_120 = 0;
        local_12c = 9;
        local_124 = 0xffffffff;
        iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x38))
                          ((longlong *)**(undefined8 **)(param_1 + 0x260),local_res10,&local_130,
                           (undefined8 *)(param_1 + 0x240));
        if (-1 < iVar1) {
          local_68 = 0x100000001;
          uStack_60 = 0x100000001;
          local_58 = 0x1c;
          local_50 = 8;
          local_48 = 0;
          local_res8 = (longlong *)0x0;
          iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x30))
                            ((longlong *)**(undefined8 **)(param_1 + 0x260),&local_68,&local_f8,
                             &local_res8);
          if (-1 < iVar1) {
            local_118 = 0x1c;
            local_108 = 0;
            local_114 = 8;
            local_10c = 0xffffffff;
            iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x260) + 0x38))
                              ((longlong *)**(undefined8 **)(param_1 + 0x260),local_res8,&local_118,
                               param_1 + 0x248);
            if (-1 < iVar1) {
              (**(code **)(*local_res18[0] + 0x10))();
              (**(code **)(*local_res10 + 0x10))();
              uVar3 = (**(code **)(*local_res8 + 0x10))();
              return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
            }
            (**(code **)(*local_res8 + 0x10))();
          }
          (**(code **)(**(longlong **)(param_1 + 0x240) + 0x10))();
        }
        (**(code **)(*local_res10 + 0x10))();
      }
      (**(code **)(**(longlong **)(param_1 + 0x238) + 0x10))();
    }
    uVar2 = (**(code **)(*local_res18[0] + 0x10))();
  }
  return uVar2 & 0xffffffffffffff00;
}

