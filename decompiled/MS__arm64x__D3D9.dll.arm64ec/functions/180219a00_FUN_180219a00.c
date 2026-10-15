/*
 * FUN_180219a00 at 180219a00
 * undefined FUN_180219a00(void)
 * Address ranges: 180219a00-180219d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180219a00(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong param_8,
                  undefined4 param_9,longlong param_10,undefined4 param_11)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0 [4];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulonglong uStack_70;
  int local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  local_f0 = CONCAT44(local_f0._4_4_,param_4);
  puVar1 = (ulonglong *)(param_2 + 0xdb8);
  lVar13 = 0;
  local_e8 = param_8;
  local_c8 = param_5;
  uStack_c4 = param_6;
  local_c0[0] = param_7;
  do {
    if (puVar1[lVar13] != 0) {
      FUN_18021d418(param_1 + (ulonglong)uVar2 * 0x1ac0 + 0x21b8);
      puVar1[lVar13] = 0;
    }
    lVar10 = local_e8;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 2);
  iVar3 = (int)local_f0;
  local_f0 = CONCAT44(local_f0._4_4_,*(int *)(param_2 + 0xdc8));
  if (*(int *)(param_2 + 0xdc8) != -1) {
    lVar13 = *(longlong *)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x2230);
    thunk_FUN_1802236f8(lVar13 + 0x28);
    FUN_18020c678(lVar13,local_f0 & 0xffffffff,2);
    thunk_FUN_18022370c(lVar13 + 0x28);
    *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
  }
  if (((param_3 != 0) && (iVar3 != 0)) && (lVar10 != 0)) {
    local_78 = 0;
    local_68 = iVar3;
    local_54 = 0;
    local_e8 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    local_80[0] = 3;
    local_5c = 1;
    local_64 = 0x1b00010001;
    uStack_70 = (ulonglong)param_3;
    iVar7 = FUN_18020c7c8(*(undefined8 *)(local_e8 + 0x2230),2);
    *(int *)(param_2 + 0xdc8) = iVar7;
    if (iVar7 != -1) {
      uVar14 = (ulonglong)*(uint *)(param_2 + 0x10);
      local_d4 = 0;
      bVar5 = *(char *)(param_1 + uVar14 * 0x20 + 0x6e8) != '\0';
      uVar11 = 4;
      if (!bVar5) {
        uVar11 = 1;
      }
      uVar12 = 2;
      if (!bVar5) {
        uVar12 = 0;
      }
      local_e0 = CONCAT44(uVar12,uVar11);
      local_d8 = (uint)bVar5;
      uVar8 = FUN_18021a1e8(param_1 + uVar14 * 0x1ac0 + 0x21b8,&local_e0,0,local_80);
      if (uVar8 == 0) {
        local_f0 = 0;
        FUN_18020d338(param_1 + 0x6d0,uVar14,&local_e0,0,local_80,0,0);
        uVar8 = local_f0;
      }
      lVar13 = local_e8;
      *puVar1 = uVar8;
      if (uVar8 != 0) {
        local_b0 = 0x40000001c;
        local_a8 = 0x1688;
        local_90 = 0;
        local_a0 = 0xffffffff00000000;
        uStack_98 = 0;
        puVar9 = (undefined8 *)
                 FUN_18020d168(*(undefined8 *)(local_e8 + 0x2230),&local_f0,
                               *(undefined4 *)(param_2 + 0xdc8),0);
        FUN_18020d3a0(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),*puVar1,&local_b0,*puVar9);
        local_d8 = 0;
        local_e0 = 0;
        local_d4 = CONCAT44(iVar3,param_3);
        uStack_cc = 1;
        cVar6 = FUN_18020b680(*(undefined8 *)(lVar13 + 0x1e08),*puVar1,0,lVar13 + 0x1fd0,&local_e0,
                              lVar10,param_9,0);
        puVar4 = __hybrid_os_arm64x_dispatch_icall;
        if (cVar6 != '\0') {
          *(undefined4 *)(param_2 + 0xc48) = local_c8;
          *(undefined4 *)(param_2 + 0xc4c) = uStack_c4;
          *(undefined4 *)(param_2 + 0xc50) = local_c0[0];
          if (param_10 == 0) {
            return;
          }
          lVar10 = FUN_180219e88(param_1,*(undefined4 *)(param_2 + 0x10),local_80);
          *(longlong *)(param_2 + 0xdc0) = lVar10;
          if (lVar10 != 0) {
            puVar9 = (undefined8 *)
                     FUN_18020d168(*(undefined8 *)(lVar13 + 0x2230),local_c0,
                                   *(undefined4 *)(param_2 + 0xdc8),1);
            FUN_18020d3a0(param_1 + 0x6d0,*(undefined4 *)(param_2 + 0x10),
                          *(undefined8 *)(param_2 + 0xdc0),&local_b0,*puVar9);
            uVar14 = FUN_18020b680(*(undefined8 *)(lVar13 + 0x1e08),*(undefined8 *)(param_2 + 0xdc0)
                                   ,0,lVar13 + 0x1fd0,&local_e0,param_10,param_11,0);
            if ((uVar14 & 1) != 0) {
              return;
            }
            (*(code *)puVar4)(0x180224000);
            (*extraout_x11)();
            *(undefined8 *)(param_2 + 0xdc0) = 0;
          }
        }
        (*(code *)puVar4)(0x180224000);
        (*extraout_x11_00)();
        *puVar1 = 0;
      }
      iVar3 = *(int *)(param_2 + 0xdc8);
      if (iVar3 != -1) {
        lVar13 = *(longlong *)(local_e8 + 0x2230);
        thunk_FUN_1802236f8(lVar13 + 0x28);
        FUN_18020c678(lVar13,iVar3,2);
        thunk_FUN_18022370c(lVar13 + 0x28);
      }
      *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
    }
  }
  return;
}

