/*
 * FUN_18005e180 at 18005e180
 * undefined __cdecl FUN_18005e180(longlong param_1, longlong param_2, uint param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined8 * param_8, uint param_9, undefined8 * param_10, uint param_11)
 * Address ranges: 18005e180-18005e8b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e180(longlong param_1,longlong param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined8 *param_8,uint param_9,
                  undefined8 *param_10,uint param_11)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  undefined8 extraout_x0;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  int local_1a0;
  uint local_19c;
  uint local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  longlong local_170;
  undefined8 *local_168;
  longlong local_160 [2];
  undefined8 local_150;
  longlong lStack_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong local_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 local_e0;
  uint uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  int local_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  ulonglong uStack_a0;
  int local_98;
  uint uStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [8];
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar11 = *(uint *)(param_2 + 0x10);
  puVar22 = (undefined8 *)(param_2 + 0xdb8);
  lVar19 = 0;
  local_180 = param_5;
  uStack_17c = param_6;
  local_178 = param_7;
  local_170 = param_1;
  local_168 = puVar22;
  local_f8 = param_8;
  do {
    if (puVar22[lVar19] != 0) {
      FUN_180060328((longlong *)(param_1 + (ulonglong)uVar11 * 0x1ac0 + 0x21b8),puVar22[lVar19]);
      puVar22[lVar19] = 0;
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 2);
  uVar11 = *(uint *)(param_2 + 0xdc8);
  if (uVar11 != 0xffffffff) {
    lVar19 = *(longlong *)(local_170 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x2230);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x28));
    FUN_18004a7d8(lVar19,uVar11,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x28));
    *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
  }
  lVar19 = local_170;
  uStack_a0 = (ulonglong)param_3;
  if (((param_3 != 0) && (param_4 != 0)) && (local_f8 != (undefined8 *)0x0)) {
    lStack_a8 = 0;
    iStack_8c = 1;
    iStack_88 = 0;
    iStack_84 = 0;
    local_80 = 0;
    local_f0 = local_170 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    local_b0 = 3;
    uStack_94 = 0x10001;
    local_90 = 0x1b;
    local_98 = param_4;
    uVar11 = FUN_18004a918(*(longlong *)(local_f0 + 0x2230),2);
    *(uint *)(param_2 + 0xdc8) = uVar11;
    if (uVar11 != 0xffffffff) {
      iStack_d4 = 0;
      local_d0 = 0;
      local_160[0] = lVar19 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20;
      lVar19 = lVar19 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
      bVar10 = *(char *)(local_160[0] + 0x6e8) != '\0';
      uVar15 = 4;
      if (!bVar10) {
        uVar15 = 1;
      }
      uVar16 = 2;
      if (!bVar10) {
        uVar16 = 0;
      }
      local_e0 = CONCAT44(uVar16,uVar15);
      uStack_d8 = (uint)bVar10;
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x21d0));
      local_1c8 = (longlong *)0x0;
      uVar12 = FUN_18005c008(extraout_x0,&local_b0);
      local_110 = uVar12;
      puVar13 = FUN_18005c658(lVar19 + 0x2200,&local_110);
      iVar9 = local_b0;
      uVar11 = uStack_d8;
      if (puVar13 != (ulonglong *)0x0) {
        uStack_1b8 = CONCAT44(iStack_d4,uStack_d8);
        local_1c0 = local_e0;
        uVar23 = local_1c0;
        local_150 = CONCAT44(uStack_ac,local_b0);
        local_138 = CONCAT44(uStack_94,local_98);
        lStack_148 = lStack_a8;
        local_140 = uStack_a0;
        uStack_128 = CONCAT44(iStack_84,iStack_88);
        local_130 = CONCAT44(iStack_8c,local_90);
        iVar2 = iStack_d4;
        if (iStack_d4 == 0) {
          iVar2 = 1;
        }
        local_120 = CONCAT44(uStack_7c,local_80);
        iVar3 = local_d0;
        if (local_d0 == 0) {
          iVar3 = 1;
        }
        lVar1 = 0x10000;
        if (lStack_a8 != 0) {
          lVar1 = lStack_a8;
        }
        plVar18 = (longlong *)*puVar13;
        if ((int)plVar18[1] != 0) {
          uVar21 = 0;
          local_198 = uStack_94 >> 0x10;
          local_190 = iStack_8c;
          local_18c = iStack_88;
          local_188 = iStack_84;
          local_184 = local_80;
          local_194 = local_90;
          local_1c0._0_4_ = (int)local_e0;
          iVar7 = (int)local_1c0;
          local_1c0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
          iVar8 = local_1c0._4_4_;
          local_19c = uStack_94 & 0xffff;
          local_1a0 = local_98;
          local_60 = uStack_a0;
          local_1c0 = uVar23;
          local_108 = param_2;
          lStack_100 = lVar19;
          local_68 = lVar1;
          local_58 = uVar12;
LAB_18005e3ec:
          plVar18 = *(longlong **)(*plVar18 + uVar21 * 0x10);
          (**(code **)(*plVar18 + 0x50))(plVar18,&local_150);
          (**(code **)(*plVar18 + 0x70))(plVar18,&local_1c0,auStack_70);
          uVar12 = local_58;
          lVar19 = lStack_100;
          param_2 = local_108;
          uVar20 = (uint)uVar21;
          if ((((((int)local_1c0 != iVar7) || (local_1c0._4_4_ != iVar8)) ||
               (((uint)uStack_1b8 != uVar11 || ((uStack_1b8._4_4_ != iVar2 || (local_1b0 != iVar3)))
                ))) || (((int)local_150 != iVar9 ||
                        ((((((lStack_148 != local_68 || (local_140 != local_60)) ||
                            ((int)local_138 != local_1a0)) ||
                           (((uint)local_138._4_2_ != (local_19c & 0xffff) ||
                            ((uint)local_138._6_2_ != (local_198 & 0xffff))))) ||
                          (((int)local_130 != local_194 ||
                           ((local_130._4_4_ != local_190 || ((int)uStack_128 != local_18c)))))) ||
                         (uStack_128._4_4_ != local_188)))))) || ((int)local_120 != local_184))
          goto LAB_18005e50c;
          uVar11 = *(uint *)(uVar21 * 0x10 + *(longlong *)*puVar13 + 8);
          local_1c8 = plVar18;
          if (uVar11 == *(uint *)(lStack_100 + 0x2228)) {
            FUN_180060248((longlong *)(lStack_100 + 0x2218));
          }
          else {
            lVar5 = (ulonglong)uVar11 * 0x10;
            uVar17 = *(uint *)(lStack_100 + 0x222c);
            *(undefined8 *)(*(longlong *)(lStack_100 + 0x2218) + lVar5) = 0;
            lVar1 = lVar5 + *(longlong *)(lStack_100 + 0x2218);
            uVar4 = *(uint *)(lVar1 + 8);
            if (uVar11 == uVar17) {
              *(uint *)(lStack_100 + 0x222c) = uVar4;
            }
            else {
              *(undefined4 *)(*(longlong *)(lStack_100 + 0x2218) + (ulonglong)uVar4 * 0x10 + 0xc) =
                   *(undefined4 *)(lVar1 + 0xc);
              lVar1 = lVar5 + *(longlong *)(lStack_100 + 0x2218);
              *(undefined4 *)
               (*(longlong *)(lStack_100 + 0x2218) + (ulonglong)*(uint *)(lVar1 + 0xc) * 0x10 + 8) =
                   *(undefined4 *)(lVar1 + 8);
              *(undefined4 *)(lVar5 + *(longlong *)(lStack_100 + 0x2218) + 0xc) =
                   *(undefined4 *)
                    (*(longlong *)(lStack_100 + 0x2218) +
                     (ulonglong)*(uint *)(lStack_100 + 0x222c) * 0x10 + 0xc);
              *(undefined4 *)(lVar5 + *(longlong *)(lStack_100 + 0x2218) + 8) =
                   *(undefined4 *)(lStack_100 + 0x222c);
              *(uint *)(*(longlong *)(lStack_100 + 0x2218) +
                        (ulonglong)*(uint *)(lStack_100 + 0x222c) * 0x10 + 0xc) = uVar11;
              uVar17 = *(uint *)(lVar5 + *(longlong *)(lStack_100 + 0x2218) + 0xc);
              if (uVar17 != 0xffffffff) {
                *(uint *)(*(longlong *)(lStack_100 + 0x2218) + (ulonglong)uVar17 * 0x10 + 8) =
                     uVar11;
              }
            }
          }
          plVar18 = (longlong *)*puVar13;
          uVar11 = *(uint *)(plVar18 + 1);
          if (uVar20 < uVar11) {
            while (uVar17 = uVar20 + 1, uVar17 < uVar11) {
              puVar22 = (undefined8 *)(*plVar18 + (ulonglong)uVar17 * 0x10);
              uVar23 = *puVar22;
              puVar6 = (undefined8 *)(*plVar18 + (ulonglong)uVar20 * 0x10);
              puVar6[1] = puVar22[1];
              *puVar6 = uVar23;
              uVar20 = uVar17;
              uVar11 = *(uint *)(plVar18 + 1);
            }
            *(uint *)(plVar18 + 1) = uVar11 - 1;
          }
          *(ulonglong *)(lVar19 + 0x21c8) = *(longlong *)(lVar19 + 0x21c8) - uVar12;
          puVar22 = (undefined8 *)*puVar13;
          if (*(int *)(puVar22 + 1) == 0) {
            if (puVar22 != (undefined8 *)0x0) {
              thunk_FUN_180060a18((LPVOID)*puVar22);
              FUN_180060a18(puVar22);
            }
            FUN_18005c6d8(lVar19 + 0x2200,&local_110);
          }
        }
      }
LAB_18005e524:
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x21d0));
      if (local_1c8 == (longlong *)0x0) {
        local_1c8 = (longlong *)0x0;
        (**(code **)(**(longlong **)(local_160[0] + 0x6d0) + 0xd8))
                  (*(longlong **)(local_160[0] + 0x6d0),&local_e0,0,&local_b0,0,0,&DAT_180064c58,
                   &local_1c8);
      }
      lVar19 = local_f0;
      puVar22 = local_168;
      *local_168 = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        local_e0 = 0x40000001c;
        uStack_d8 = 0x1688;
        local_c0 = 0;
        local_d0 = 0;
        uStack_cc = 0xffffffff;
        uStack_c8 = 0;
        plVar18 = FUN_18004b248(*(longlong *)(local_f0 + 0x2230),local_160,
                                *(uint *)(param_2 + 0xdc8),0);
        lVar1 = local_170;
        plVar14 = *(longlong **)(local_170 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0);
        (**(code **)(*plVar14 + 0x90))(plVar14,*puVar22,&local_e0,*plVar18);
        local_1c0 = 0;
        uStack_1b8 = (ulonglong)param_3 << 0x20;
        uStack_1ac = 1;
        local_1b0 = param_4;
        uVar11 = FUN_18004e430(*(ulonglong *)(lVar19 + 0x1e08),(longlong *)*puVar22,0,
                               (longlong *)(lVar19 + 0x1fd0),(int *)&local_1c0,local_f8,param_9,0);
        if ((uVar11 & 1) != 0) {
          *(undefined4 *)(param_2 + 0xc48) = local_180;
          *(undefined4 *)(param_2 + 0xc4c) = uStack_17c;
          *(undefined4 *)(param_2 + 0xc50) = local_178;
          if (param_10 == (undefined8 *)0x0) {
            return;
          }
          plVar18 = FUN_18005e9e0(lVar1,(ulonglong)*(uint *)(param_2 + 0x10),&local_b0);
          *(longlong **)(param_2 + 0xdc0) = plVar18;
          if (plVar18 != (longlong *)0x0) {
            plVar18 = FUN_18004b248(*(longlong *)(lVar19 + 0x2230),local_160,
                                    *(uint *)(param_2 + 0xdc8),1);
            plVar14 = *(longlong **)(lVar1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0);
            (**(code **)(*plVar14 + 0x90))
                      (plVar14,*(undefined8 *)(param_2 + 0xdc0),&local_e0,*plVar18);
            uVar11 = FUN_18004e430(*(ulonglong *)(lVar19 + 0x1e08),*(longlong **)(param_2 + 0xdc0),0
                                   ,(longlong *)(lVar19 + 0x1fd0),(int *)&local_1c0,param_10,
                                   param_11,0);
            if ((uVar11 & 1) != 0) {
              return;
            }
            (**(code **)(**(longlong **)(param_2 + 0xdc0) + 0x10))();
            *(undefined8 *)(param_2 + 0xdc0) = 0;
          }
        }
        puVar22 = local_168;
        (**(code **)(*(longlong *)*local_168 + 0x10))();
        *puVar22 = 0;
      }
      uVar11 = *(uint *)(param_2 + 0xdc8);
      if (uVar11 != 0xffffffff) {
        lVar19 = *(longlong *)(local_f0 + 0x2230);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x28));
        FUN_18004a7d8(lVar19,uVar11,2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar19 + 0x28));
      }
      *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
    }
  }
  return;
LAB_18005e50c:
  plVar18 = (longlong *)*puVar13;
  uVar21 = (ulonglong)(uVar20 + 1);
  if (*(uint *)(plVar18 + 1) <= uVar20 + 1) goto LAB_18005e524;
  goto LAB_18005e3ec;
}

