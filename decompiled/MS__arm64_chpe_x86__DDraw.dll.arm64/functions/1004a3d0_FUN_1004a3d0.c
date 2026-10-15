/*
 * FUN_1004a3d0 at 1004a3d0
 * undefined FUN_1004a3d0(void)
 * Address ranges: 1004a3d0-1004a83f;1004a930-1004a97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1004a3d0(int param_1,undefined1 (*param_2) [16],int param_3,undefined8 *param_4,
                      uint param_5,undefined4 param_6)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 local_a0 [16];
  uint local_90;
  undefined1 (*local_8c) [16];
  undefined8 local_80;
  undefined8 uStack_78;
  uint *local_70;
  undefined4 *local_6c;
  int *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined1 auStack_4c [12];
  
  local_8c = param_2;
  bVar5 = FUN_10046fc0(param_1,param_5,param_6);
  iVar6 = param_1;
  if (param_3 != 0) {
    iVar6 = param_3;
  }
  if (((bVar5 & 1) != 0) || (uVar7 = 0x80070057, param_3 != 0)) {
    local_50 = *(uint *)(iVar6 + 0x1b8);
    uVar7 = 0x88760096;
    (*(code *)PTR_FUN_100ba2bc)(&local_80);
    (*(code *)PTR_FUN_100ba2bc)(&local_60);
    if (param_3 != 0) {
      (*(code *)PTR_FUN_100ba2b8)
                (&local_60,0,0,*(undefined4 *)(param_3 + 0x15c),*(undefined4 *)(param_3 + 0x158));
      (*(code *)PTR_FUN_100ba2b8)
                (&local_80,0,0,*(undefined4 *)(param_3 + 0x15c),*(undefined4 *)(param_3 + 0x158));
    }
    if (param_4 != (undefined8 *)0x0) {
      uStack_78 = param_4[1];
      local_80 = *param_4;
    }
    (*(code *)PTR_FUN_100ba244)(&local_60,&local_60,&local_80);
    if (param_3 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = (*(uint *)(param_3 + 0x1b8) & 0x210) == 0x200;
    }
    if ((((bVar5 & 1) != 0) || (bVar3)) ||
       ((iVar6 = (*(code *)PTR_FUN_100ba1d8)(&local_60,&local_80), iVar6 != 0 &&
        (iVar6 = (*(code *)PTR_FUN_100ba248)(&local_60), iVar6 == 0)))) {
      local_68 = (int *)(param_1 + 0xfc);
      local_6c = &DAT_100be150;
      piVar1 = (int *)(*local_68 + 0x11c);
      if (((&DAT_100be33a)[*piVar1 * 0x228] == '\0') &&
         ((*(uint *)(*local_68 + 0x104) >> 4 & 1) == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      local_70 = (uint *)(param_1 + 0x1b8);
      local_a0._0_8_ = 0;
      local_90 = *local_70 & 0x210;
      local_a0._12_4_ = *(undefined4 *)(param_1 + 0x158);
      local_a0._8_4_ = *(undefined4 *)(param_1 + 0x15c);
      if (local_90 == 0x200 && bVar2) {
        iVar6 = *piVar1 * 0x228;
        local_a0._8_8_ = *(undefined8 *)(iVar6 + 0x100be318);
        local_a0._0_8_ = *(undefined8 *)(&DAT_100be310 + iVar6);
      }
      auVar9._8_8_ = local_a0._8_8_;
      auVar9._0_8_ = local_a0._0_8_;
      local_60 = local_a0._0_8_;
      uStack_58 = local_a0._8_8_;
      if (local_8c != (undefined1 (*) [16])0x0) {
        if (bVar2) {
          auVar9 = *local_8c;
        }
        else {
          auVar9 = FUN_10054830(param_1);
        }
      }
      local_a0 = auVar9;
      (*(code *)PTR_FUN_100ba244)(&local_60,&local_60,local_a0);
      if (*(int *)(param_1 + 0x104) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(int *)(*(int *)(param_1 + 0x104) + 0x4c) == 0;
      }
      iVar6 = (*(code *)PTR_FUN_100ba1d8)(&local_60,local_a0);
      if (((iVar6 != 0) || (bVar4)) || (local_90 == 0x200 && bVar2)) {
        FUN_100a9d50(auStack_4c);
        iVar6 = 0;
        if (bVar5 == 0) {
          iVar6 = param_3;
        }
        FUN_10047410(param_1,iVar6);
        if ((bVar5 & 1) == 0) {
          uVar7 = 0x887602bb;
          if (local_6c[*(int *)(*(int *)(param_3 + 0xfc) + 0x11c) * 0x8a] ==
              local_6c[*(int *)(*local_68 + 0x11c) * 0x8a]) {
            local_8c = (undefined1 (*) [16])(param_3 + 8);
            if ((*local_8c)[0] != '\0') {
              FUN_1004f590(param_3);
            }
            uVar7 = 0x887601c2;
            if ((*local_8c)[0] == '\0') {
              if ((local_50 >> 0x11 & 1) == 0) {
LAB_1004a808:
                uVar7 = 2;
                if (!bVar3 || !bVar2) {
                  uVar7 = 0;
                }
                    /* WARNING: Could not recover jumptable at 0x1004a83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar8 = (*(code *)(&DAT_1004a97c +
                                  (char)(&DAT_1004a97c)[uVar7 | (local_90 == 0x200 && bVar2)] * 4))
                                  ();
                return uVar8;
              }
              if (local_a0._8_4_ - local_a0._0_4_ == (int)uStack_78 - (int)local_80) {
                if (local_a0._12_4_ - local_a0._4_4_ == uStack_78._4_4_ - local_80._4_4_) {
                  uVar8 = FUN_1004cb90(param_3 + 0x198,param_1 + 0x198,0);
                  if ((uVar8 & 1) != 0) goto LAB_1004a808;
                }
              }
              uVar7 = 0x80004001;
            }
          }
        }
        else if (((((param_5 & 0x20400) != 0) && ((*local_70 >> 0x11 & 1) == 0)) ||
                 ((uVar7 = 0x80070057, (param_5 >> 0x19 & 1) != 0 && ((*local_70 >> 0x11 & 1) != 0))
                 )) && (uVar7 = 0x80004001, (*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0)) {
          if (local_90 == 0x200 && bVar2) {
            uVar7 = FUN_100499b0();
          }
          else {
            uVar7 = FUN_100491f0(param_1,local_a0,0,&local_80,param_5,param_6,0,0,1);
          }
        }
        FUN_10047500(param_1,~uVar7 >> 0x1f);
        FUN_100a9ca0(auStack_4c);
      }
    }
  }
  return (ulonglong)uVar7;
}

