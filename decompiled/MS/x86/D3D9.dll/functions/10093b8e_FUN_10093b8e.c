/*
 * FUN_10093b8e at 10093b8e
 * undefined4 __stdcall FUN_10093b8e(int param_1, int param_2, tagRECT * param_3, int param_4, int param_5)
 * Address ranges: 10093b8e-10093ec2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10093b8e(int param_1,int param_2,tagRECT *param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  BOOL BVar6;
  undefined3 uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  void *pvVar8;
  undefined4 uVar9;
  tagRECT *ptVar10;
  RECT *lprcSrc1;
  undefined4 *puVar11;
  char local_79;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  tagRECT *local_6c;
  uint local_68;
  tagRECT *local_64;
  void *local_60;
  tagRECT *local_5c;
  tagRECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  
  FUN_10003e40(&local_79,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar9 = 0x8876086c;
  pvVar8 = (void *)(-(uint)(param_2 != 0) & param_2 - 0x5cU);
  puVar11 = (undefined4 *)(-(uint)(param_4 != 0) & param_4 - 0x5cU);
  if ((((((param_2 != 0) && (param_4 != 0)) && (param_2 != param_4)) &&
       ((*(int *)((int)pvVar8 + 0x34) == 2 && (puVar11[0xd] == 0)))) &&
      (((*(uint *)(*(int *)((int)pvVar8 + 4) + 0xb8) >> 0xb & 1) == 0 &&
       (((*(uint *)(puVar11[1] + 0xb8) >> 0xb & 1) == 0 &&
        (uVar4 = FUN_10091d53((int)pvVar8 + 0x28), (char)uVar4 == '\0')))))) &&
     (uVar4 = FUN_10091d53(extraout_EDX), (char)uVar4 == '\0')) {
    local_78 = 0x8876086c;
    local_5c = (tagRECT *)(uint)(param_3 != (tagRECT *)0x0);
    local_60 = (void *)(param_1 + -0x66b4);
    if ((pvVar8 != (void *)0x0) && (puVar11 != (undefined4 *)0x0)) {
      SetRect(&local_38,0,0,*(int *)((int)pvVar8 + 0x40),*(int *)((int)pvVar8 + 0x44));
      SetRect(&local_28,0,0,puVar11[0x10],puVar11[0x11]);
      SetRectEmpty(&local_48);
      local_64 = (tagRECT *)0x1;
      ptVar10 = &local_38;
      if (param_3 != (tagRECT *)0x0) {
        ptVar10 = param_3;
        local_64 = local_5c;
      }
      uVar9 = local_78;
      local_5c = ptVar10;
      if ((((*(void **)((int)pvVar8 + 0x18) == local_60) && ((void *)puVar11[6] == local_60)) &&
          (*(int *)((int)pvVar8 + 0x28) == puVar11[10])) &&
         (cVar2 = FUN_10002819(*(int *)((int)pvVar8 + 0x28)), uVar9 = local_78, cVar2 == '\0')) {
        local_74 = extraout_EDX_00;
        cVar2 = FUN_100027cb(extraout_ECX);
        local_70 = FUN_100025c9(extraout_ECX_00);
        ptVar10 = (tagRECT *)0x0;
        local_6c = (tagRECT *)0x0;
        if (local_64 != (tagRECT *)0x0) {
          iVar5 = FUN_10002621(extraout_ECX_01);
          local_68 = iVar5 - 1;
          do {
            uVar9 = local_78;
            if ((char)local_74 == '\0') goto LAB_10093eaf;
            lprcSrc1 = local_5c + (int)ptVar10;
            IntersectRect(&local_58,lprcSrc1,&local_38);
            BVar6 = EqualRect(&local_58,lprcSrc1);
            ptVar10 = local_6c;
            uVar7 = (undefined3)((uint)-BVar6 >> 8);
            local_74._0_1_ = -(BVar6 != 0) & (byte)local_74;
            if ((cVar2 != '\0') &&
               (((((local_58.left & local_70 - 1) != 0 || ((local_58.top & local_68) != 0)) ||
                 (((local_58.right & local_70 - 1) != 0 &&
                  (local_70 <= *(uint *)((int)pvVar8 + 0x40))))) ||
                (((local_58.bottom & local_68) != 0 && (local_70 <= *(uint *)((int)pvVar8 + 0x44))))
                ))) {
              local_74._0_1_ = 0;
            }
            local_74._1_3_ = uVar7;
            if ((param_5 != 0) &&
               (OffsetRect(&local_58,*(int *)(param_5 + (int)local_6c * 8) - local_58.left,
                           *(int *)(param_5 + 4 + (int)local_6c * 8) - local_58.top), cVar2 != '\0')
               ) {
              if (((*(uint *)(param_5 + (int)ptVar10 * 8) & local_70 - 1) == 0) &&
                 ((*(uint *)(param_5 + 4 + (int)ptVar10 * 8) & local_68) == 0)) {
                bVar3 = 1;
              }
              else {
                bVar3 = 0;
              }
              local_74._0_1_ = (byte)local_74 & bVar3;
            }
            UnionRect(&local_48,&local_48,&local_58);
            IntersectRect(&local_18,&local_58,&local_28);
            BVar6 = EqualRect(&local_58,&local_18);
            local_74._0_1_ = -(BVar6 != 0) & (byte)local_74;
            local_74 = CONCAT31((int3)((uint)-BVar6 >> 8),(byte)local_74);
            ptVar10 = (tagRECT *)((int)&ptVar10->left + 1);
            local_6c = ptVar10;
          } while (ptVar10 < local_64);
          uVar9 = local_78;
          if ((byte)local_74 == 0) goto LAB_10093eaf;
        }
        if ((*(int *)((int)pvVar8 + 0x34) == 0) && (puVar11[0xd] != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((*(char *)((int)local_60 + 0x669d) == '\0') || (uVar9 = 0x88760868, !bVar1)) {
          bVar3 = FUN_1000596b(local_60,pvVar8,puVar11,local_64,(int)local_5c,param_5);
          uVar9 = 0x80004005;
          if (bVar3 != 0) {
            pvVar8 = (void *)puVar11[7];
            uVar9 = 0;
            if (pvVar8 != (void *)0x0) {
              FUN_10014670(pvVar8,puVar11[0x13],pvVar8,&local_48.left);
            }
          }
        }
      }
    }
  }
LAB_10093eaf:
  FUN_10003e89(&local_79);
  return uVar9;
}

