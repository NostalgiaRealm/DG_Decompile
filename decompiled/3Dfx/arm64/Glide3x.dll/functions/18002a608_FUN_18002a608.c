/*
 * FUN_18002a608 at 18002a608
 * undefined __cdecl FUN_18002a608(longlong param_1, ulonglong param_2, uint param_3, ulonglong param_4, uint param_5, uint param_6, uint param_7, uint param_8, longlong param_9, int param_10, byte param_11)
 * Address ranges: 18002a608-18002aaf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a608(longlong param_1,ulonglong param_2,uint param_3,ulonglong param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,longlong param_9,int param_10,byte param_11
                  )

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  longlong local_78;
  uint local_70;
  longlong local_68;
  float local_60;
  float fStack_5c;
  uint local_58;
  undefined4 local_54;
  
  lVar14 = *(longlong *)(param_1 + 0x140);
  lVar2 = param_1 + (param_2 & 0xffffffff) * 0x180;
  uVar17 = param_4;
  if (*(char *)(lVar14 + 0x2c83) != '\0') {
    plVar8 = *(longlong **)(*(longlong *)(lVar14 + 0x3340) + 8);
    (**(code **)(*plVar8 + 0xe0))
              (plVar8,*(undefined8 *)
                       (lVar14 + ((ulonglong)*(uint *)(lVar14 + 0x2af0) + 0x33a) * 0x10));
    plVar8 = *(longlong **)(*(longlong *)(lVar14 + 0x3340) + 8);
    (**(code **)(*plVar8 + 0xe0))
              (plVar8,*(undefined8 *)
                       (lVar14 + (ulonglong)*(uint *)(lVar14 + 0x2af0) * 0x10 + 0x33a8));
    *(int *)(lVar14 + 0x2af0) = *(int *)(lVar14 + 0x2af0) + 1;
  }
  cVar5 = *(char *)(lVar2 + 0x1dc);
  lVar14 = 0x150;
  if (cVar5 != '\0') {
    lVar14 = 0x154;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2d34) = *(undefined4 *)(lVar14 + lVar2);
  local_68 = 0;
  local_58 = 0;
  fStack_5c = (float)*(uint *)(lVar2 + 0x16c);
  local_60 = (float)*(uint *)(lVar2 + 0x168);
  local_54 = 0x3f800000;
  FUN_180054160(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),(float *)&local_68);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c90) = (float)*(uint *)(lVar2 + 0x168);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c94) = (float)*(uint *)(lVar2 + 0x16c);
  DAT_18006f744 = 0xf;
  DAT_18006f764 = 0xf;
  DAT_18006f6a4 = 0;
  FUN_180053700(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),(int *)&DAT_18006f720,
                uVar17,-1);
  lVar14 = *(longlong *)(param_1 + 0x140);
  FUN_1800539b0(*(longlong *)(lVar14 + 0x3330),(ulonglong)*(uint *)(lVar14 + 0x3338),
                (int *)&DAT_18006f6e8,*(int *)(lVar14 + 0x2b2c));
  FUN_180053c88(*(ulonglong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),(uint *)&DAT_18006f688
               );
  if (*(longlong *)(lVar2 + 0x218) != *(longlong *)(lVar2 + 0x230)) {
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    (**(code **)(*plVar8 + 0x1c8))
              (plVar8,*(longlong *)(lVar2 + 0x230),0,*(longlong *)(lVar2 + 0x218),0,
               *(undefined4 *)(lVar2 + 0x14c));
  }
  local_90 = (float)param_5;
  uVar11 = *(uint *)(lVar2 + 0x16c);
  local_80 = (float)*(uint *)(lVar2 + 0x170) / (float)*(uint *)(lVar2 + 0x168);
  bVar6 = *(int *)(lVar2 + 0x1b8) == 1;
  uVar16 = (uint)param_4;
  if (bVar6) {
    uVar16 = uVar11 - (uint)param_4;
  }
  fStack_7c = (float)*(uint *)(lVar2 + 0x174) / (float)uVar11;
  local_98 = CONCAT44((float)(param_4 & 0xffffffff),(float)param_3);
  fStack_8c = (float)param_6;
  if (bVar6) {
    param_6 = uVar11 - param_6;
  }
  local_88 = CONCAT44((float)uVar16 * fStack_7c,(float)param_3 * local_80);
  lVar14 = 0x260;
  if (cVar5 != '\0') {
    lVar14 = 0x290;
  }
  local_80 = local_90 * local_80;
  lVar3 = 600;
  if (cVar5 != '\0') {
    lVar3 = 0x288;
  }
  fStack_7c = (float)param_6 * fStack_7c;
  lVar4 = 0xbc8;
  if (*(char *)(lVar2 + 400) != '\0') {
    lVar4 = 0xbd0;
  }
  FUN_180028df0(param_1,(float *)&local_98,(float *)&local_88,*(longlong *)(param_1 + lVar4),
                *(undefined8 *)(lVar2 + 0x238),0,*(undefined8 *)(lVar2 + lVar3),
                *(undefined8 *)(lVar14 + lVar2),0,0);
  FUN_1800109c0(*(longlong *)(param_1 + 0x140));
  uVar12 = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
  uVar16 = *(uint *)(lVar2 + 0x168);
  uVar11 = *(uint *)(lVar2 + 0x16c);
  auVar21 = FUN_18001d650(param_7,param_8,uVar16,uVar11,param_10,(uint)param_11);
  local_98 = auVar21._8_8_;
  uVar17 = auVar21._0_8_ >> 0x20;
  uVar13 = auVar21._12_4_;
  uVar15 = auVar21._4_4_;
  *(uint *)(lVar2 + 0x18c) = *(int *)(lVar2 + 0x18c) + (uVar13 - uVar15 >> 4);
  local_68 = 0;
  local_60 = 0.0;
  uVar19 = (uint)param_11;
  fStack_5c = (float)uVar16;
  local_54 = uVar12;
  if (param_7 < param_8) {
    local_58 = uVar13;
    if (auVar21._8_4_ != 0) {
      local_58 = uVar13 + 1;
    }
    local_68 = (ulonglong)uVar15 << 0x20;
    uVar16 = uVar15;
    if (uVar15 == 0) goto LAB_18002a988;
  }
  else {
    uVar16 = 0;
    local_58 = uVar11;
LAB_18002a988:
    if ((local_58 == uVar11) && (*(char *)(lVar2 + 0x191) == '\0')) {
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
      if (uVar19 == 0) {
        uVar10 = *(undefined8 *)(lVar2 + 0x248);
        uVar9 = *(undefined8 *)(lVar2 + 0x2b8);
      }
      else {
        uVar10 = *(undefined8 *)(lVar2 + 0x278);
        uVar9 = *(undefined8 *)(lVar2 + 0x2c0);
      }
      (**(code **)(*plVar8 + 0x178))(plVar8,uVar9,uVar10);
      goto LAB_18002a9dc;
    }
  }
  plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
  if (uVar19 == 0) {
    (**(code **)(*plVar8 + 0x170))
              (plVar8,*(undefined8 *)(lVar2 + 0x2b8),0,0,uVar16,0,*(undefined8 *)(lVar2 + 0x248),0,
               &local_68);
  }
  else {
    (**(code **)(*plVar8 + 0x170))(plVar8,*(undefined8 *)(lVar2 + 0x2c0));
  }
LAB_18002a9dc:
  if (param_9 != 0) {
    local_88 = *(undefined8 *)(lVar2 + (ulonglong)param_11 * 8 + 0x2b8);
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    iVar7 = (**(code **)(*plVar8 + 0x70))(plVar8,local_88,0,3,0,&local_78);
    if (-1 < iVar7) {
      iVar7 = uVar19 * 2 + 2;
      puVar20 = (undefined8 *)(local_78 + (ulonglong)(local_70 * uVar15));
      iVar18 = auVar21._0_4_;
      if (iVar18 != 0) {
        thunk_FUN_1800010d8((undefined8 *)(param_9 + (ulonglong)param_7),
                            (undefined8 *)((longlong)puVar20 + (ulonglong)(uint)(iVar7 * iVar18)),
                            (ulonglong)(uint)((*(int *)(lVar2 + 0x168) - iVar18) * iVar7));
        uVar17 = (ulonglong)(uVar15 + 1);
        puVar20 = (undefined8 *)((longlong)puVar20 + (ulonglong)local_70);
      }
      uVar9 = local_98;
      uVar16 = (uint)uVar17;
      puVar1 = (undefined8 *)(param_9 + (ulonglong)(uVar16 * iVar7 * param_10));
      while (uVar16 <= uVar13) {
        iVar18 = (int)uVar9;
        if ((uint)uVar17 != uVar13) {
          iVar18 = *(int *)(lVar2 + 0x168);
        }
        thunk_FUN_1800010d8(puVar1,puVar20,(ulonglong)(uint)(iVar7 * iVar18));
        uVar16 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        puVar20 = (undefined8 *)((longlong)puVar20 + (ulonglong)local_70);
        puVar1 = (undefined8 *)((longlong)puVar1 + (ulonglong)(uint)(iVar7 * param_10));
      }
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_88,0);
    }
  }
  return;
}

