/*
 * FUN_180026f10 at 180026f10
 * undefined __cdecl FUN_180026f10(longlong param_1, longlong param_2, uint param_3, uint param_4, longlong param_5, int param_6, uint param_7)
 * Address ranges: 180026f10-1800272cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026f10(longlong param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  int param_6,uint param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  longlong local_78 [3];
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_7;
  uVar14 = *(uint *)(param_2 + 0x20);
  uVar5 = *(uint *)(param_2 + 0x24);
  local_a0 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0);
  local_a8 = param_3;
  local_98 = param_1;
  local_78[0] = param_1;
  auVar15 = FUN_18002a9a8(param_3,param_4,uVar14,uVar5,param_6,param_7 & 0xff);
  local_90 = 0;
  local_88 = 0;
  uVar8 = auVar15._0_8_ >> 0x20;
  uVar7 = auVar15._4_4_;
  uVar13 = auVar15._12_4_;
  uStack_7c = 1;
  *(uint *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar13 - uVar7 >> 4);
  uVar9 = param_7 & 0xff;
  uStack_84 = uVar14;
  local_80 = uVar5;
  if (local_a8 < param_4) {
    uVar14 = auVar15._8_4_;
    local_90 = (ulonglong)uVar7 << 0x20;
    local_80 = uVar13;
    if (uVar14 != 0) {
      local_80 = uVar13 + 1;
    }
    if (param_5 != 0) {
      lVar2 = 0x140;
      if ((uVar4 & 0xff) == 0) {
        lVar2 = 0x110;
      }
      iVar1 = (param_7 & 0xff) * 2 + 2;
      uVar5 = iVar1 * param_6;
      iVar11 = auVar15._0_4_;
      if ((*(char *)(lVar6 + local_a0 * 0x20 + 0x6e8) != '\0') &&
         (uVar4 = FUN_1800475b8(*(longlong **)
                                 (*(longlong *)(*(longlong *)(local_98 + 0x140) + 0x31b0) + 0x1b500)
                                ,*(ulonglong *)(lVar2 + param_2)), (uVar4 & 1) != 0)) {
        local_78[0] = 0;
        local_78[1] = 0;
        iVar3 = (**(code **)(**(longlong **)(lVar2 + param_2) + 0x40))
                          (*(longlong **)(lVar2 + param_2),0,local_78,0);
        if (iVar3 < 0) {
          return;
        }
        if (iVar11 != 0) {
          uVar9 = uVar14;
          if (uVar13 != uVar7) {
            uVar9 = *(uint *)(param_2 + 0x20);
          }
          local_b8 = (ulonglong)uVar9 << 0x20;
          uVar9 = uVar7 * uVar5;
          uVar7 = uVar7 + 1;
          uStack_ac = 1;
          local_c0 = auVar15._0_8_;
          local_b0 = uVar7;
          (**(code **)(**(longlong **)(lVar2 + param_2) + 0x60))
                    (*(longlong **)(lVar2 + param_2),0,&local_c0,
                     (ulonglong)uVar9 + (ulonglong)(uint)(iVar1 * iVar11) + param_5,uVar5,0);
        }
        if (uVar7 <= uVar13) {
          local_c0 = (ulonglong)uVar7 << 0x20;
          local_b8 = (ulonglong)*(uint *)(param_2 + 0x20) << 0x20;
          local_b0 = uVar13;
          if (uVar14 == *(uint *)(param_2 + 0x20)) {
            local_b0 = uVar13 + 1;
          }
          uStack_ac = 1;
          (**(code **)(**(longlong **)(lVar2 + param_2) + 0x60))
                    (*(longlong **)(lVar2 + param_2),0,&local_c0,
                     (ulonglong)(uVar7 * uVar5) + (ulonglong)(uint)(iVar1 * iVar11) + param_5,uVar5,
                     0);
          uVar7 = uVar13;
          if (((uVar14 != *(uint *)(param_2 + 0x20)) || (uVar7 = uVar13 + 1, uVar13 == uVar7)) &&
             (uVar14 != 0)) {
            local_b0 = uVar13 + 1;
            local_c0 = (ulonglong)uVar7 << 0x20;
            uStack_ac = 1;
            local_b8 = (ulonglong)uVar14 << 0x20;
            (**(code **)(**(longlong **)(lVar2 + param_2) + 0x60))
                      (*(longlong **)(lVar2 + param_2),0,&local_c0,
                       (ulonglong)(uVar7 * uVar5) + (ulonglong)(uint)(iVar1 * iVar11) + param_5,
                       uVar5,0);
          }
        }
        (**(code **)(**(longlong **)(lVar2 + param_2) + 0x48))(*(longlong **)(lVar2 + param_2),0,0);
        return;
      }
      local_a0 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_78[2] = 0x150;
      if ((param_7 & 0xff) == 0) {
        local_78[2] = 0x120;
      }
      iVar3 = (**(code **)(**(longlong **)(param_2 + local_78[2]) + 0x40))
                        (*(longlong **)(param_2 + local_78[2]),0,&local_60,&local_a0);
      if (-1 < iVar3) {
        local_98 = 0x168;
        if (uVar9 == 0) {
          local_98 = 0x138;
        }
        puVar10 = (undefined8 *)(local_a0 + *(int *)(param_2 + local_98) * uVar7);
        if (iVar11 != 0) {
          thunk_FUN_180001218((undefined8 *)((longlong)puVar10 + (ulonglong)(uint)(iVar1 * iVar11)),
                              (undefined8 *)(param_5 + (ulonglong)local_a8),
                              (ulonglong)(uint)((*(int *)(param_2 + 0x20) - iVar11) * iVar1));
          uVar8 = (ulonglong)(uVar7 + 1);
          puVar10 = (undefined8 *)((longlong)puVar10 + (ulonglong)*(uint *)(param_2 + local_98));
        }
        puVar12 = (undefined8 *)(param_5 + (ulonglong)((uint)uVar8 * uVar5));
        if ((uint)uVar8 <= uVar13) {
          lVar6 = 0x168;
          if (uVar9 == 0) {
            lVar6 = 0x138;
          }
          do {
            uVar7 = uVar14;
            if ((uint)uVar8 != uVar13) {
              uVar7 = *(uint *)(param_2 + 0x20);
            }
            thunk_FUN_180001218(puVar10,puVar12,(ulonglong)(iVar1 * uVar7));
            uVar7 = (uint)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            puVar12 = (undefined8 *)((longlong)puVar12 + (ulonglong)uVar5);
            puVar10 = (undefined8 *)((longlong)puVar10 + (ulonglong)*(uint *)(lVar6 + param_2));
          } while (uVar7 <= uVar13);
        }
      }
      lVar6 = 0x168;
      if (uVar9 == 0) {
        lVar6 = 0x138;
      }
      local_c0 = (ulonglong)(uint)(*(int *)(param_2 + lVar6) * local_90._4_4_);
      local_b8 = (ulonglong)(*(int *)(param_2 + lVar6) * local_80);
      (**(code **)(**(longlong **)(param_2 + local_78[2]) + 0x48))
                (*(longlong **)(param_2 + local_78[2]),0,&local_c0);
    }
  }
  FUN_180026d78(local_78[0],param_2,(undefined4 *)&local_90,(char)param_7);
  return;
}

