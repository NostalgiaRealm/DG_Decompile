/*
 * FUN_18021c7a0 at 18021c7a0
 * undefined FUN_18021c7a0(void)
 * Address ranges: 18021c7a0-18021ca4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021c7a0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_160;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined1 auStack_c0 [4];
  int local_bc;
  longlong local_a0;
  longlong lStack_98;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined4 local_68;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar7 = *(longlong *)*param_3;
    if ((lVar7 != 0) || (((longlong *)*param_3)[1] != 0)) {
      lVar10 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
      if (lVar7 != 0) {
        *(int *)(*(longlong *)(lVar10 + 0x1e08) + 0x684) =
             *(int *)(*(longlong *)(lVar10 + 0x1e08) + 0x684) + 1;
        puVar6 = (undefined8 *)*param_3;
        FUN_180217178(param_1,lVar10 + 0x900,puVar6[1],*puVar6,*(undefined4 *)(puVar6 + 4));
        lVar7 = *(longlong *)(lVar10 + 0x1e08);
        iVar4 = *(int *)(lVar7 + 0x684) + -1;
        *(int *)(lVar7 + 0x684) = iVar4;
        if ((iVar4 == 0) && (*(int *)(lVar7 + 0x680) <= *(int *)(lVar7 + 0x678))) {
          FUN_180207560(lVar7 + 8,0);
        }
        *(undefined8 *)*param_3 = 0;
        *(undefined4 *)(*param_3 + 0x20) = 0;
      }
      puVar2 = __hybrid_os_arm64x_dispatch_icall;
      lVar1 = param_3[1];
      uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar5,auStack_f8);
      uVar5 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)(uVar5,auStack_80);
      FUN_1802014c0(*(undefined8 *)(param_1 + 8),auStack_c0,lVar1,param_3[2],
                    CONCAT44(uStack_e4,local_e8),local_e0,local_70,local_68,0,0);
      lVar7 = *param_3;
      local_160 = param_3[1];
      lStack_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_158 = 0;
      uStack_128 = CONCAT44(local_e0,local_e8);
      local_120 = *(undefined8 *)(lVar7 + 8);
      local_118 = *(undefined8 *)(lVar7 + 0x18);
      local_110 = FUN_18020e6e8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1b500),
                                *(undefined8 *)(lVar7 + 8));
      iVar4 = thunk_FUN_180223d24(param_3[2] + 0xc);
      if (iVar4 == 0) {
        uStack_128 = *(undefined8 *)(param_3[2] + 0x14);
        local_130 = *(undefined8 *)(param_3[2] + 0xc);
      }
      if (local_bc == 0) {
        local_148 = *(undefined8 *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0xd78) * 8 + 0xd88);
        puVar6 = (undefined8 *)
                 FUN_18020d168(*(undefined8 *)(lVar10 + 0x2238),auStack_100,
                               *(undefined4 *)(lVar1 + 0xd98),*(undefined4 *)(lVar1 + 0xd78));
        local_140 = *puVar6;
        lStack_150 = lStack_98;
        local_158 = local_a0;
        local_138 = FUN_18020e6e8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1b500),local_148);
      }
      bVar9 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      uVar8 = 0;
      param_3[4] = lStack_98;
      param_3[3] = local_a0;
      if (*(int *)(param_1 + 0x18) != 0) {
        do {
          uVar5 = (*(code *)puVar2)();
          bVar3 = (*extraout_x11_01)(uVar5,param_2 & 0xffffffff,&local_160,&local_180);
          uVar8 = uVar8 + 1;
          bVar9 = bVar3 | bVar9;
        } while (uVar8 < *(uint *)(param_1 + 0x18));
        if (bVar9 != 0) {
          lVar7 = *param_3;
          if (local_180 == *(longlong *)(lVar7 + 0x10)) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
          }
          else {
            *(longlong *)(lVar7 + 8) = local_180;
            *(undefined8 *)(*param_3 + 0x18) = local_178;
            *(undefined4 *)(*param_3 + 0x24) = (undefined4)local_170;
          }
        }
      }
    }
  }
  return;
}

