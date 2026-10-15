/*
 * FUN_1801a8460 at 1801a8460
 * undefined FUN_1801a8460(void)
 * Address ranges: 1801a8460-1801a8abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801a8460(longlong param_1,byte param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  ulonglong in_stack_fffffffffffffef0;
  longlong *local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  uVar16 = *(uint *)(param_1 + 0x2c);
  if (10 < uVar16 - 0x15) {
    uVar10 = 7;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar10 = 5;
    }
    if (((uVar10 < *(uint *)(&DAT_18022e050 + (ulonglong)uVar16 * 4)) ||
        (*(int *)(param_1 + 0x38) != 0)) && (2 < *(int *)(param_1 + 0x44) - 3U)) {
      iVar8 = *(int *)(param_1 + 0x34);
      plVar1 = (longlong *)(param_1 + 0x154);
      if (*plVar1 != 0) goto LAB_1801a8598;
      uVar18 = 0x1f;
      if ((&DAT_18022dc68)[uVar16] == '\0') {
        uVar18 = 0x1c;
      }
      if (iVar8 == 1) {
LAB_1801a8534:
        uVar14 = 0;
      }
      else {
        lVar13 = 0x30;
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar13 = 0x38;
        }
        uVar14 = uVar18;
        if (*(uint *)(param_1 + lVar13) <= *(uint *)(param_1 + 0x30)) goto LAB_1801a8534;
      }
      lVar13 = 0x30;
      if (*(int *)(param_1 + 0x38) != 0) {
        lVar13 = 0x38;
      }
      FUN_1801a7528(param_1 + 0x140,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + lVar13),iVar8,1,0x1b,uVar18,uVar14,
                    *(undefined4 *)(&DAT_18022d000 + (ulonglong)uVar16 * 4),
                    *(undefined4 *)(&DAT_18022d000 + (ulonglong)uVar16 * 4),0x1c,
                    in_stack_fffffffffffffef0 & 0xffffffff00000000,1,1,iVar8 != 1,0);
      FUN_1801a9318(param_1);
LAB_1801a8598:
      if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x4d) == '\x01')) {
        FUN_1801a7f60(param_1 + 0x140,iVar8 != 1,0);
      }
      lVar13 = 0x16c;
      if (param_2 != 0) {
        lVar13 = 0x178;
      }
      iVar12 = *(int *)(param_1 + lVar13);
      if (*plVar1 == 0) {
        return iVar12;
      }
      uVar16 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        uVar10 = 0;
        local_70 = (code *)__hybrid_os_arm64x_dispatch_icall;
        local_b0 = plVar1;
        local_a4 = iVar8;
        do {
          if (*(int *)(param_1 + 0x30) != 0) {
            uVar2 = 1 << (ulonglong)(uVar10 & 0x1f);
            uVar15 = 0;
            plVar1 = (longlong *)(param_1 + 0x164);
            do {
              (*local_70)();
              cVar7 = (*extraout_x11)(param_1,uVar15,uVar10,1);
              uVar11 = 0;
              if (cVar7 != '\0') {
                uVar11 = uVar2;
              }
              lVar13 = 0x38;
              if (*(int *)(param_1 + 0x38) == 0) {
                lVar13 = 0x30;
              }
              uVar17 = (ulonglong)(uVar15 + *(int *)(param_1 + lVar13) * uVar10);
              if (*(char *)(param_1 + 0x191) != '\0') {
                uVar3 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar15 & 0x1f);
                uVar4 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar15 & 0x1f);
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                thunk_FUN_180223c20((uVar17 << 5 | 0x10) + *plVar1,0,0,uVar4,uVar3);
              }
              uVar5 = uVar17 * 0x20;
              iVar8 = thunk_FUN_180223d24((uVar5 | 0x10) + *plVar1);
              if (iVar8 == 0) {
                iVar8 = *(int *)(param_1 + 0x3c);
                local_68 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),
                                         auStack_58,*(undefined4 *)(param_1 + 0x8c),0);
                local_60 = *(undefined8 *)(param_1 + 0x74);
                local_a8 = *(undefined4 *)(param_1 + 0x188);
                uVar9 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),
                                      auStack_50,*(undefined4 *)(param_1 + 0x170),uVar17);
                lVar13 = uVar5 + *plVar1;
                FUN_1801a4500(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x2c),
                              uVar15,uVar10,uVar15 + iVar8 * uVar10,uVar17,
                              *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar13 + 0x10),
                              *(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x18),
                              *(undefined4 *)(lVar13 + 0x1c),*local_b0,uVar9,local_a8,local_60,
                              local_68);
                thunk_FUN_180223bf8((uVar5 | 0x10) + *plVar1);
                uVar11 = uVar2;
              }
              uVar16 = uVar11 | uVar16;
              uVar15 = uVar15 + 1;
            } while (uVar15 < *(uint *)(param_1 + 0x30));
          }
          uVar10 = uVar10 + 1;
          iVar8 = local_a4;
        } while (uVar10 < *(uint *)(param_1 + 0x34));
      }
      *(undefined1 *)(param_1 + 0x191) = 0;
      if (*(char *)(param_1 + 0x4d) == '\x01') {
        FUN_1801a7d98(param_1 + 0x60,*(undefined4 *)(param_1 + 0x30));
        *(undefined1 *)(param_1 + 0x4d) = 2;
      }
      if (uVar16 == 0) {
        return iVar12;
      }
      lVar13 = 0x30;
      if (*(int *)(param_1 + 0x38) != 0) {
        lVar13 = 0x38;
      }
      FUN_1801aa0e8(param_1,param_1 + 0x140,uVar16,*(undefined4 *)(param_1 + 0x16c),iVar8 != 1,
                    *(undefined4 *)(param_1 + lVar13));
      return iVar12;
    }
  }
  uVar15 = 0;
  uVar16 = 0;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    local_b0 = (longlong *)(param_1 + 0x164);
    do {
      lVar13 = *local_b0;
      if (((lVar13 != 0) || (lVar13 = *(longlong *)(param_1 + 0x84), lVar13 != 0)) &&
         (iVar8 = thunk_FUN_180223d24(((ulonglong)(*(int *)(param_1 + 0x3c) * uVar16) << 5 | 0x10) +
                                      lVar13), iVar8 == 0)) {
        uVar15 = 1 << (ulonglong)(uVar16 & 0x1f) | uVar15;
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        uVar10 = 0;
        do {
          (*(code *)puVar6)();
          cVar7 = (*extraout_x11_00)(param_1,uVar10,uVar16,1);
          uVar10 = uVar10 + 1;
          uVar2 = 0;
          if (cVar7 != '\0') {
            uVar2 = 1 << (ulonglong)(uVar16 & 0x1f);
          }
          uVar15 = uVar15 | uVar2;
        } while (uVar10 < *(uint *)(param_1 + 0x30));
      }
      uVar10 = *(uint *)(param_1 + 0x34);
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar10);
  }
  iVar8 = *(int *)(param_1 + 0x16c);
  if ((param_2 & 1) == 0) {
    lVar13 = 0x8c;
    if (iVar8 != -1) {
      lVar13 = 0x16c;
    }
    iVar12 = *(int *)(param_1 + lVar13);
    goto LAB_1801a8a7c;
  }
  if (iVar8 == -1) {
    FUN_1801a7f60(param_1 + 0x60,uVar10 != 1,0);
    iVar12 = *(int *)(param_1 + 0x98);
    goto LAB_1801a8a7c;
  }
  iVar12 = *(int *)(param_1 + 0x178);
  if (*(int *)(param_1 + 0x178) != -1) goto LAB_1801a8a7c;
  uVar16 = *(uint *)(param_1 + 0x180);
  if ((uVar16 < 0x19) && ((0x1000800U >> (ulonglong)(uVar16 & 0x1f) & 1) != 0)) {
LAB_1801a894c:
    *(int *)(param_1 + 0x178) = iVar8;
    iVar12 = iVar8;
  }
  else {
    if (uVar16 == 0x1c) {
      uVar18 = 0x1d;
    }
    else if (uVar16 == 0x47) {
      uVar18 = 0x48;
    }
    else if (uVar16 == 0x4a) {
      uVar18 = 0x4b;
    }
    else {
      if (uVar16 != 0x4d) goto LAB_1801a894c;
      uVar18 = 0x4e;
    }
    lVar13 = *(longlong *)(param_1 + 0x74);
    iVar8 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)(param_1 + 0x14c) + 0x1930),1);
    *(int *)(param_1 + 0x178) = iVar8;
    if (iVar8 == -1) {
      iVar12 = -1;
    }
    else {
      iStack_9c = 9;
      if (uVar10 == 1) {
        iStack_9c = 5;
      }
      uStack_88 = 0;
      local_90 = 0;
      local_98 = 0x1688;
      if (iStack_9c == 5) {
        local_90 = 0xffffffff00000000;
        uStack_88 = 0x100000000;
      }
      else if (iStack_9c == 9) {
        uStack_88 = 0;
        local_90 = 0xffffffff00000000;
      }
      local_80 = 0;
      local_a0 = uVar18;
      FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x14c) + 0x1930),&local_b0,iVar8,0);
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(param_1 + 0x154);
      }
      FUN_18020d3a0(*(longlong *)(param_1 + 0x140) + 0x6d0,*(undefined4 *)(param_1 + 0x148),lVar13,
                    &local_a0,local_b0);
      iVar12 = *(int *)(param_1 + 0x178);
    }
  }
LAB_1801a8a7c:
  if (uVar15 != 0) {
    FUN_1801aa0e8(param_1,param_1 + 0x60,uVar15,*(undefined4 *)(param_1 + 0x8c),0,0);
  }
  return iVar12;
}

