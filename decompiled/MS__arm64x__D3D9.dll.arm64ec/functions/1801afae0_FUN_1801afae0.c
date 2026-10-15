/*
 * FUN_1801afae0 at 1801afae0
 * undefined FUN_1801afae0(void)
 * Address ranges: 1801afae0-1801b006b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801afae0(longlong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    iVar5 = FUN_1801a8460(param_1,param_2);
    return iVar5;
  }
  uVar11 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      if (*(int *)(param_1 + 0x30) != 0) {
        uVar10 = 0;
        uVar9 = 1 << (ulonglong)(uVar6 & 0x1f);
        do {
          if (*(longlong *)(param_1 + 0x84) != 0) {
            iVar5 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x84) +
                                        (ulonglong)(*(int *)(param_1 + 0x3c) * uVar6) * 0x20 + 0x10)
            ;
            uVar1 = 0;
            if (iVar5 == 0) {
              uVar1 = uVar9;
            }
            uVar11 = uVar1 | uVar11;
          }
          cVar4 = FUN_1801adfc0(param_1,uVar10,uVar6,1);
          uVar10 = uVar10 + 1;
          uVar1 = 0;
          if (cVar4 != '\0') {
            uVar1 = uVar9;
          }
          uVar11 = uVar11 | uVar1;
        } while (uVar10 < *(uint *)(param_1 + 0x30));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x34));
  }
  lVar8 = *(longlong *)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    if (lVar8 == 0) {
      FUN_1801acfa8(param_1);
      FUN_1801bad48(&local_90);
      FUN_1801a7bc8(param_1 + 0x140,*(undefined8 *)(param_1 + 0x74),local_8c,0,
                    *(undefined4 *)(&DAT_18022d000 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4));
    }
    return *(int *)(param_1 + 0x16c);
  }
  if (lVar8 == 0) {
    uVar6 = FUN_1801bad48(&local_90,*(undefined4 *)(param_1 + 0x2c));
    iVar5 = local_8c;
    if (*(char *)(param_1 + 0x24c) != '\0') {
      lVar8 = 0x40;
      if (uVar6 == 0x15) {
        lVar8 = 0x50;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x130) + lVar8);
    }
    if ((*(int *)(param_1 + 0x34) == 1) || (iVar7 = iVar5, *(uint *)(param_1 + 0x38) < 2)) {
      iVar7 = 0;
    }
    FUN_1801a7bc8(param_1 + 0x140,*(undefined8 *)(param_1 + 0x74),iVar5,iVar7,
                  *(undefined4 *)(&DAT_18022d000 + (ulonglong)uVar6 * 4));
  }
  iVar5 = *(int *)(param_1 + 0x16c);
  local_a0 = iVar5;
  if ((param_2 == '\0' || iVar5 == -1) ||
     (local_a0 = *(int *)(param_1 + 0x178), *(int *)(param_1 + 0x178) != -1)) goto LAB_1801afd88;
  uVar6 = *(uint *)(param_1 + 0x180);
  if ((uVar6 < 0x19) && ((0x1000800U >> (ulonglong)(uVar6 & 0x1f) & 1) != 0)) {
LAB_1801afc94:
    *(int *)(param_1 + 0x178) = iVar5;
    local_a0 = iVar5;
  }
  else {
    if (uVar6 == 0x1c) {
      uVar12 = 0x1d;
    }
    else if (uVar6 == 0x47) {
      uVar12 = 0x48;
    }
    else if (uVar6 == 0x4a) {
      uVar12 = 0x4b;
    }
    else {
      if (uVar6 != 0x4d) goto LAB_1801afc94;
      uVar12 = 0x4e;
    }
    iVar5 = *(int *)(param_1 + 0x34);
    lVar8 = *(longlong *)(param_1 + 0x74);
    iVar7 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)(param_1 + 0x14c) + 0x1930),1);
    *(int *)(param_1 + 0x178) = iVar7;
    if (iVar7 == -1) {
      local_a0 = -1;
    }
    else {
      local_8c = 9;
      if (iVar5 == 1) {
        local_8c = 5;
      }
      uStack_78 = 0;
      local_80 = 0;
      local_88 = 0x1688;
      if (local_8c == 5) {
        local_80 = 0xffffffff00000000;
        uStack_78 = 0x100000000;
      }
      else if (local_8c == 9) {
        uStack_78 = 0;
        local_80 = 0xffffffff00000000;
      }
      local_70 = 0;
      local_90 = uVar12;
      FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x14c) + 0x1930),&local_c8,iVar7,0);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x154);
      }
      FUN_18020d3a0(*(longlong *)(param_1 + 0x140) + 0x6d0,*(undefined4 *)(param_1 + 0x148),lVar8,
                    &local_90,local_c8);
      local_a0 = *(int *)(param_1 + 0x178);
    }
  }
LAB_1801afd88:
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if ((uVar11 != 0) && (1 < *(uint *)(param_1 + 0x38))) {
    iVar5 = *(int *)(param_1 + 0x34);
    iVar7 = *(int *)(param_1 + 0x16c);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar6 = (*extraout_x11)(param_1,0);
    (*(code *)puVar3)(0x180224000);
    local_b0 = (*extraout_x11_00)(param_1,0);
    local_c8 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      local_a8 = (uint)(iVar5 != 1);
      uVar10 = 0;
      local_b8 = uVar11;
      local_b4 = uVar6;
      local_ac = iVar7;
      do {
        if (((1 << (ulonglong)(uVar10 & 0x1f) & local_b8) != 0) &&
           (uVar6 = 1, local_c0 = param_1, 1 < *(uint *)(param_1 + 0x38))) {
          do {
            lVar8 = local_c0;
            uVar11 = uVar6 - 1;
            local_a4 = local_b4 >> (ulonglong)(uVar11 & 0x1f);
            if (local_a4 == 0) {
              local_a4 = 1;
            }
            uVar9 = local_b0 >> (ulonglong)(uVar11 & 0x1f);
            if (uVar9 == 0) {
              uVar9 = 1;
            }
            uVar1 = local_b4 >> (ulonglong)(uVar6 & 0x1f);
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            uVar2 = local_b0 >> (ulonglong)(uVar6 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            fVar15 = 1.0;
            if (*(char *)(local_c0 + 0x4c) == '\0') {
              fVar15 = 0.5;
            }
            iVar7 = uVar6 + *(int *)(local_c0 + 0x3c) * uVar10;
            FUN_18020d168(*(undefined8 *)(*(longlong *)(local_c0 + 0x58) + 0x1938),auStack_58,
                          *(undefined4 *)(local_c0 + 0x90),iVar7);
            param_1 = local_c0;
            iVar5 = local_ac;
            if (local_ac == -1) {
              iVar5 = *(int *)(lVar8 + 0x8c);
            }
            FUN_18020d168(*(undefined8 *)(*(longlong *)(local_c0 + 0x58) + 0x1930),auStack_60,iVar5,
                          local_a8);
            fVar14 = (float)uVar9;
            fVar13 = (float)local_a4;
            uVar9 = 0x100;
            if (*(char *)(param_1 + 0x4c) == '\0') {
              uVar9 = 0;
            }
            FUN_1801a4848(0x3efd70a4,0x3efd70a4,(float)uVar1 + 0.495,(float)uVar2 + 0.495,
                          fVar15 / fVar13,fVar15 / fVar14,(fVar13 + fVar15) / fVar13,
                          SUB41((fVar14 + fVar15) / fVar14,0),*(undefined8 *)(param_1 + 0x130),
                          *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),uVar6,
                          iVar7,uVar11,uVar10,iVar7 + -1,*(undefined8 *)(param_1 + 0x74),0,
                          *(undefined8 *)(param_1 + 0x74),0,0,auStack_58,&local_c8,auStack_60,
                          &local_c8,&local_c8,*(undefined4 *)(param_1 + 0xa8),0,0,
                          *(char *)(param_1 + 0x4c),(uVar9 >> 8) << 0x10 | 0x80000016,0);
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(param_1 + 0x38));
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x34));
    }
  }
  return local_a0;
}

