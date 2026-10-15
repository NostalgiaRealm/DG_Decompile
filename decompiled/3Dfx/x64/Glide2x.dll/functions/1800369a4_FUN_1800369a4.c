/*
 * FUN_1800369a4 at 1800369a4
 * undefined8 __fastcall FUN_1800369a4(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800369a4-180036be8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800369a4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  
  local_a8 = 1;
  local_a4 = 1;
  local_9c = 1;
  local_a0 = 0x27;
  puVar1 = (undefined8 *)(param_1 + 0x130);
  local_94 = 0;
  local_90 = 0x28;
  local_88 = 0;
  local_b0 = param_2;
  local_ac = param_3;
  uVar7 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 200),&local_b0,0,puVar1);
  if (-1 < (int)uVar7) {
    puVar2 = (undefined8 *)(param_1 + 0x138);
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                      ((longlong *)**(undefined8 **)(param_1 + 200),&local_b0,0,puVar2);
    if (-1 < iVar6) {
      local_c8 = 0x2a;
      local_bc = 0;
      puVar3 = (undefined8 *)(param_1 + 0x140);
      local_c4 = 4;
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x48))
                        ((longlong *)**(undefined8 **)(param_1 + 200),*puVar1,&local_c8,puVar3);
      if (-1 < iVar6) {
        iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x48))
                          ((longlong *)**(undefined8 **)(param_1 + 200),*puVar2,&local_c8,
                           (undefined8 *)(param_1 + 0x148));
        if (-1 < iVar6) {
          local_80 = 0x2a;
          local_70 = 0;
          puVar4 = (undefined8 *)(param_1 + 0x150);
          local_7c = 4;
          local_74 = 0xffffffff;
          iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x38))
                            ((longlong *)**(undefined8 **)(param_1 + 200),*puVar1,&local_80,puVar4);
          if (-1 < iVar6) {
            puVar5 = (undefined8 *)(param_1 + 0x158);
            iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x38))
                              ((longlong *)**(undefined8 **)(param_1 + 200),*puVar2,&local_80,puVar5
                              );
            if (-1 < iVar6) {
              local_60 = 1;
              local_5c = 1;
              local_54 = 1;
              local_58 = 0x2a;
              local_4c = 3;
              local_44 = 0x30000;
              local_68 = param_4;
              local_64 = param_3;
              uVar8 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x28))
                                ((longlong *)**(undefined8 **)(param_1 + 200),&local_68,0,
                                 param_1 + 0x178);
              if (-1 < (int)uVar8) {
                return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              }
              (**(code **)(*(longlong *)*puVar5 + 0x10))();
              *puVar5 = 0;
            }
            (**(code **)(*(longlong *)*puVar4 + 0x10))();
            *puVar4 = 0;
          }
          (**(code **)(**(longlong **)(param_1 + 0x148) + 0x10))();
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
        (**(code **)(*(longlong *)*puVar3 + 0x10))();
        *puVar3 = 0;
      }
      (**(code **)(*(longlong *)*puVar2 + 0x10))();
      *puVar2 = 0;
    }
    uVar7 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
    *puVar1 = 0;
  }
  return uVar7 & 0xffffffffffffff00;
}

