/*
 * FUN_1800f5174 at 1800f5174
 * undefined __fastcall FUN_1800f5174(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 1800f5174-1800f5436
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5174(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  byte bVar5;
  BOOL BVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  byte bVar14;
  longlong local_res8 [4];
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  ulonglong local_150;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  uint local_130;
  uint local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint local_f0;
  int local_ec;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_b8 [16];
  uint local_a8;
  uint local_a0;
  undefined1 local_80 [16];
  uint local_70;
  uint local_68;
  ulonglong uVar10;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)*param_3;
    if ((lVar1 != 0) || (((longlong *)*param_3)[1] != 0)) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar9 = (ulonglong)param_2 * 0x1ac0;
      if (lVar1 != 0) {
        piVar13 = (int *)(*(longlong *)(lVar9 + 0x1e08 + lVar2) + 0x684);
        *piVar13 = *piVar13 + 1;
        puVar3 = (ulonglong *)*param_3;
        FUN_1800eec60(lVar1,lVar2 + 0x900 + lVar9,puVar3[1],*puVar3,(int)puVar3[4]);
        lVar1 = *(longlong *)(lVar9 + 0x1e08 + lVar2);
        piVar13 = (int *)(lVar1 + 0x684);
        *piVar13 = *piVar13 + -1;
        if ((*piVar13 == 0) && (*(int *)(lVar1 + 0x680) <= *(int *)(lVar1 + 0x678))) {
          FUN_1800e2ae8(lVar1 + 8,'\0');
        }
        *(undefined8 *)*param_3 = 0;
        *(undefined4 *)(*param_3 + 0x20) = 0;
      }
      lVar1 = param_3[1];
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x50))(*(longlong **)(*param_3 + 8),local_b8);
      plVar7 = *(longlong **)(lVar1 + 0xd88 + (ulonglong)*(uint *)(lVar1 + 0xd78) * 8);
      (**(code **)(*plVar7 + 0x50))(plVar7,local_80);
      piVar13 = (int *)param_3[2];
      lVar11 = lVar1;
      FUN_1800de740(*(longlong *)(param_1 + 8),&local_f0,lVar1,piVar13,local_a8,local_a0,local_70,
                    local_68,0,0);
      lVar4 = *param_3;
      local_168 = param_3[1];
      local_148 = 0;
      local_130 = local_a8;
      local_12c = local_a0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      local_140 = 0;
      local_138 = 0;
      local_128 = *(undefined8 *)(lVar4 + 8);
      local_120 = *(undefined8 *)(lVar4 + 0x18);
      local_118 = FUN_1800eaac0(*(longlong **)(*(longlong *)(param_1 + 8) + 0x1b500),
                                *(ulonglong *)(lVar4 + 8),lVar11,(uint)piVar13);
      BVar6 = IsRectEmpty((RECT *)(param_3[2] + 0xc));
      if (BVar6 == 0) {
        lVar4 = param_3[2];
        local_138 = *(undefined8 *)(lVar4 + 0xc);
        local_130 = *(uint *)(lVar4 + 0x14);
        local_12c = *(uint *)(lVar4 + 0x18);
      }
      if (local_ec == 0) {
        local_150 = *(ulonglong *)(lVar1 + 0xd88 + (ulonglong)*(uint *)(lVar1 + 0xd78) * 8);
        uVar8 = *(uint *)(lVar1 + 0xd78);
        uVar12 = (ulonglong)*(uint *)(lVar1 + 0xd98);
        plVar7 = FUN_1800e1d04(*(longlong *)(lVar9 + 0x2238 + lVar2),local_res8,
                               *(uint *)(lVar1 + 0xd98),uVar8);
        local_148 = *plVar7;
        local_160 = CONCAT44(local_cc,local_d0);
        local_158 = CONCAT44(local_c4,local_c8);
        local_140 = FUN_1800eaac0(*(longlong **)(*(longlong *)(param_1 + 8) + 0x1b500),local_150,
                                  uVar12,uVar8);
      }
      *(undefined4 *)(param_3 + 3) = local_d0;
      bVar14 = 0;
      *(undefined4 *)((longlong)param_3 + 0x1c) = local_cc;
      *(undefined4 *)(param_3 + 4) = local_c8;
      *(undefined4 *)((longlong)param_3 + 0x24) = local_c4;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        do {
          plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar10 * 8);
          bVar5 = (**(code **)(*plVar7 + 0x40))(plVar7,(ulonglong)param_2,&local_168,&local_108);
          bVar14 = bVar14 | bVar5;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(param_1 + 0x18));
        if (bVar14 != 0) {
          lVar1 = *param_3;
          if (local_108 == *(longlong *)(lVar1 + 0x10)) {
            *(undefined8 *)(lVar1 + 0x10) = 0;
          }
          else {
            *(longlong *)(lVar1 + 8) = local_108;
            *(undefined8 *)(*param_3 + 0x18) = uStack_100;
            *(undefined4 *)(*param_3 + 0x24) = (undefined4)local_f8;
          }
        }
      }
    }
  }
  return;
}

