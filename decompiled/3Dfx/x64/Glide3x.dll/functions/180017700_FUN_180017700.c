/*
 * FUN_180017700 at 180017700
 * undefined __fastcall FUN_180017700(longlong param_1, longlong param_2, uint param_3, uint param_4, longlong param_5, int param_6, byte param_7)
 * Address ranges: 180017700-180017c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017700(longlong param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  int param_6,byte param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  longlong local_res8;
  ulonglong local_res10;
  uint local_res18;
  uint local_res20;
  uint local_108;
  uint local_104;
  undefined4 local_100;
  uint local_fc;
  uint local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar15 = *(uint *)(param_2 + 0x24);
  uVar1 = *(uint *)(param_2 + 0x20);
  local_res8 = param_1;
  local_res18 = param_3;
  puVar9 = FUN_180019f8c(&local_108,param_3,param_4,uVar1,uVar15,param_6,param_7);
  uVar16 = puVar9[1];
  uVar2 = puVar9[3];
  local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*puVar9);
  uVar3 = puVar9[2];
  *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar2 - uVar16 >> 4);
  iVar7 = (uint)param_7 * 2 + 2;
  local_d8 = 0;
  local_d0 = 0;
  uVar12 = iVar7 * param_6;
  local_c4 = 1;
  local_res10 = CONCAT44(local_res10._4_4_,uVar12);
  local_c8 = uVar15;
  if (local_res18 < param_4) {
    local_d8 = (ulonglong)uVar16 << 0x20;
    local_c8 = (uVar3 != 0) + uVar2;
  }
  lVar13 = (ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x110;
  lVar4 = *(longlong *)(*(longlong *)(local_res8 + 0x140) + 0x3330);
  local_res20 = uVar3;
  local_cc = uVar1;
  if (((*(char *)((ulonglong)*(uint *)(*(longlong *)(local_res8 + 0x140) + 0x3338) * 0x20 + 0x6e8 +
                 lVar4) == '\0') || (param_5 == 0)) ||
     (cVar6 = FUN_180045cec(*(longlong **)(lVar4 + 0x1b500),*(ulonglong *)(lVar13 + param_2),
                            (uint)lVar4), cVar6 == '\0')) {
    lVar4 = local_res8;
    local_80 = *(ulonglong *)(lVar13 + param_2);
    local_78 = 0;
    local_b8 = 1;
    local_res10 = (ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x120;
    local_b0 = 0;
    local_c0 = *(undefined8 *)(local_res10 + param_2);
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    uStack_58 = 0;
    _uStack_a8 = CONCAT44(*(undefined4 *)(param_2 + 0x20),
                          *(undefined4 *)
                           ((ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x134 + param_2));
    _local_a0 = CONCAT44(1,*(undefined4 *)(param_2 + 0x24));
    local_e8 = (undefined8 *)((ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x138);
    uStack_98 = (ulonglong)*(uint *)((longlong)local_e8 + param_2);
    FUN_18004a068(*(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x140) + 0x3340) + 0x1508),
                  local_80,0,0,0x800);
    FUN_18004a068(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x3340) + 0x1508),
                  *(ulonglong *)(local_res10 + param_2),0,1,0x400);
    FUN_18004b068(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x3340) + 0x1508),
                  &local_c0,0,local_d8._4_4_,0,&local_80,&local_d8);
    FUN_18004a068(*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x3340) + 0x1508),
                  *(ulonglong *)(local_res10 + param_2),0,1,0);
    uVar10 = FUN_18004a144(*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x3340) + 0x1508));
    *(undefined8 *)(param_2 + 0xd0) = uVar10;
    FUN_1800182a8(lVar4,param_2,param_7);
    puVar5 = local_e8;
    if (param_5 == 0) {
      return;
    }
    local_res8 = 0;
    local_90 = (ulonglong)(uint)(*(int *)((longlong)local_e8 + param_2) * local_d8._4_4_);
    local_88 = (ulonglong)(*(int *)((longlong)local_e8 + param_2) * local_c8);
    iVar8 = (**(code **)(**(longlong **)(local_res10 + param_2) + 0x40))
                      (*(longlong **)(local_res10 + param_2),0,&local_90,&local_res8);
    if (iVar8 < 0) {
      return;
    }
    puVar14 = (undefined8 *)
              ((ulonglong)(uVar16 * *(int *)((longlong)puVar5 + param_2)) + local_res8);
    if ((uint)local_f0 != 0) {
      local_e8 = puVar14;
      FUN_180061330((undefined8 *)((ulonglong)local_res18 + param_5),
                    (undefined8 *)((ulonglong)(iVar7 * (uint)local_f0) + (longlong)puVar14),
                    (ulonglong)((*(int *)(param_2 + 0x20) - (uint)local_f0) * iVar7));
      puVar14 = (undefined8 *)
                ((ulonglong)*(uint *)((longlong)puVar5 + param_2) + (longlong)local_e8);
      uVar16 = uVar16 + 1;
    }
    local_f0 = (undefined8 *)((ulonglong)(uVar16 * uVar12) + param_5);
    if (uVar16 <= uVar2) {
      local_e8 = (undefined8 *)(ulonglong)uVar12;
      do {
        uVar15 = uVar3;
        if (uVar16 != uVar2) {
          uVar15 = *(uint *)(param_2 + 0x20);
        }
        FUN_180061330(local_f0,puVar14,(ulonglong)(iVar7 * uVar15));
        uVar16 = uVar16 + 1;
        local_f0 = (undefined8 *)((longlong)local_f0 + (longlong)local_e8);
        puVar14 = (undefined8 *)
                  ((longlong)puVar14 +
                  (ulonglong)*(uint *)((ulonglong)(-(uint)(param_7 != 0) & 0x30) + 0x138 + param_2))
        ;
      } while (uVar16 <= uVar2);
    }
    plVar11 = *(longlong **)(local_res10 + param_2);
  }
  else {
    FUN_1800182a8(local_res8,param_2,param_7);
    iVar8 = (**(code **)(**(longlong **)(lVar13 + param_2) + 0x40))
                      (*(longlong **)(lVar13 + param_2),0,0);
    if (iVar8 < 0) {
      return;
    }
    uVar15 = uVar16;
    if ((uint)local_f0 != 0) {
      local_108 = (uint)local_f0;
      local_100 = 0;
      local_fc = uVar3;
      if (uVar2 != uVar16) {
        local_fc = *(uint *)(param_2 + 0x20);
      }
      uVar15 = uVar16 + 1;
      local_f4 = 1;
      local_104 = uVar16;
      local_f8 = uVar15;
      (**(code **)(**(longlong **)(lVar13 + param_2) + 0x68))
                (*(longlong **)(lVar13 + param_2),
                 (ulonglong)(uVar16 * (uint)local_res10) +
                 (ulonglong)(iVar7 * (uint)local_f0) + param_5,local_res10 & 0xffffffff,0,0,
                 &local_108);
      uVar12 = (uint)local_res10;
    }
    if (uVar15 <= uVar2) {
      local_fc = *(uint *)(param_2 + 0x20);
      local_f8 = uVar2;
      if (uVar3 == local_fc) {
        local_f8 = uVar2 + 1;
      }
      local_108 = 0;
      local_100 = 0;
      local_f4 = 1;
      local_104 = uVar15;
      (**(code **)(**(longlong **)(lVar13 + param_2) + 0x68))
                (*(longlong **)(lVar13 + param_2),(ulonglong)(uVar15 * uVar12) + param_5,uVar12,0,0,
                 &local_108);
      uVar15 = uVar2;
      if (((uVar3 != *(uint *)(param_2 + 0x20)) || (uVar15 = uVar2 + 1, uVar2 == uVar2 + 1)) &&
         (uVar3 != 0)) {
        local_f8 = uVar2 + 1;
        local_108 = 0;
        local_100 = 0;
        local_f4 = 1;
        local_104 = uVar15;
        local_fc = uVar3;
        (**(code **)(**(longlong **)(lVar13 + param_2) + 0x68))
                  (*(longlong **)(lVar13 + param_2),(ulonglong)(uVar15 * uVar12) + param_5,uVar12,0,
                   0,&local_108);
      }
    }
    plVar11 = *(longlong **)(lVar13 + param_2);
  }
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  (**(code **)(*plVar11 + 0x48))(plVar11,0,&local_e8);
  return;
}

