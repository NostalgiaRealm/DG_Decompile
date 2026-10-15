/*
 * FUN_1800987e0 at 1800987e0
 * undefined FUN_1800987e0(void)
 * Address ranges: 1800987e0-180098d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800987e0(longlong *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_ac;
  int local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(char *)((longlong)param_1 + 0x24d) == '\0') ||
     (*(char *)((longlong)param_1 + 0x24e) == '\0')) {
    iVar6 = FUN_180091790(param_1,param_2);
    return iVar6;
  }
  uVar11 = 0;
  uVar7 = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    do {
      if ((int)param_1[6] != 0) {
        uVar9 = 0;
        uVar13 = 1 << (ulonglong)(uVar7 & 0x1f);
        do {
          if (*(longlong *)((longlong)param_1 + 0x84) != 0) {
            iVar6 = (*__imp_USER32_dll_IsRectEmpty)
                              (*(longlong *)((longlong)param_1 + 0x84) +
                               (ulonglong)(*(int *)((longlong)param_1 + 0x3c) * uVar7) * 0x20 + 0x10
                              );
            uVar4 = 0;
            if (iVar6 == 0) {
              uVar4 = uVar13;
            }
            uVar11 = uVar4 | uVar11;
          }
          cVar5 = FUN_180096cd8(param_1,uVar9,uVar7,1);
          uVar9 = uVar9 + 1;
          uVar4 = 0;
          if (cVar5 != '\0') {
            uVar4 = uVar13;
          }
          uVar11 = uVar11 | uVar4;
        } while (uVar9 < *(uint *)(param_1 + 6));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((longlong)param_1 + 0x34));
  }
  lVar12 = *(longlong *)((longlong)param_1 + 0x154);
  if (*(int *)((longlong)param_1 + 0x44) - 3U < 3) {
    if (lVar12 == 0) {
      FUN_180095d10(param_1);
      func_0x0001801bad48(&local_a0);
      FUN_180091088(param_1 + 0x28,*(undefined8 *)((longlong)param_1 + 0x74),local_9c,0,
                    *(undefined4 *)
                     (&DAT_180231360 + (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 4));
    }
    return *(int *)((longlong)param_1 + 0x16c);
  }
  if (lVar12 == 0) {
    uVar7 = func_0x0001801bad48(&local_a0,*(undefined4 *)((longlong)param_1 + 0x2c));
    iVar6 = local_9c;
    if (*(char *)((longlong)param_1 + 0x24c) != '\0') {
      lVar12 = 0x40;
      if (uVar7 == 0x15) {
        lVar12 = 0x50;
      }
      iVar6 = *(int *)(param_1[0x26] + lVar12);
    }
    if ((*(int *)((longlong)param_1 + 0x34) == 1) || (iVar8 = iVar6, *(uint *)(param_1 + 7) < 2)) {
      iVar8 = 0;
    }
    FUN_180091088(param_1 + 0x28,*(undefined8 *)((longlong)param_1 + 0x74),iVar6,iVar8,
                  *(undefined4 *)(&DAT_180231360 + (ulonglong)uVar7 * 4));
  }
  iVar6 = *(int *)((longlong)param_1 + 0x16c);
  local_a8 = iVar6;
  if ((param_2 == '\0' || iVar6 == -1) || (local_a8 = (int)param_1[0x2f], (int)param_1[0x2f] != -1))
  goto LAB_180098aa0;
  uVar7 = *(uint *)(param_1 + 0x30);
  if ((uVar7 < 0x19) && ((0x1000800U >> (ulonglong)(uVar7 & 0x1f) & 1) != 0)) {
LAB_1800989a0:
    *(int *)(param_1 + 0x2f) = iVar6;
    local_a8 = iVar6;
  }
  else {
    if (uVar7 == 0x1c) {
      uVar14 = 0x1d;
    }
    else if (uVar7 == 0x47) {
      uVar14 = 0x48;
    }
    else if (uVar7 == 0x4a) {
      uVar14 = 0x4b;
    }
    else {
      if (uVar7 != 0x4d) goto LAB_1800989a0;
      uVar14 = 0x4e;
    }
    iVar6 = *(int *)((longlong)param_1 + 0x34);
    lVar12 = *(longlong *)((longlong)param_1 + 0x74);
    iVar8 = FUN_1800e7220(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0x14c) + 0x1930),1);
    *(int *)(param_1 + 0x2f) = iVar8;
    if (iVar8 == -1) {
      local_a8 = -1;
    }
    else {
      local_9c = 9;
      if (iVar6 == 1) {
        local_9c = 5;
      }
      uStack_88 = 0;
      local_90 = 0;
      local_98 = 0x1688;
      if (local_9c == 5) {
        local_90 = 0xffffffff00000000;
        uStack_88 = 0x100000000;
      }
      else if (local_9c == 9) {
        uStack_88 = 0;
        local_90 = 0xffffffff00000000;
      }
      local_80 = 0;
      local_a0 = uVar14;
      FUN_1800e7b48(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0x14c) + 0x1930),&local_c0,
                    iVar8,0);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)((longlong)param_1 + 0x154);
      }
      plVar10 = *(longlong **)(param_1[0x28] + (ulonglong)*(uint *)(param_1 + 0x29) * 0x20 + 0x6d0);
      (**(code **)(*plVar10 + 0x90))(plVar10,lVar12,&local_a0,local_c0);
      local_a8 = (int)param_1[0x2f];
    }
  }
LAB_180098aa0:
  if ((uVar11 != 0) && (1 < *(uint *)(param_1 + 7))) {
    iVar6 = *(int *)((longlong)param_1 + 0x34);
    iVar8 = *(int *)((longlong)param_1 + 0x16c);
    uVar7 = (**(code **)(*param_1 + 0x40))(param_1,0);
    uVar9 = (**(code **)(*param_1 + 0x48))(param_1,0);
    local_c0 = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      local_ac = (uint)(iVar6 != 1);
      uVar13 = 0;
      local_b8 = uVar11;
      local_b4 = uVar7;
      local_b0 = iVar8;
      do {
        if (((1 << (ulonglong)(uVar13 & 0x1f) & local_b8) != 0) &&
           (uVar7 = 1, 1 < *(uint *)(param_1 + 7))) {
          do {
            uVar4 = uVar7 - 1;
            uVar11 = local_b4 >> (ulonglong)(uVar4 & 0x1f);
            if (uVar11 == 0) {
              uVar11 = 1;
            }
            uVar1 = uVar9 >> (ulonglong)(uVar4 & 0x1f);
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            uVar2 = local_b4 >> (ulonglong)(uVar7 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            uVar3 = uVar9 >> (ulonglong)(uVar7 & 0x1f);
            if (uVar3 == 0) {
              uVar3 = 1;
            }
            fVar15 = 1.0;
            if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
              fVar15 = 0.5;
            }
            iVar8 = uVar7 + *(int *)((longlong)param_1 + 0x3c) * uVar13;
            FUN_1800e7b48(*(undefined8 *)(param_1[0xb] + 0x1938),auStack_68,(int)param_1[0x12],iVar8
                         );
            iVar6 = local_b0;
            if (local_b0 == -1) {
              iVar6 = *(int *)((longlong)param_1 + 0x8c);
            }
            FUN_1800e7b48(*(undefined8 *)(param_1[0xb] + 0x1930),auStack_70,iVar6,local_ac);
            fVar17 = (float)uVar1;
            fVar16 = (float)uVar11;
            uVar11 = 0x100;
            if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
              uVar11 = 0;
            }
            FUN_18008e010(0x3efd70a4,0x3efd70a4,(float)uVar2 + 0.495,(float)uVar3 + 0.495,
                          fVar15 / fVar16,fVar15 / fVar17,(fVar16 + fVar15) / fVar16,
                          (fVar17 + fVar15) / fVar17,param_1[0x26],
                          *(undefined4 *)((longlong)param_1 + 0x2c),
                          *(undefined4 *)((longlong)param_1 + 0x2c),uVar7,iVar8,uVar4,uVar13,
                          iVar8 + -1,*(undefined8 *)((longlong)param_1 + 0x74),0,
                          *(undefined8 *)((longlong)param_1 + 0x74),0,0,auStack_68,&local_c0,
                          auStack_70,&local_c0,&local_c0,(int)param_1[0x15],0,0,
                          *(char *)((longlong)param_1 + 0x4c),(uVar11 >> 8) << 0x10 | 0x80000016,0);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 7));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)((longlong)param_1 + 0x34));
    }
  }
  return local_a8;
}

