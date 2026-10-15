/*
 * FUN_180091790 at 180091790
 * undefined FUN_180091790(void)
 * Address ranges: 180091790-180091da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180091790(longlong *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  ulonglong in_stack_ffffffffffffff00;
  longlong *local_a0 [2];
  undefined4 local_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar21 = *(uint *)((longlong)param_1 + 0x2c);
  if (10 < uVar21 - 0x15) {
    uVar19 = 7;
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      uVar19 = 5;
    }
    if (((uVar19 < *(uint *)(&DAT_180231470 + (ulonglong)uVar21 * 4)) || ((int)param_1[7] != 0)) &&
       (2 < *(int *)((longlong)param_1 + 0x44) - 3U)) {
      iVar8 = *(int *)((longlong)param_1 + 0x34);
      plVar11 = (longlong *)((longlong)param_1 + 0x154);
      if (*plVar11 != 0) goto LAB_1800918c8;
      uVar17 = 0x1f;
      if ((&DAT_180231738)[uVar21] == '\0') {
        uVar17 = 0x1c;
      }
      if (iVar8 == 1) {
LAB_180091870:
        uVar14 = 0;
      }
      else {
        lVar13 = 0x30;
        if ((int)param_1[7] != 0) {
          lVar13 = 0x38;
        }
        uVar14 = uVar17;
        if (*(uint *)((longlong)param_1 + lVar13) <= *(uint *)(param_1 + 6)) goto LAB_180091870;
      }
      lVar13 = 0x30;
      if ((int)param_1[7] != 0) {
        lVar13 = 0x38;
      }
      FUN_180090aa8(param_1 + 0x28,*(undefined4 *)((longlong)param_1 + 0x24),(int)param_1[5],
                    *(undefined4 *)((longlong)param_1 + lVar13),iVar8,1,0x1b,uVar17,uVar14,
                    *(undefined4 *)(&DAT_180231360 + (ulonglong)uVar21 * 4),
                    *(undefined4 *)(&DAT_180231360 + (ulonglong)uVar21 * 4),0x1c,
                    in_stack_ffffffffffffff00 & 0xffffffff00000000,1,1,iVar8 != 1,0);
      FUN_180092580(param_1);
LAB_1800918c8:
      if (((param_2 & 1) != 0) || (*(char *)((longlong)param_1 + 0x4d) == '\x01')) {
        FUN_1800913a0(param_1 + 0x28,iVar8 != 1,0);
      }
      lVar13 = 0x16c;
      if (param_2 != 0) {
        lVar13 = 0x178;
      }
      iVar12 = *(int *)((longlong)param_1 + lVar13);
      if (*plVar11 == 0) {
        return iVar12;
      }
      uVar19 = 0;
      uVar21 = 0;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        do {
          local_a0[0] = plVar11;
          if ((int)param_1[6] != 0) {
            uVar1 = 1 << (ulonglong)(uVar21 & 0x1f);
            uVar15 = 0;
            plVar11 = (longlong *)((longlong)param_1 + 0x164);
            do {
              cVar6 = (**(code **)(*param_1 + 8))(param_1,uVar15,uVar21,1);
              uVar16 = 0;
              if (cVar6 != '\0') {
                uVar16 = uVar1;
              }
              lVar13 = 0x38;
              if ((int)param_1[7] == 0) {
                lVar13 = 0x30;
              }
              uVar18 = (ulonglong)(uVar15 + *(int *)((longlong)param_1 + lVar13) * uVar21);
              if (*(char *)((longlong)param_1 + 0x191) != '\0') {
                uVar2 = *(uint *)(param_1 + 5) >> (ulonglong)(uVar15 & 0x1f);
                uVar3 = *(uint *)((longlong)param_1 + 0x24) >> (ulonglong)(uVar15 & 0x1f);
                if (uVar2 == 0) {
                  uVar2 = 1;
                }
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
                (*__imp_USER32_dll_SetRect)((uVar18 << 5 | 0x10) + *plVar11,0,0,uVar3,uVar2);
              }
              uVar4 = uVar18 * 0x20;
              iVar7 = (*__imp_USER32_dll_IsRectEmpty)((uVar4 | 0x10) + *plVar11);
              if (iVar7 == 0) {
                iVar7 = *(int *)((longlong)param_1 + 0x3c);
                uVar9 = FUN_1800e7b48(*(undefined8 *)(param_1[0xb] + 0x1930),auStack_60,
                                      *(undefined4 *)((longlong)param_1 + 0x8c),0);
                uVar20 = *(undefined8 *)((longlong)param_1 + 0x74);
                lVar5 = param_1[0x31];
                uVar10 = FUN_1800e7b48(*(undefined8 *)(param_1[0xb] + 0x1938),auStack_58,
                                       (int)param_1[0x2e],uVar18);
                lVar13 = uVar4 + *plVar11;
                FUN_18008dce0(param_1[0x26],*(undefined4 *)((longlong)param_1 + 0x2c),uVar15,uVar21,
                              uVar15 + iVar7 * uVar21,uVar18,param_1[2],
                              *(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x14),
                              *(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                              *local_a0[0],uVar10,(int)lVar5,uVar20,uVar9);
                (*__imp_USER32_dll_SetRectEmpty)((uVar4 | 0x10) + *plVar11);
                uVar16 = uVar1;
              }
              uVar15 = uVar15 + 1;
              uVar19 = uVar16 | uVar19;
            } while (uVar15 < *(uint *)(param_1 + 6));
          }
          uVar21 = uVar21 + 1;
          plVar11 = local_a0[0];
        } while (uVar21 < *(uint *)((longlong)param_1 + 0x34));
      }
      *(undefined1 *)((longlong)param_1 + 0x191) = 0;
      if (*(char *)((longlong)param_1 + 0x4d) == '\x01') {
        FUN_180091218(param_1 + 0xc,(int)param_1[6]);
        *(undefined1 *)((longlong)param_1 + 0x4d) = 2;
      }
      if (uVar19 == 0) {
        return iVar12;
      }
      lVar13 = 0x30;
      if ((int)param_1[7] != 0) {
        lVar13 = 0x38;
      }
      FUN_1800932a8(param_1,param_1 + 0x28,uVar19,*(undefined4 *)((longlong)param_1 + 0x16c),
                    iVar8 != 1,*(undefined4 *)((longlong)param_1 + lVar13));
      return iVar12;
    }
  }
  uVar15 = 0;
  uVar21 = 0;
  uVar19 = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    do {
      lVar13 = *(longlong *)((longlong)param_1 + 0x164);
      if (((lVar13 != 0) || (lVar13 = *(longlong *)((longlong)param_1 + 0x84), lVar13 != 0)) &&
         (iVar8 = (*__imp_USER32_dll_IsRectEmpty)
                            (((ulonglong)(*(int *)((longlong)param_1 + 0x3c) * uVar21) << 5 | 0x10)
                             + lVar13), iVar8 == 0)) {
        uVar15 = 1 << (ulonglong)(uVar21 & 0x1f) | uVar15;
      }
      if ((int)param_1[6] != 0) {
        uVar19 = 0;
        do {
          cVar6 = (**(code **)(*param_1 + 8))(param_1,uVar19,uVar21,1);
          uVar19 = uVar19 + 1;
          uVar1 = 0;
          if (cVar6 != '\0') {
            uVar1 = 1 << (ulonglong)(uVar21 & 0x1f);
          }
          uVar15 = uVar15 | uVar1;
        } while (uVar19 < *(uint *)(param_1 + 6));
      }
      uVar19 = *(uint *)((longlong)param_1 + 0x34);
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar19);
  }
  iVar8 = *(int *)((longlong)param_1 + 0x16c);
  if ((param_2 & 1) == 0) {
    lVar13 = 0x8c;
    if (iVar8 != -1) {
      lVar13 = 0x16c;
    }
    iVar12 = *(int *)((longlong)param_1 + lVar13);
    goto LAB_180091d60;
  }
  if (iVar8 == -1) {
    FUN_1800913a0(param_1 + 0xc,uVar19 != 1,0);
    iVar12 = (int)param_1[0x13];
    goto LAB_180091d60;
  }
  iVar12 = (int)param_1[0x2f];
  if ((int)param_1[0x2f] != -1) goto LAB_180091d60;
  uVar21 = *(uint *)(param_1 + 0x30);
  if ((uVar21 < 0x19) && ((0x1000800U >> (ulonglong)(uVar21 & 0x1f) & 1) != 0)) {
LAB_180091c28:
    *(int *)(param_1 + 0x2f) = iVar8;
    iVar12 = iVar8;
  }
  else {
    if (uVar21 == 0x1c) {
      uVar17 = 0x1d;
    }
    else if (uVar21 == 0x47) {
      uVar17 = 0x48;
    }
    else if (uVar21 == 0x4a) {
      uVar17 = 0x4b;
    }
    else {
      if (uVar21 != 0x4d) goto LAB_180091c28;
      uVar17 = 0x4e;
    }
    lVar13 = *(longlong *)((longlong)param_1 + 0x74);
    iVar8 = FUN_1800e7220(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0x14c) + 0x1930),1);
    *(int *)(param_1 + 0x2f) = iVar8;
    if (iVar8 == -1) {
      iVar12 = -1;
    }
    else {
      uStack_8c = 9;
      if (uVar19 == 1) {
        uStack_8c = 5;
      }
      uStack_78 = 0;
      local_80 = 0;
      local_88 = 0x1688;
      if (uStack_8c == 5) {
        local_80 = 0xffffffff00000000;
        uStack_78 = 0x100000000;
      }
      else if (uStack_8c == 9) {
        uStack_78 = 0;
        local_80 = 0xffffffff00000000;
      }
      local_70 = 0;
      local_90 = uVar17;
      FUN_1800e7b48(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0x14c) + 0x1930),local_a0,
                    iVar8,0);
      if (lVar13 == 0) {
        lVar13 = *(longlong *)((longlong)param_1 + 0x154);
      }
      plVar11 = *(longlong **)(param_1[0x28] + (ulonglong)*(uint *)(param_1 + 0x29) * 0x20 + 0x6d0);
      (**(code **)(*plVar11 + 0x90))(plVar11,lVar13,&local_90,local_a0[0]);
      iVar12 = (int)param_1[0x2f];
    }
  }
LAB_180091d60:
  if (uVar15 != 0) {
    FUN_1800932a8(param_1,param_1 + 0xc,uVar15,*(undefined4 *)((longlong)param_1 + 0x8c),0,0);
  }
  return iVar12;
}

