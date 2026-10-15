/*
 * FUN_1007b864 at 1007b864
 * undefined4 __stdcall FUN_1007b864(int param_1, int param_2, tagRECT * param_3, uint param_4, int param_5, int param_6)
 * Address ranges: 1007b864-1007bb55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1007b864(int param_1,int param_2,tagRECT *param_3,uint param_4,int param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  BOOL BVar5;
  undefined3 uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  RECT *lprcSrc1;
  undefined4 *puVar10;
  char local_79;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  void *local_60;
  tagRECT *local_5c;
  tagRECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  
  FUN_10003838(&local_79,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  local_60 = (void *)(param_1 + -0x58e0);
  local_68 = 0x8876086c;
  pvVar8 = (void *)(-(uint)(param_2 != 0) & param_2 - 0x5cU);
  puVar10 = (undefined4 *)(-(uint)(param_5 != 0) & param_5 - 0x5cU);
  if ((pvVar8 != (void *)0x0) && (puVar10 != (undefined4 *)0x0)) {
    if (param_3 == (tagRECT *)0x0) {
      if (param_4 != 0) goto LAB_1007bb40;
    }
    else if (param_4 == 0) goto LAB_1007bb40;
    SetRect(&local_38,0,0,*(int *)((int)pvVar8 + 0x40),*(int *)((int)pvVar8 + 0x44));
    SetRect(&local_28,0,0,puVar10[0x10],puVar10[0x11]);
    SetRectEmpty(&local_48);
    local_6c = 1;
    local_5c = &local_38;
    if (param_4 != 0) {
      local_5c = param_3;
      local_6c = param_4;
    }
    if ((((((*(void **)((int)pvVar8 + 0x18) == local_60) && ((void *)puVar10[6] == local_60)) &&
          (iVar4 = *(int *)((int)pvVar8 + 0x28), iVar4 == puVar10[10])) &&
         ((iVar4 != 0x46 && (iVar4 != 0x47)))) &&
        ((iVar4 != 0x49 && ((iVar4 != 0x4b && (iVar4 != 0x50)))))) &&
       ((iVar4 != 0x4d && (iVar4 != 0x4f)))) {
      local_78 = 1;
      cVar2 = FUN_100026cb(iVar4);
      local_74 = FUN_10002564(extraout_ECX);
      uVar9 = 0;
      local_70 = 0;
      if (local_6c != 0) {
        iVar4 = FUN_100025a7(extraout_ECX_00);
        local_64 = iVar4 - 1;
        uVar7 = extraout_EDX;
        do {
          if ((char)uVar7 == '\0') goto LAB_1007bb40;
          lprcSrc1 = local_5c + uVar9;
          IntersectRect(&local_58,lprcSrc1,&local_38);
          BVar5 = EqualRect(&local_58,lprcSrc1);
          uVar9 = local_70;
          uVar6 = (undefined3)((uint)-BVar5 >> 8);
          local_78._0_1_ = -(BVar5 != 0) & (byte)local_78;
          if ((cVar2 != '\0') &&
             (((((local_58.left & local_74 - 1) != 0 || ((local_58.top & local_64) != 0)) ||
               (((local_58.right & local_74 - 1) != 0 && (local_74 <= *(uint *)((int)pvVar8 + 0x40))
                ))) || (((local_58.bottom & local_64) != 0 &&
                        (local_74 <= *(uint *)((int)pvVar8 + 0x44))))))) {
            local_78._0_1_ = 0;
          }
          local_78._1_3_ = uVar6;
          if ((param_6 != 0) &&
             (OffsetRect(&local_58,*(int *)(param_6 + local_70 * 8) - local_58.left,
                         *(int *)(param_6 + 4 + local_70 * 8) - local_58.top), cVar2 != '\0')) {
            if (((*(uint *)(param_6 + uVar9 * 8) & local_74 - 1) == 0) &&
               ((*(uint *)(param_6 + 4 + uVar9 * 8) & local_64) == 0)) {
              bVar3 = 1;
            }
            else {
              bVar3 = 0;
            }
            local_78._0_1_ = (byte)local_78 & bVar3;
          }
          UnionRect(&local_48,&local_48,&local_58);
          IntersectRect(&local_18,&local_58,&local_28);
          BVar5 = EqualRect(&local_58,&local_18);
          local_78._0_1_ = -(BVar5 != 0) & (byte)local_78;
          uVar7 = CONCAT31((int3)((uint)-BVar5 >> 8),(byte)local_78);
          uVar9 = uVar9 + 1;
          local_78 = uVar7;
          local_70 = uVar9;
        } while (uVar9 < local_6c);
        if ((byte)local_78 == 0) goto LAB_1007bb40;
      }
      if ((*(int *)((int)pvVar8 + 0x34) == 0) && (puVar10[0xd] != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      local_68 = 0x88760868;
      if ((*(char *)((int)local_60 + 0x58bd) == '\0') || (!bVar1)) {
        bVar3 = FUN_10005115(local_60,pvVar8,puVar10,local_6c,(int)local_5c,param_6);
        local_68 = 0x80004005;
        if (bVar3 != 0) {
          local_68 = 0;
          pvVar8 = (void *)puVar10[7];
          if (pvVar8 != (void *)0x0) {
            FUN_10010771(pvVar8,puVar10[0x13],pvVar8,&local_48.left);
          }
        }
      }
    }
  }
LAB_1007bb40:
  FUN_10003881(&local_79);
  return local_68;
}

