/*
 * FUN_1002e7fe at 1002e7fe
 * undefined4 __thiscall FUN_1002e7fe(void * this, RECT * param_1, void * param_2, int * param_3, uint param_4, int param_5)
 * Address ranges: 1002e7fe-1002eddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1002e7fe(void *this,RECT *param_1,void *param_2,int *param_3,uint param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int iVar8;
  undefined1 extraout_DL;
  int extraout_EDX;
  int *extraout_EDX_00;
  HWND pHVar9;
  undefined4 *puVar10;
  float *pfVar11;
  void *pvVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  tagRECT *ptVar22;
  undefined4 uVar23;
  undefined1 local_130 [48];
  LPVOID local_100;
  undefined4 local_e8;
  undefined1 uStack_e4;
  undefined1 local_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  RECT local_c8;
  undefined1 local_b8 [12];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  float local_84 [4];
  tagRECT local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  undefined1 local_54 [12];
  int local_48;
  tagRECT local_44;
  tagRECT local_34;
  int *local_24;
  void *local_20;
  int local_1c;
  HWND local_18;
  char local_11;
  
  local_1c = 0x80004005;
  local_20 = this;
  local_18 = FUN_100245b0(*(void **)((int)this + 0xfc),'\x01');
  uVar2 = FUN_1002c512(param_4,param_5);
  local_11 = (char)uVar2;
  puVar10 = &local_e8;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (((param_2 != (void *)0x0) || (local_11 != '\0')) && (local_1c = 0, extraout_EDX != 0)) {
    iVar7 = *(int *)(*(int *)((int)this + 0xfc) + 0x11c) * 0x228;
    local_c8.left = *(LONG *)(&DAT_1006c470 + iVar7);
    local_c8.top = *(LONG *)(&DAT_1006c474 + iVar7);
    local_c8.right = *(LONG *)(&DAT_1006c478 + iVar7);
    local_c8.bottom = *(LONG *)(&DAT_1006c47c + iVar7);
    local_44.left = param_1->left;
    local_44.top = param_1->top;
    local_44.right = param_1->right;
    local_44.bottom = param_1->bottom;
    IntersectRect(&local_44,&local_44,&local_c8);
    BVar3 = IsRectEmpty(&local_44);
    pvVar12 = local_20;
    if (BVar3 == 0) {
      local_1c = param_1->right - param_1->left;
      local_34.left =
           ((local_44.left - param_1->left) * (param_3[2] - *param_3)) / local_1c + *param_3;
      iVar7 = param_1->bottom - param_1->top;
      local_34.top = ((local_44.top - param_1->top) * (param_3[3] - param_3[1])) / iVar7 +
                     param_3[1];
      local_34.right =
           ((local_44.right - param_1->left) * (param_3[2] - *param_3)) / local_1c + *param_3;
      local_34.bottom =
           ((local_44.bottom - param_1->top) * (param_3[3] - param_3[1])) / iVar7 + param_3[1];
      OffsetRect(&local_44,-local_c8.left,-local_c8.top);
      pvVar12 = local_20;
      local_1c = FUN_1002e1ce(local_20,&local_44.left,param_2,&local_34.left,param_4,param_5,
                              -local_c8.left,-local_c8.top,'\0','\x01',(undefined1 *)0x0);
    }
    pHVar9 = local_18;
    GetClientRect(local_18,(LPRECT)local_54);
    ClientToScreen(pHVar9,(LPPOINT)local_54);
    ClientToScreen(local_18,(LPPOINT)(local_54 + 8));
    IntersectRect(&local_44,(RECT *)local_54,param_1);
    BVar3 = IsRectEmpty(&local_44);
    pHVar9 = local_18;
    if (BVar3 == 0) {
      BVar3 = EqualRect(&local_44,(RECT *)local_54);
      if (((BVar3 == 0) ||
          ((*(int *)((int)pvVar12 + 0x104) != 0 &&
           (*(int *)(*(int *)((int)pvVar12 + 0x104) + 0x4c) == 0)))) ||
         (uVar2 = FUN_1002c58c(param_4,(int)param_2), (char)uVar2 != '\0')) {
        FUN_10033299(pvVar12,0,0,0);
      }
      else {
        local_34.bottom = CONCAT31(local_34.bottom._1_3_,extraout_DL);
        piVar6 = *(int **)(*(int *)((int)pvVar12 + 4) + 0x4c);
        iVar7 = *(int *)((int)pvVar12 + 0xfc);
        ptVar22 = &local_34;
        uVar2 = *(undefined4 *)(iVar7 + 0x1c);
        uVar19 = *(undefined4 *)(iVar7 + 0x20);
        iVar7 = *(int *)(iVar7 + 0x11c) * 0x228;
        uVar21 = *(undefined4 *)(&DAT_1006c454 + iVar7);
        uVar20 = *(undefined4 *)(&DAT_1006c450 + iVar7);
        uVar4 = FUN_1005d9c9(piVar6 + 1);
        local_24 = (int *)(**(code **)(*piVar6 + 0x30))
                                    (local_18,local_54._8_4_ - local_54._0_4_,
                                     local_48 - local_54._4_4_,uVar4,uVar19,uVar2,uVar20,uVar21,
                                     ptVar22);
        pvVar12 = local_20;
        if (local_24 != (int *)0x0) {
          if (local_11 == '\0') {
            FUN_1002c5bc(local_20,param_3,&param_1->left,extraout_ECX,(int)param_2,param_4,param_5,
                         &local_e8);
          }
          local_88 = *(int *)((int)pvVar12 + 4);
          FUN_1002c26b(local_130,param_3,&param_1->left,(int *)0x0,(LONG *)local_54,0,0,uStack_e4,
                       local_e3);
          cVar1 = FUN_1002c386(local_130,(LPRECT)local_b8);
          pHVar9 = local_18;
          while (cVar1 != '\0') {
            ScreenToClient(pHVar9,(LPPOINT)local_b8);
            ScreenToClient(pHVar9,(LPPOINT)(local_b8 + 8));
            fVar13 = (float)(int)local_b8._0_4_;
            fVar16 = (float)(int)local_b8._4_4_;
            fVar17 = (float)(int)local_b8._8_4_;
            fVar18 = (float)(int)local_ac;
            local_98 = fVar18;
            local_94 = fVar17;
            local_90 = fVar16;
            local_8c = fVar13;
            if (local_11 == '\0') {
              uVar2 = FUN_1002c6bd((int)param_2,(int)pvVar12);
              auVar14._4_4_ = -(uint)((float)(int)local_a0 == local_a0);
              auVar14._0_4_ = -(uint)((float)(int)local_9c == local_9c);
              auVar14._8_4_ = -(uint)((float)(int)local_a4 == local_a4);
              auVar14._12_4_ = -(uint)((float)(int)local_a8 == local_a8);
              iVar7 = movmskps(uVar2,auVar14);
              if ((iVar7 == 0xf) &&
                 (auVar15._4_4_ = -(uint)(local_a8 < local_a0),
                 auVar15._0_4_ = -(uint)(local_a4 < local_9c), auVar15._8_8_ = 0,
                 uVar2 = movmskps(0xf,auVar15), ((byte)uVar2 & 3) == 3)) {
                cVar1 = '\x01';
              }
              else {
                cVar1 = '\0';
              }
              local_64 = 0;
              local_60 = 0;
              local_5c = 0;
              pfVar11 = local_84;
              local_58 = cVar1;
              for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                *pfVar11 = 0.0;
                pfVar11 = pfVar11 + 1;
              }
              if (cVar1 == '\0') {
                local_84[0] = local_8c;
                local_84[1] = local_90;
                local_84[2] = local_94;
                local_84[3] = local_98;
                local_74.left = (LONG)local_a8;
                local_74.top = (LONG)local_a4;
                local_74.right = (LONG)local_a0;
                local_74.bottom = (LONG)local_9c;
              }
              else {
                SetRect(&local_74,(int)local_a8,(int)local_a4,(int)local_a0,(int)local_9c);
                local_84[0] = (float)local_b8._0_4_;
                local_84[1] = (float)local_b8._4_4_;
                local_84[2] = (float)local_b8._8_4_;
                local_84[3] = local_ac;
                pHVar9 = local_18;
              }
              pvVar12 = local_20;
              local_64 = local_e8;
              local_60 = *(undefined4 *)((int)param_2 + 0x1d0);
              iVar7 = *(int *)((int)param_2 + 4);
              local_5c = (uint)CONCAT12(uStack_e1,CONCAT11(uStack_e2,uStack_e0));
              (**(code **)(**(int **)(*(int *)((int)local_20 + 4) + 0x4c) + 0x84))
                        (0,0,*(undefined4 *)(iVar7 + 0x6c),*(undefined4 *)(iVar7 + 0x70),local_24,
                         *(undefined4 *)(iVar7 + 0x50),local_84);
            }
            else {
              uVar5 = FUN_1002c543(pvVar12,param_4,param_5);
              (**(code **)(**(int **)(*(int *)((int)pvVar12 + 4) + 0x4c) + 0x80))
                        (*(undefined4 *)(local_88 + 0x6c),*(undefined4 *)(local_88 + 0x70),local_24,
                         uVar5,fVar13,fVar16,fVar17,fVar18);
            }
            cVar1 = FUN_1002c386(local_130,(LPRECT)local_b8);
          }
          FUN_10004a0e((void *)(*(int *)((int)pvVar12 + 0xfc) + 0x10),local_24,
                       -(uint)(*(int *)((int)pvVar12 + 4) != 0) & *(int *)((int)pvVar12 + 4) + 0x4cU
                       ,(RECT *)0x0,0);
          thunk_FUN_10060be1(local_100);
        }
      }
    }
    else {
      GetClientRect(local_18,&local_34);
      BVar3 = IsRectEmpty(&local_34);
      if (BVar3 == 0) {
        uVar23 = 0;
        iVar7 = *(int *)((int)pvVar12 + 0xfc);
        iVar8 = *(int *)(iVar7 + 0x11c) * 0x228;
        uVar2 = *(undefined4 *)(&DAT_1006c454 + iVar8);
        uVar19 = *(undefined4 *)(&DAT_1006c450 + iVar8);
        uVar21 = *(undefined4 *)(iVar7 + 0x1c);
        uVar20 = *(undefined4 *)(iVar7 + 0x20);
        uVar4 = FUN_1005d9c9((int *)(*(int *)(*(int *)((int)pvVar12 + 4) + 0x4c) + 4));
        piVar6 = (int *)(**(code **)(*extraout_EDX_00 + 0x30))
                                  (pHVar9,local_34.right - local_34.left,
                                   local_34.bottom - local_34.top,uVar4,uVar20,uVar21,uVar19,uVar2,
                                   uVar23);
        if (piVar6 != (int *)0x0) {
          FUN_100049bf((void *)(*(int *)((int)pvVar12 + 0xfc) + 0x10),(LPARAM)piVar6);
          (**(code **)(*piVar6 + 0x10))();
        }
      }
    }
  }
  return local_1c;
}

