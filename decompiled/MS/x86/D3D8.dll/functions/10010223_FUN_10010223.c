/*
 * FUN_10010223 at 10010223
 * undefined4 __thiscall FUN_10010223(void * this, void * param_1)
 * Address ranges: 10010223-100104df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10010223(void *this,void *param_1)

{
  uint uVar1;
  byte bVar2;
  BOOL BVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 uVar5;
  uint uVar6;
  int extraout_EDX;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  LONG LVar11;
  LONG LVar12;
  LONG LVar13;
  LONG LVar14;
  tagRECT local_64;
  RECT local_54;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  void *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  uVar5 = 0;
  uVar6 = *(uint *)((int)this + 0x58);
  if (((uVar6 == *(uint *)((int)param_1 + 0x58)) && (*(int *)((int)this + 0x60) == 0)) &&
     (*(int *)((int)param_1 + 0x60) == 2)) {
    uVar9 = (uint)*(ushort *)((int)param_1 + 0x30);
    uVar6 = (uint)*(ushort *)((int)this + 0x30);
    iVar7 = 0;
    if (uVar6 <= uVar9) {
      iVar7 = uVar9 - uVar6;
    }
    local_c = -(uint)(uVar9 < uVar6) & uVar6 - uVar9;
    local_10 = 0;
    local_14 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = iVar7;
    local_18 = this;
    FUN_1000fec3(param_1,(byte)iVar7,&local_24,&local_20);
    FUN_1000fec3(this,(byte)local_c,&local_10,&local_14);
    if (((local_24 != local_10) || (local_20 != local_14)) && ((iVar7 != 0 || (local_c != 0)))) {
      local_c = 0;
      iVar7 = 0;
      local_1c = 0;
      FUN_1000fec3(param_1,0,&local_24,&local_20);
      FUN_1000fec3(this,0,&local_10,&local_14);
    }
    local_28 = 1;
    local_34 = uVar9;
    if (*(ushort *)((int)this + 0x30) <= uVar9) {
      local_34 = (uint)*(ushort *)((int)this + 0x30);
    }
    local_2c = (1 << ((byte)iVar7 & 0x1f)) - 1;
    local_20 = 0;
    uVar6 = 0;
    uVar5 = 1;
    if (*(int *)((int)this + 100) != 0) {
      do {
        uVar6 = local_20;
        uVar5 = local_28;
        if ((char)local_28 == '\0') break;
        local_24 = local_20 * 0x10;
        iVar10 = *(int *)((int)param_1 + 0x3c);
        uVar9 = *(uint *)(iVar10 + 0xc + local_24);
        uVar1 = *(uint *)(iVar10 + 8 + local_24);
        bVar2 = (byte)iVar7;
        SetRect(&local_64,*(int *)(iVar10 + local_24) >> (bVar2 & 0x1f),
                *(int *)(iVar10 + 4 + local_24) >> (bVar2 & 0x1f),
                (uint)((uVar1 & local_2c) != 0) + ((int)uVar1 >> (bVar2 & 0x1f)),
                (uint)((uVar9 & local_2c) != 0) + ((int)uVar9 >> (bVar2 & 0x1f)));
        local_54.right = local_10;
        local_54.bottom = local_14;
        local_54.left = 0;
        local_54.top = 0;
        BVar3 = IntersectRect(&local_64,&local_64,&local_54);
        pvVar8 = local_18;
        uVar9 = local_34;
        if (BVar3 != 0) {
          local_40 = iVar7 * 4;
          local_30 = 0;
          if (local_34 == 0) {
            local_44 = local_c << 2;
          }
          else {
            iVar7 = local_40 + uVar6 * 0x40;
            local_44 = local_c * 4;
            local_3c = local_44 + uVar6 * 0x40;
            local_38 = iVar7;
            do {
              FUN_1000e72b(*(void **)(*(int *)((int)pvVar8 + 0x38) + local_3c + local_30 * 4),
                           *(int *)(*(int *)((int)param_1 + 0x38) + iVar7 + local_30 * 4));
              local_30 = local_30 + 1;
            } while (local_30 < uVar9);
          }
          iVar7 = *(int *)(local_40 + local_24 * 4 + *(int *)((int)param_1 + 0x38));
          local_3c = local_44 + local_24 * 4;
          iVar10 = *(int *)(iVar7 + 0x28);
          local_40 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x50);
          uVar5 = *(undefined4 *)
                   (*(int *)(*(int *)(local_3c + *(int *)((int)pvVar8 + 0x38)) + 4) + 0x50);
          LVar11 = local_64.left;
          LVar12 = local_64.top;
          LVar13 = local_64.right;
          LVar14 = local_64.bottom;
          local_44 = iVar7;
          iVar7 = FUN_100025a7(iVar10);
          iVar4 = FUN_10002564(extraout_ECX);
          pvVar8 = local_18;
          uVar6 = local_34;
          bVar2 = FUN_10026120(uVar5,local_40,*(int **)((int)local_18 + 0x40),local_20,local_20,
                               local_1c,local_c,local_34,*(int *)(local_44 + 0x50),
                               *(int *)(extraout_EDX + 0x50),&local_64.left,iVar4,iVar7,iVar10,
                               LVar11,LVar12,LVar13,LVar14);
          local_28 = CONCAT31(local_28._1_3_,(byte)local_28 & bVar2);
          uVar9 = 0;
          iVar7 = local_1c;
          if (uVar6 != 0) {
            do {
              iVar7 = *(int *)(local_3c + uVar9 * 4 + *(int *)((int)pvVar8 + 0x38));
              if (*(int *)(*(int *)(iVar7 + 4) + 0x50) != 0) {
                FUN_10006893(*(void **)(iVar7 + 0x18),iVar7);
              }
              uVar9 = uVar9 + 1;
              iVar7 = local_1c;
            } while (uVar9 < uVar6);
          }
        }
        SetRectEmpty((LPRECT)(*(int *)((int)param_1 + 0x3c) + local_24));
        uVar6 = local_20 + 1;
        uVar5 = local_28;
        local_20 = uVar6;
      } while (uVar6 < *(uint *)((int)pvVar8 + 100));
    }
  }
  return CONCAT31((int3)(uVar6 >> 8),(char)uVar5);
}

