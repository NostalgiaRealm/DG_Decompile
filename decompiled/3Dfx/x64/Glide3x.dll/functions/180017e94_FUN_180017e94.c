/*
 * FUN_180017e94 at 180017e94
 * undefined __fastcall FUN_180017e94(longlong param_1, longlong param_2, uint param_3, uint param_4, longlong param_5, int param_6, byte param_7)
 * Address ranges: 180017e94-1800182a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017e94(longlong param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  int param_6,byte param_7)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar8 = *(uint *)(param_2 + 0x24);
  uVar13 = *(uint *)(param_2 + 0x20);
  local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330);
  local_b0 = (undefined8 *)
             CONCAT44(local_b0._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3338));
  uVar12 = param_4;
  puVar6 = FUN_180019f8c(&local_c8,param_3,param_4,uVar13,uVar8,param_6,param_7);
  uVar14 = puVar6[1];
  uVar1 = puVar6[3];
  local_a8 = CONCAT44(local_a8._4_4_,*puVar6);
  uVar2 = puVar6[2];
  *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar1 - uVar14 >> 4);
  local_98 = 0;
  local_90 = 0;
  local_84 = 1;
  local_8c = uVar13;
  local_88 = uVar8;
  if (param_3 < param_4) {
    local_98 = (ulonglong)uVar14 << 0x20;
    local_88 = (uVar2 != 0) + uVar1;
    if (param_5 != 0) {
      iVar4 = (uint)param_7 * 2 + 2;
      lVar9 = (ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x110;
      uVar8 = iVar4 * param_6;
      if ((*(char *)(((ulonglong)local_b0 & 0xffffffff) * 0x20 + 0x6e8 + local_a0) != '\0') &&
         (cVar3 = FUN_180045cec(*(longlong **)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330) + 0x1b500),
                                *(ulonglong *)(lVar9 + param_2),uVar12), cVar3 != '\0')) {
        local_80 = 0;
        local_78 = 0;
        iVar5 = (**(code **)(**(longlong **)(lVar9 + param_2) + 0x40))();
        if (iVar5 < 0) {
          return;
        }
        uVar12 = (uint)local_a8;
        uVar13 = uVar14;
        if ((uint)local_a8 != 0) {
          local_c8 = (uint)local_a8;
          local_c0 = 0;
          local_bc = uVar2;
          if (uVar1 != uVar14) {
            local_bc = *(uint *)(param_2 + 0x20);
          }
          uVar13 = uVar14 + 1;
          local_b4 = 1;
          local_c4 = uVar14;
          local_b8 = uVar13;
          (**(code **)(**(longlong **)(lVar9 + param_2) + 0x60))
                    (*(longlong **)(lVar9 + param_2),0,&local_c8,
                     (ulonglong)(uVar14 * uVar8) + param_5 + (ulonglong)(iVar4 * (uint)local_a8),
                     uVar8,0);
        }
        if (uVar13 <= uVar1) {
          local_bc = *(uint *)(param_2 + 0x20);
          local_b8 = uVar1;
          if (uVar2 == local_bc) {
            local_b8 = uVar1 + 1;
          }
          local_c8 = 0;
          local_c0 = 0;
          local_b4 = 1;
          local_c4 = uVar13;
          (**(code **)(**(longlong **)(lVar9 + param_2) + 0x60))
                    (*(longlong **)(lVar9 + param_2),0,&local_c8,
                     (ulonglong)(uVar13 * uVar8) + param_5 + (ulonglong)(iVar4 * uVar12),uVar8,0);
          uVar13 = uVar1;
          if (((uVar2 != *(uint *)(param_2 + 0x20)) || (uVar13 = uVar1 + 1, uVar1 == uVar1 + 1)) &&
             (uVar2 != 0)) {
            local_b8 = uVar1 + 1;
            local_c8 = 0;
            local_c0 = 0;
            local_b4 = 1;
            local_c4 = uVar13;
            local_bc = uVar2;
            (**(code **)(**(longlong **)(lVar9 + param_2) + 0x60))
                      (*(longlong **)(lVar9 + param_2),0,&local_c8,
                       (ulonglong)(uVar13 * uVar8) + (ulonglong)(iVar4 * uVar12) + param_5,uVar8,0);
          }
        }
        (**(code **)(**(longlong **)(lVar9 + param_2) + 0x48))(*(longlong **)(lVar9 + param_2),0,0);
        return;
      }
      local_a0 = 0;
      local_70 = 0;
      local_68 = 0;
      local_80 = (ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x120;
      iVar5 = (**(code **)(**(longlong **)(local_80 + param_2) + 0x40))
                        (*(longlong **)(local_80 + param_2),0,&local_70,&local_a0);
      if (-1 < iVar5) {
        uVar7 = (ulonglong)(-(uint)(param_7 != 0) & 0x30);
        puVar10 = (undefined8 *)((ulonglong)(uVar14 * *(int *)(uVar7 + 0x138 + param_2)) + local_a0)
        ;
        if ((uint)local_a8 != 0) {
          FUN_180061330((undefined8 *)((ulonglong)((uint)local_a8 * iVar4) + (longlong)puVar10),
                        (undefined8 *)((ulonglong)param_3 + param_5),
                        (ulonglong)((*(int *)(param_2 + 0x20) - (uint)local_a8) * iVar4));
          puVar10 = (undefined8 *)
                    ((ulonglong)*(uint *)(uVar7 + 0x138 + param_2) + (longlong)puVar10);
          uVar14 = uVar14 + 1;
        }
        puVar11 = (undefined8 *)((ulonglong)(uVar14 * uVar8) + param_5);
        local_b0 = puVar10;
        if (uVar14 <= uVar1) {
          local_a8 = (ulonglong)uVar8;
          do {
            uVar8 = uVar2;
            if (uVar14 != uVar1) {
              uVar8 = *(uint *)(param_2 + 0x20);
            }
            local_b0 = puVar10;
            FUN_180061330(puVar10,puVar11,(ulonglong)(iVar4 * uVar8));
            uVar14 = uVar14 + 1;
            puVar11 = (undefined8 *)((longlong)puVar11 + local_a8);
            puVar10 = (undefined8 *)
                      ((longlong)local_b0 +
                      (ulonglong)
                      *(uint *)((ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x138 + param_2));
            local_b0 = puVar10;
          } while (uVar14 <= uVar1);
        }
      }
      iVar4 = *(int *)((ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x138 + param_2);
      local_60 = (ulonglong)(uint)(iVar4 * local_98._4_4_);
      local_58 = (ulonglong)(iVar4 * local_88);
      (**(code **)(**(longlong **)(local_80 + param_2) + 0x48))
                (*(longlong **)(local_80 + param_2),0,&local_60);
    }
  }
  FUN_180017c80(param_1,param_2,(undefined4 *)&local_98,param_7);
  return;
}

