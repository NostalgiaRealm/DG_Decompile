/*
 * FUN_18008ad6c at 18008ad6c
 * byte __fastcall FUN_18008ad6c(longlong param_1, ulonglong param_2, int param_3, int param_4, int param_5, longlong * param_6, longlong * param_7, longlong param_8, int * param_9, RECT * param_10)
 * Address ranges: 18008ad6c-18008b588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18008ad6c(longlong param_1,ulonglong param_2,int param_3,int param_4,int param_5,
                  longlong *param_6,longlong *param_7,longlong param_8,int *param_9,RECT *param_10)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  LONG LVar5;
  LONG LVar6;
  LONG LVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  int local_res18;
  ulonglong in_stack_fffffffffffffe90;
  longlong lVar20;
  RECT local_148;
  longlong local_138;
  uint uStack_130;
  longlong local_128;
  uint local_120;
  uint local_118;
  uint local_114;
  undefined4 local_110;
  int local_10c;
  int local_108;
  undefined4 local_104;
  RECT local_100;
  RECT local_f0;
  longlong local_d8 [2];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  tagRECT local_68 [2];
  
  FUN_1800dfe48(*(longlong *)(param_1 + 0x1cf10),param_2,param_1);
  uVar19 = *(uint *)(param_8 + 0x40);
  uVar1 = *(uint *)(param_8 + 0x3c);
  local_148._0_8_ = *(ulonglong *)(param_8 + 0x2c);
  local_148._8_8_ = *(undefined8 *)(param_8 + 0x34);
  LVar5 = (**(code **)(*param_7 + 0x40))(param_7,param_4);
  LVar6 = (**(code **)(*param_7 + 0x48))(param_7,param_4);
  LVar7 = (**(code **)(*param_6 + 0x40))(param_6,param_2 & 0xffffffff);
  local_100.bottom = (**(code **)(*param_6 + 0x48))(param_6,param_2 & 0xffffffff);
  bVar2 = false;
  local_100.left = 0;
  local_100.top = 0;
  bVar4 = 1;
  local_f0.left = 0;
  local_f0.top = 0;
  local_100.right = LVar7;
  local_f0.right = LVar5;
  local_f0.bottom = LVar6;
  if ((*(char *)(param_8 + 0x4d) != '\0') || (*(char *)(param_8 + 0x4c) != '\0')) {
    IntersectRect(&local_148,&local_148,&local_100);
    bVar2 = true;
  }
  OffsetRect(&local_148,uVar1 - *(int *)(param_8 + 0x2c),uVar19 - *(int *)(param_8 + 0x30));
  if (bVar2) {
    IntersectRect(&local_148,&local_148,&local_f0);
  }
  OffsetRect(&local_148,*(int *)(param_8 + 0x2c) - uVar1,*(int *)(param_8 + 0x30) - uVar19);
  local_10c = (local_148.right - local_148.left) + uVar1;
  local_108 = (local_148.bottom - local_148.top) + uVar19;
  iVar16 = param_3 * *(int *)((longlong)param_6 + 0x3c) + (int)param_2;
  local_110 = 0;
  local_104 = 1;
  local_118 = uVar1;
  local_114 = uVar19;
  if (((*(int *)((ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 + 0x6cc +
                *(longlong *)(param_1 + 0x1cf10)) == 0xa000) &&
      (*(int *)((longlong)param_7 + 0x44) - 3U < 3)) &&
     (cVar3 = (**(code **)(*param_6 + 0xa8))(param_6), cVar3 != '\0')) {
    (**(code **)(*param_7 + 8))(param_7,param_2 & 0xffffffff,param_3,0);
    (**(code **)(*param_6 + 8))(param_6,param_2 & 0xffffffff,param_3,0);
    local_c8 = (float)uVar1;
    local_c0 = (float)((local_148.right - local_148.left) + uVar1);
    iVar13 = 0;
    local_c4 = (float)uVar19;
    local_bc = (float)((local_148.bottom - local_148.top) + uVar19);
    do {
      lVar11 = (longlong)iVar13;
      iVar13 = iVar13 + 4;
      *(float *)((longlong)&local_138 + lVar11) =
           (float)*(int *)((longlong)&local_148.left + lVar11);
    } while (iVar13 != 0x10);
    local_d8[0] = local_138;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_ac = param_5;
    local_98 = 0;
    uStack_90 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_b8 = (int)param_2;
    local_b4 = param_3;
    local_b0 = param_4;
    bVar4 = FUN_18008a934(param_1,(float *)local_d8,(longlong)param_6,(longlong)param_7);
    (**(code **)(*param_6 + 0x18))(param_6,iVar16,param_9);
    goto LAB_18008b4e9;
  }
  cVar3 = (**(code **)(*param_7 + 0xa8))(param_7);
  if (cVar3 != '\0') {
    (**(code **)(*param_7 + 8))(param_7,param_4,param_5,*(char *)(param_8 + 0x51) == '\0');
  }
  cVar3 = (**(code **)(*param_6 + 0xa8))(param_6);
  if (cVar3 != '\0') {
    (**(code **)(*param_6 + 8))(param_6,param_2 & 0xffffffff,param_3,0);
  }
  iVar13 = *(int *)(param_8 + 0x18);
  uVar19 = param_5 * *(int *)((longlong)param_7 + 0x3c) + param_4;
  if (iVar13 == 0) {
    BVar8 = IntersectRect(local_68,(RECT *)(param_7[0x12] + (ulonglong)uVar19 * 0x28 + 0x18),
                          param_10);
    if (BVar8 != 0) {
      (**(code **)*param_7)(param_7,param_4,param_5);
    }
    (**(code **)*param_6)(param_6,param_2 & 0xffffffff,param_3);
    uVar1 = *(uint *)(&DAT_1800ff000 + (ulonglong)*(uint *)((longlong)param_7 + 0x2c) * 4);
    if (((uVar1 < 8) || (0x20 < param_10->right - param_10->left)) ||
       (0x20 < param_10->bottom - param_10->top)) {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      if (*(char *)(param_8 + 0x51) == '\0') {
        (**(code **)(*plVar14 + 0x170))
                  (plVar14,param_6[0x17],iVar16,*param_9,param_9[1],
                   in_stack_fffffffffffffe90 & 0xffffffff00000000,*(undefined8 *)(param_8 + 8),
                   uVar19,&local_118);
      }
      else {
        (**(code **)(*plVar14 + 0x178))(plVar14,param_6[0x17],*(undefined8 *)(param_8 + 8));
      }
    }
    else {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      iVar13 = (**(code **)(*plVar14 + 0x70))
                         (plVar14,*(undefined8 *)(param_8 + 8),uVar19,1,0,&local_128);
      if (-1 < iVar13) {
        plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
        iVar13 = (**(code **)(*plVar14 + 0x70))
                           (plVar14,*(undefined8 *)(param_8 + 0x10),iVar16,2,0,&local_138);
        if (-1 < iVar13) {
          iVar13 = param_10->bottom - param_10->top;
          local_res18 = 0;
          if (uVar1 == 0x10) {
            local_128 = (ulonglong)(local_120 * param_10->top) + local_128;
            local_138 = (ulonglong)(uStack_130 * param_9[1]) + local_138;
            if (0 < iVar13) {
              iVar13 = 0;
              do {
                iVar17 = param_10->left;
                if (0 < param_10->right - iVar17) {
                  iVar9 = 0;
                  do {
                    iVar17 = iVar17 + iVar9;
                    iVar10 = *param_9 + iVar9;
                    iVar9 = iVar9 + 1;
                    *(undefined2 *)(local_138 + (longlong)iVar10 * 2) =
                         *(undefined2 *)(local_128 + (longlong)iVar17 * 2);
                    iVar17 = param_10->left;
                  } while (iVar9 < param_10->right - iVar17);
                }
                iVar13 = iVar13 + 1;
                local_128 = local_128 + (ulonglong)local_120;
                local_138 = local_138 + (ulonglong)uStack_130;
              } while (iVar13 < param_10->bottom - param_10->top);
            }
          }
          else {
            local_128 = (ulonglong)(local_120 * param_10->top) + local_128;
            local_138 = (ulonglong)(uStack_130 * param_9[1]) + local_138;
            if (0 < iVar13) {
              do {
                if (uVar1 == 8) {
                  iVar13 = param_10->left;
                  if (0 < param_10->right - iVar13) {
                    iVar17 = 0;
                    do {
                      iVar13 = iVar13 + iVar17;
                      iVar9 = *param_9 + iVar17;
                      iVar17 = iVar17 + 1;
                      *(undefined1 *)(local_138 + iVar9) = *(undefined1 *)(local_128 + iVar13);
                      iVar13 = param_10->left;
                    } while (iVar17 < param_10->right - iVar13);
                  }
                }
                else if (((uVar1 - 0x18 & 0xfffffff7) == 0) &&
                        (iVar13 = param_10->left, 0 < param_10->right - iVar13)) {
                  iVar17 = 0;
                  do {
                    iVar13 = iVar13 + iVar17;
                    iVar9 = *param_9 + iVar17;
                    iVar17 = iVar17 + 1;
                    *(undefined4 *)(local_138 + (longlong)iVar9 * 4) =
                         *(undefined4 *)(local_128 + (longlong)iVar13 * 4);
                    iVar13 = param_10->left;
                  } while (iVar17 < param_10->right - iVar13);
                }
                local_res18 = local_res18 + 1;
                local_128 = local_128 + (ulonglong)local_120;
                local_138 = local_138 + (ulonglong)uStack_130;
              } while (local_res18 < param_10->bottom - param_10->top);
            }
          }
          plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
          (**(code **)(*plVar14 + 0x78))(plVar14,*(undefined8 *)(param_8 + 0x10),iVar16);
        }
        plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
        (**(code **)(*plVar14 + 0x78))(plVar14,*(undefined8 *)(param_8 + 8),uVar19);
      }
    }
    (**(code **)(*param_6 + 0x10))(param_6,iVar16,param_9);
    goto LAB_18008b4e9;
  }
  if (iVar13 == 1) {
    (**(code **)(*param_6 + 8))(param_6,param_2 & 0xffffffff,param_3,0);
LAB_18008b15c:
    if (*(char *)(param_8 + 0x51) == '\0') {
      lVar11 = *(longlong *)(param_8 + 0x10);
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      lVar20 = *(longlong *)(param_8 + 8);
      lVar18 = *plVar14;
LAB_18008b10a:
      (**(code **)(lVar18 + 0x170))
                (plVar14,lVar11,iVar16,local_148._0_8_ & 0xffffffff,local_148.top,
                 in_stack_fffffffffffffe90 & 0xffffffff00000000,lVar20,uVar19,&local_118);
    }
    else if ((*(uint *)(param_8 + 0x24) < 2) || (*(int *)(param_8 + 0x28) != 1)) {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      (**(code **)(*plVar14 + 0x178))
                (plVar14,*(undefined8 *)(param_8 + 0x10),*(undefined8 *)(param_8 + 8));
    }
    else {
      if (*(uint *)((longlong)param_6 + 0x2c) < 0xe) {
        uVar15 = *(undefined4 *)(param_1 + 0x44);
      }
      else {
        puVar12 = FUN_1800ac794((longlong)param_6,(undefined8 *)local_68);
        uVar15 = *(undefined4 *)((longlong)puVar12 + 4);
      }
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      (**(code **)(*plVar14 + 0x1c8))
                (plVar14,*(undefined8 *)(param_8 + 0x10),iVar16,*(undefined8 *)(param_8 + 8),uVar19,
                 uVar15);
    }
  }
  else {
    if (iVar13 != 2) {
      if (iVar13 != 3) goto LAB_18008b4e9;
      goto LAB_18008b15c;
    }
    lVar20 = param_7[0x17];
    lVar11 = param_6[0xf];
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
    lVar18 = *plVar14;
    if (*(char *)(param_8 + 0x51) == '\0') goto LAB_18008b10a;
    (**(code **)(lVar18 + 0x178))(plVar14,lVar11);
  }
  (**(code **)(*param_6 + 0x18))(param_6,iVar16,param_9);
LAB_18008b4e9:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1cf10) + 0x620));
  return bVar4;
}

