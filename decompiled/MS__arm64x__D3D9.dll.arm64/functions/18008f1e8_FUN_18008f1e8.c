/*
 * FUN_18008f1e8 at 18008f1e8
 * undefined FUN_18008f1e8(void)
 * Address ranges: 18008f1e8-18008fa3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008f1e8(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong local_220 [2];
  longlong local_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ulonglong local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  longlong local_1b0;
  longlong lStack_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  longlong local_194;
  longlong lStack_18c;
  undefined4 local_184;
  undefined **local_180;
  longlong lStack_178;
  longlong *local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 auStack_88 [32];
  uint local_68;
  
  bVar12 = param_2 != (undefined8 *)0x0;
  puVar16 = (undefined8 *)0x0;
  if (bVar12) {
    puVar16 = param_2 + -0x20;
  }
  piVar1 = (int *)&DAT_00000158;
  if (bVar12) {
    piVar1 = (int *)(param_2 + 0xb);
  }
  iVar24 = *(int *)(&DAT_180232ee0 + (longlong)*piVar1 * 4);
  puVar5 = (undefined8 *)&DAT_00000060;
  if (bVar12) {
    puVar5 = param_2 + -0x14;
  }
  plVar7 = (longlong *)&DAT_00000074;
  if (bVar12) {
    plVar7 = (longlong *)((longlong)param_2 + -0x8c);
  }
  plVar23 = (longlong *)*plVar7;
  piVar2 = (int *)&DAT_0000008c;
  if (bVar12) {
    piVar2 = (int *)((longlong)param_2 + -0x74);
  }
  iVar22 = *piVar2;
  plVar27 = (longlong *)&DAT_00000140;
  if (bVar12) {
    plVar27 = param_2 + 8;
  }
  uVar25 = 0;
  if ((longlong *)*plVar27 == (longlong *)0x0) goto LAB_18008f564;
  cVar13 = (**(code **)(*(longlong *)*plVar27 + 0xa8))();
  if (cVar13 != '\0') {
    lVar26 = *plVar27;
    plVar15 = *(longlong **)(lVar26 + 0x74);
    if (plVar15 == (longlong *)0x0) goto LAB_18008f564;
    (**(code **)(*plVar15 + 0x50))(plVar15,auStack_88);
    if ((0x1c < local_68) || ((0x19800a00U >> (ulonglong)(local_68 & 0x1f) & 1) == 0))
    goto LAB_18008f564;
    uVar25 = *(undefined8 *)(lVar26 + 0x7c);
    lVar3 = 0x40;
    if (*(int *)(lVar26 + 0x2c) == 0x15) {
      lVar3 = 0x50;
    }
    iVar24 = *(int *)(param_1 + lVar3);
    FUN_180096cd8(lVar26,0,0,0);
    if (*(longlong *)(lVar26 + 0x7c) == 0) {
      if (*(longlong *)(lVar26 + 0x154) == 0) {
        FUN_1800963b0(lVar26);
      }
      iVar22 = *(int *)(lVar26 + 0x16c);
      if (iVar22 != -1) {
        plVar23 = *(longlong **)(lVar26 + 0x74);
        goto LAB_18008f564;
      }
    }
    plVar23 = (longlong *)&DAT_00000138;
    if (param_2 != (undefined8 *)0x0) {
      plVar23 = param_2 + 7;
    }
    FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x1cf10),*plVar23,1);
    if (((int)param_4[3] == 0) && (iVar24 == *(int *)(&DAT_180232ee0 + (longlong)*piVar1 * 4))) {
      iVar22 = *(int *)(*plVar23 + 0xdb0);
      plVar23 = *(longlong **)(*plVar23 + 0xda0);
      goto LAB_18008f564;
    }
  }
  plVar15 = (longlong *)&DAT_00000138;
  if (param_2 != (undefined8 *)0x0) {
    plVar15 = param_2 + 7;
  }
  uVar25 = 0;
  if (*(longlong *)(*plVar15 + 0xda0) == 0) {
    FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x1cf10),*plVar15,1);
  }
  if (*(longlong *)(*plVar15 + 0xda0) != 0) {
    local_1d0 = 0;
    local_1c8 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    local_1c4 = 1;
    (*__imp_USER32_dll_SetRect)
              (&uStack_1e0,0,0,*(undefined4 *)(*plVar27 + 0x24),*(undefined4 *)(*plVar27 + 0x28));
    puVar6 = (undefined8 *)&DAT_00000028;
    if (param_2 != (undefined8 *)0x0) {
      puVar6 = param_2 + -0x1b;
    }
    puVar8 = (undefined4 *)&DAT_00000024;
    if (param_2 != (undefined8 *)0x0) {
      puVar8 = (undefined4 *)((longlong)param_2 + -0xdc);
    }
    (*__imp_USER32_dll_SetRect)(&local_1f0,0,0,*puVar8,*(undefined4 *)puVar6);
    if (*plVar7 != *(longlong *)(*plVar15 + 0xda0)) {
      FUN_180091218(puVar5,1,1);
      lVar26 = *plVar15;
      iVar24 = *(int *)(lVar26 + 0xdb0);
      uVar20 = *(undefined4 *)(lVar26 + 0xdb4);
      plVar23 = *(longlong **)(lVar26 + 0xda0);
      uVar10 = *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(lVar26 + 0x34) * 4);
      FUN_180090460(puVar5,1,1);
      *plVar7 = (longlong)plVar23;
      *piVar2 = iVar24;
      puVar5 = (undefined8 *)&DAT_00000090;
      if (param_2 != (undefined8 *)0x0) {
        puVar5 = param_2 + -0xe;
      }
      *(undefined4 *)puVar5 = uVar20;
      puVar5 = (undefined8 *)&DAT_000000a8;
      if (param_2 != (undefined8 *)0x0) {
        puVar5 = param_2 + -0xb;
      }
      *(undefined4 *)puVar5 = uVar10;
      (**(code **)(*plVar23 + 8))(plVar23);
      puVar4 = &DAT_000000ac;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined1 *)((longlong)param_2 + -0x54);
      }
      *puVar4 = 1;
      puVar4 = &DAT_000000ad;
      if (param_2 != (undefined8 *)0x0) {
        puVar4 = (undefined1 *)((longlong)param_2 + -0x53);
      }
      *puVar4 = 1;
    }
    lVar26 = 0;
    if (*plVar27 != 0) {
      lVar26 = *plVar27 + 0x100;
    }
    puVar5 = (undefined8 *)&DAT_00000100;
    if (param_2 != (undefined8 *)0x0) {
      puVar5 = param_2;
    }
    puVar6 = (undefined8 *)0x0;
    if (puVar16 != (undefined8 *)0x0) {
      puVar6 = puVar5;
    }
    FUN_18008ee68(param_1,0,0,0,0,puVar6,lVar26,&local_1f0);
  }
  plVar23 = *(longlong **)(*plVar15 + 0xda0);
  iVar22 = *(int *)(*plVar15 + 0xdb0);
  iVar24 = *(int *)(&DAT_180232ee0 + (longlong)*piVar1 * 4);
LAB_18008f564:
  local_1f8 = param_2 + 7;
  uStack_158 = 0;
  local_160 = 0;
  local_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  if (plVar23 != (longlong *)0x0) {
    puVar16 = (undefined8 *)(**(code **)(*plVar23 + 0x50))(plVar23,&local_1f0);
    uStack_158 = puVar16[1];
    local_160 = *puVar16;
    local_148 = puVar16[3];
    local_150 = puVar16[2];
    uStack_138 = puVar16[5];
    local_140 = puVar16[4];
  }
  uVar11 = local_148;
  local_210 = 0;
  local_200 = local_150;
  uStack_208 = (undefined4)local_150;
  uStack_204 = (undefined4)local_148;
  iVar14 = (*__imp_USER32_dll_IsRectEmpty)(param_4 + 1);
  if (iVar14 == 0) {
    lStack_1a8 = param_4[2];
    local_1b0 = param_4[1];
  }
  else {
    lStack_1a8 = CONCAT44(uStack_204,uStack_208);
    local_1b0 = local_210;
  }
  if ((int)param_4[3] != 0) {
    plVar7 = (longlong *)&DAT_00000138;
    if (param_2 != (undefined8 *)0x0) {
      plVar7 = param_2 + 7;
    }
    plVar27 = *(longlong **)(*plVar7 + 0xda0);
    uVar20 = 1;
    if (plVar23 == plVar27) {
      uVar20 = 2;
    }
    uVar19 = (uint)(plVar23 == plVar27);
    FUN_1800e5fa8(*(undefined8 *)(param_1 + 0x1cf10),*plVar7,uVar20);
    uVar21 = (ulonglong)(plVar23 == plVar27);
    if (*(longlong *)(*plVar7 + uVar21 * 8 + 0xda0) != 0) {
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 0xb88) = param_1;
      lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
      *(int *)(lVar26 + 0x684) = *(int *)(lVar26 + 0x684) + 1;
      puVar8 = (undefined4 *)&DAT_0000002c;
      if (*param_4 != 0) {
        puVar8 = (undefined4 *)(*param_4 + -0xd4);
      }
      FUN_1800a0830(param_1,*puVar8,local_140 & 0xffffffff,*(undefined4 *)((longlong)param_4 + 0x1c)
                   );
      local_220[0] = param_1 + 0x1c000;
      FUN_1800e8910(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(undefined8 *)(param_1 + 0x1cf28));
      FUN_1800e9780(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(undefined8 *)(local_220[0] + 0xf28));
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),plVar23,0,0,0x80);
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),
                    *(undefined8 *)(*plVar7 + uVar21 * 8 + 0xda0),0,0,4);
      uVar17 = FUN_18008e550(*(longlong *)(param_1 + 0x1cf18) + 0x1978,&DAT_180232fa0);
      *(undefined8 *)(param_1 + 0x1cf60) = uVar17;
      uVar17 = FUN_180042050(*(longlong *)(param_1 + 0x1cf18) + 0x1960,&DAT_180232f30);
      *(undefined8 *)(param_1 + 0x1cf78) = uVar17;
      uVar17 = FUN_180041d70(*(longlong *)(param_1 + 0x1cf18) + 0x19a8,&DAT_180232f68);
      *(undefined8 *)(param_1 + 0x1cf70) = uVar17;
      *(undefined8 *)(param_1 + 0x1cf80) = *(undefined8 *)(param_1 + 0x1d120);
      *(undefined4 *)(param_1 + 0x1cf90) = 1;
      *(undefined4 *)(param_1 + 0x1cf94) =
           *(undefined4 *)(&DAT_180232ee0 + (longlong)*(int *)(*plVar7 + 0x34) * 4);
      *(undefined4 *)(param_1 + 0x1cf98) = 0;
      lVar26 = *(longlong *)(param_1 + 0x1cf18);
      *(undefined4 *)(param_1 + 0x1cfb4) = 0;
      uVar18 = FUN_1800f2c40(*(undefined8 *)(lVar26 + 0x1950),1,
                             *(undefined8 *)(*(longlong *)(lVar26 + 0x1500) + 0x18),
                             *(undefined8 *)(*(longlong *)(lVar26 + 0x1508) + 0xb78),&local_1f0);
      if ((uVar18 & 1) != 0) {
        FUN_1800e96c8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&uStack_1e0);
        uVar9 = *(uint *)(param_1 + 0x28);
        lVar26 = *(longlong *)(param_1 + 0x1cf10);
        FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),local_220,iVar22,0)
        ;
        plVar23 = *(longlong **)(lVar26 + (ulonglong)uVar9 * 0x20 + 0x6d0);
        (**(code **)(*plVar23 + 0xc0))(plVar23,1,uStack_1e8,local_220[0],0);
        FUN_1800e96c8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&uStack_1e0);
        FUN_1800e9ac0(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),6,local_1f0);
        FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1938),&local_210,
                      *(undefined4 *)(*plVar7 + 0xdb4),uVar19);
        FUN_1800e9fc8(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508),1,&local_210,0,0);
        local_120 = 0;
        local_110 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        fStack_114 = (float)(uVar11 & 0xffffffff);
        local_90 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_118 = (float)(local_200 & 0xffffffff);
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        uStack_e8 = *(undefined8 *)(*plVar7 + uVar21 * 8 + 0xda0);
        local_f0 = 0;
        lVar26 = 0x1f;
        if ((int)param_4[3] == 4) {
          lVar26 = 0x20;
        }
        local_108 = local_118;
        fStack_104 = fStack_114;
        FUN_18008a130(param_1,&local_120,*(undefined8 *)(param_1 + lVar26 * 8 + 0x1cfd8));
        iVar22 = *(int *)(*plVar7 + 0xdb0) + uVar19;
        plVar23 = *(longlong **)(*plVar7 + uVar21 * 8 + 0xda0);
        iVar24 = *(int *)(&DAT_180232ee0 + (longlong)*piVar1 * 4);
      }
      lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508);
      iVar14 = *(int *)(lVar26 + 0x684) + -1;
      *(int *)(lVar26 + 0x684) = iVar14;
      if ((iVar14 == 0) && (*(int *)(lVar26 + 0x680) <= *(int *)(lVar26 + 0x678))) {
        FUN_1800e8548(lVar26 + 8,0);
      }
    }
  }
  lVar26 = *(longlong *)(param_1 + 8);
  local_180 = &PTR_FUN_180235450;
  local_1a0 = *(undefined4 *)(lVar26 + 0xc);
  local_19c = *(undefined4 *)(lVar26 + 0x10);
  local_198 = *(undefined4 *)(lVar26 + 0x14);
  lStack_18c = lStack_1a8;
  local_194 = local_1b0;
  local_184 = *(undefined4 *)(&DAT_18022aa28 + (longlong)*(int *)(lVar26 + 0xca) * 4);
  puVar16 = (undefined8 *)&DAT_00000138;
  if (param_2 != (undefined8 *)0x0) {
    puVar16 = local_1f8;
  }
  lStack_178 = param_1;
  local_170 = param_4;
  FUN_1800f7be0(*(undefined8 *)(param_1 + 0x1cf10),*puVar16,plVar23,iVar22,uVar25,iVar24,param_3,
                &local_1a0,&local_180);
  FUN_180001590(param_1 + 0x1d16c);
  (*__imp_KERNEL32_dll_SetEvent)(*(undefined8 *)(param_1 + 0x1d170));
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}

