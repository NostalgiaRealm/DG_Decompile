/*
 * FUN_18001b44c at 18001b44c
 * undefined8 __fastcall FUN_18001b44c(longlong param_1, uint param_2)
 * Address ranges: 18001b44c-18001b6c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001b44c(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  LPVOID pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *local_res18;
  LPVOID local_res20;
  int local_e8 [13];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined8 local_98;
  LPVOID local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined8 local_40;
  
  local_res18 = (undefined8 *)0x0;
  local_res20 = (LPVOID)0x0;
  uVar6 = FUN_180022aec(param_1,param_2,&local_res18,&local_res20);
  puVar3 = local_res18;
  if ((char)uVar6 != '\0') {
    local_e8[0] = param_2 * 4 + 0x10;
    local_e8[2] = 8;
    local_e8[3] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x31e0);
    local_e8[1] = 1;
    local_e8[4] = 0x40;
    local_e8[5] = 4;
    local_a0 = local_res18;
    local_98 = 0;
    uVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_e8,&local_a0,puVar1);
    if (-1 < (int)uVar6) {
      local_74 = param_2 + 4;
      puVar8 = (undefined8 *)(param_1 + 0x31f8);
      local_80 = 0;
      local_70 = 0;
      local_7c = 1;
      local_res18 = puVar8;
      iVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                        ((longlong *)**(undefined8 **)(param_1 + 0x31c0),*puVar1,&local_80,puVar8);
      pvVar4 = local_res20;
      if (-1 < iVar5) {
        local_e8[7] = 1;
        local_88 = 0;
        puVar2 = (undefined8 *)(param_1 + 0x31d8);
        local_e8[6] = 0x40004;
        local_e8[8] = 8;
        local_e8[9] = 0;
        local_e8[10] = 0x40;
        local_e8[0xb] = 4;
        local_90 = local_res20;
        iVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                          ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_e8 + 6,&local_90,
                           puVar2);
        if (-1 < iVar5) {
          local_68 = 0;
          local_58 = 0;
          local_64 = 1;
          local_5c = 0x10001;
          iVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                            ((longlong *)**(undefined8 **)(param_1 + 0x31c0),*puVar2,&local_68,
                             param_1 + 0x31f0);
          if (-1 < iVar5) {
            local_b4 = 2;
            local_e8[0xc] = param_2 * 4 + 4;
            local_b0 = 8;
            puVar8 = (undefined8 *)(param_1 + 0x31e8);
            local_ac = 0x10000;
            local_a8 = 0x40;
            local_a4 = 4;
            iVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                              ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_e8 + 0xc,0,
                               puVar8);
            if (-1 < iVar5) {
              local_44 = param_2 + 1;
              local_50 = 0;
              local_40 = 0;
              local_4c = 1;
              iVar5 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                                ((longlong *)**(undefined8 **)(param_1 + 0x31c0),*puVar8,&local_50,
                                 param_1 + 0x3200);
              if (-1 < iVar5) {
                FUN_18005d720(pvVar4);
                uVar7 = FUN_18005d720(puVar3);
                return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              }
              (**(code **)(*(longlong *)*puVar8 + 0x10))();
            }
            (**(code **)(**(longlong **)(param_1 + 0x31f0) + 0x10))();
            puVar8 = local_res18;
          }
          (**(code **)(*(longlong *)*puVar2 + 0x10))();
        }
        (**(code **)(*(longlong *)*puVar8 + 0x10))();
      }
      uVar6 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
    }
  }
  return uVar6 & 0xffffffffffffff00;
}

