/*
 * FUN_1800fd410 at 1800fd410
 * undefined FUN_1800fd410(void)
 * Address ranges: 1800fd410-1800fd693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fd410(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_150;
  longlong local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined1 auStack_b0 [4];
  int local_ac;
  longlong local_90;
  longlong lStack_88;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar7 = *(longlong *)*param_3;
    if ((lVar7 != 0) || (((longlong *)*param_3)[1] != 0)) {
      lVar10 = *(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x1ac0;
      if (lVar7 != 0) {
        *(int *)(*(longlong *)(lVar10 + 0x1e08) + 0x684) =
             *(int *)(*(longlong *)(lVar10 + 0x1e08) + 0x684) + 1;
        puVar6 = (undefined8 *)*param_3;
        FUN_1800f66b0(param_1,lVar10 + 0x900,puVar6[1],*puVar6,*(undefined4 *)(puVar6 + 4));
        lVar7 = *(longlong *)(lVar10 + 0x1e08);
        iVar4 = *(int *)(lVar7 + 0x684) + -1;
        *(int *)(lVar7 + 0x684) = iVar4;
        if ((iVar4 == 0) && (*(int *)(lVar7 + 0x680) <= *(int *)(lVar7 + 0x678))) {
          FUN_1800e8548(lVar7 + 8,0);
        }
        *(undefined8 *)*param_3 = 0;
        *(undefined4 *)(*param_3 + 0x20) = 0;
      }
      lVar2 = param_3[1];
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x50))(*(longlong **)(*param_3 + 8),auStack_e8);
      plVar5 = *(longlong **)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0xd78) * 8 + 0xd88);
      (**(code **)(*plVar5 + 0x50))(plVar5,auStack_70);
      FUN_1800e42e0(*(undefined8 *)(param_1 + 8),auStack_b0,lVar2,param_3[2],
                    CONCAT44(uStack_d4,local_d8),local_d0,local_60,local_58,0,0);
      lVar7 = *param_3;
      local_150 = param_3[1];
      lStack_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_148 = 0;
      uStack_118 = CONCAT44(local_d0,local_d8);
      local_110 = *(undefined8 *)(lVar7 + 8);
      local_108 = *(undefined8 *)(lVar7 + 0x18);
      local_100 = FUN_1800f1fa0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1b500),
                                *(undefined8 *)(lVar7 + 8));
      iVar4 = (*__imp_USER32_dll_IsRectEmpty)(param_3[2] + 0xc);
      if (iVar4 == 0) {
        uStack_118 = *(undefined8 *)(param_3[2] + 0x14);
        local_120 = *(undefined8 *)(param_3[2] + 0xc);
      }
      if (local_ac == 0) {
        local_138 = *(undefined8 *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0xd78) * 8 + 0xd88);
        puVar6 = (undefined8 *)
                 FUN_1800e7b48(*(undefined8 *)(lVar10 + 0x2238),auStack_f0,
                               *(undefined4 *)(lVar2 + 0xd98),*(undefined4 *)(lVar2 + 0xd78));
        local_130 = *puVar6;
        lStack_140 = lStack_88;
        local_148 = local_90;
        local_128 = FUN_1800f1fa0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1b500),local_138);
      }
      bVar9 = 0;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      uVar8 = 0;
      param_3[4] = lStack_88;
      param_3[3] = local_90;
      if (*(int *)(param_1 + 0x18) != 0) {
        do {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar8 * 8);
          bVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,param_2,&local_150,&local_170);
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
          bVar9 = bVar3 | bVar9;
        } while (uVar1 < *(uint *)(param_1 + 0x18));
        if (bVar9 != 0) {
          lVar7 = *param_3;
          if (local_170 == *(longlong *)(lVar7 + 0x10)) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
          }
          else {
            *(longlong *)(lVar7 + 8) = local_170;
            *(undefined8 *)(*param_3 + 0x18) = local_168;
            *(undefined4 *)(*param_3 + 0x24) = (undefined4)local_160;
          }
        }
      }
    }
  }
  return;
}

