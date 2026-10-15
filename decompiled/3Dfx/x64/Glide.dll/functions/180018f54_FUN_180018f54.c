/*
 * FUN_180018f54 at 180018f54
 * undefined8 __fastcall FUN_180018f54(longlong param_1)
 * Address ranges: 180018f54-1800191f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180018f54(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined7 extraout_var;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  plVar7 = FUN_1800462a4(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                         (ulonglong)*(uint *)(param_1 + 0x31b8),
                         (ulonglong)
                         (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x33) *
                               *(int *)(*(longlong *)(param_1 + 8) + 0x2f)),0,'\x01');
  *(longlong **)(param_1 + 0x3200) = plVar7;
  uVar10 = 0;
  if (plVar7 != (longlong *)0x0) {
    plVar7 = *(longlong **)
              ((ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0 +
              *(longlong *)(param_1 + 0x31b0));
    uVar5 = (**(code **)(*plVar7 + 0x78))(plVar7,1);
    puVar1 = (undefined8 *)(param_1 + 0x3208);
    *(undefined4 *)(param_1 + 0x31d0) = uVar5;
    local_c4 = 0x10;
    local_b4 = 0x10;
    local_58 = 0x100;
    local_50 = 0x100;
    local_c8 = 0;
    local_c0 = 1;
    local_b8 = 1;
    local_b0 = 1;
    local_a8 = 1;
    local_a0 = 0;
    local_98 = 0;
    local_68[0] = 3;
    local_60 = 0;
    local_4c = 0x10001;
    local_48 = 0x3c;
    local_44 = 1;
    local_3c = 0;
    bVar4 = FUN_180046244(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                          (ulonglong)*(uint *)(param_1 + 0x31b8),&local_a8,0,local_68,0x80,
                          in_stack_ffffffffffffff18,in_stack_ffffffffffffff20,puVar1);
    uVar10 = CONCAT71(extraout_var,bVar4);
    if (bVar4 != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x3210);
      plVar7 = *(longlong **)
                ((ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0 +
                *(longlong *)(param_1 + 0x31b0));
      iVar6 = (**(code **)(*plVar7 + 0x70))(plVar7,&local_c8,&DAT_1800605e0,puVar2);
      if (-1 < iVar6) {
        puVar3 = (undefined8 *)(param_1 + 0x3218);
        plVar7 = *(longlong **)
                  ((ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0 +
                  *(longlong *)(param_1 + 0x31b0));
        iVar6 = (**(code **)(*plVar7 + 0x70))(plVar7,&local_b8,&DAT_1800605e0,puVar3);
        if (-1 < iVar6) {
          puVar8 = FUN_180046634(-(ulonglong)(*(longlong *)(param_1 + 0x31b0) != 0) &
                                 *(longlong *)(param_1 + 0x31b0) + 0x6d0U,
                                 *(uint *)(param_1 + 0x31b8),0,0x200,1);
          *(undefined8 **)(param_1 + 0x31c8) = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            local_90 = 0x3d;
            local_8c = 4;
            local_88 = 0x1688;
            local_70 = 0;
            local_80 = 0xffffffff00000000;
            uStack_78 = 0;
            (**(code **)(*(longlong *)*puVar2 + 0x48))((longlong *)*puVar2,&local_res8);
            plVar7 = *(longlong **)
                      ((ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0 +
                      *(longlong *)(param_1 + 0x31b0));
            (**(code **)(*plVar7 + 0x90))(plVar7,*puVar1,&local_90,local_res8);
            uVar9 = FUN_180019680(param_1);
            return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          }
          (**(code **)(*(longlong *)*puVar3 + 0x10))();
          *puVar3 = 0;
        }
        (**(code **)(*(longlong *)*puVar2 + 0x10))();
        *puVar2 = 0;
      }
      uVar10 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
      *puVar1 = 0;
    }
  }
  return uVar10 & 0xffffffffffffff00;
}

