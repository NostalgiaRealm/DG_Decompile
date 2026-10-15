/*
 * FUN_1001410f at 1001410f
 * undefined4 __thiscall FUN_1001410f(void * this, void * param_1)
 * Address ranges: 1001410f-100143db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001410f(void *this,void *param_1)

{
  int iVar1;
  byte bVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_ECX;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  LONG LVar10;
  LONG LVar11;
  LONG LVar12;
  LONG LVar13;
  tagRECT local_64;
  RECT local_54;
  void *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  byte local_9;
  
  uVar5 = *(uint *)((int)this + 0x58);
  bVar2 = 0;
  if (((uVar5 == *(uint *)((int)param_1 + 0x58)) && (bVar2 = 0, *(int *)((int)this + 0x60) == 0)) &&
     (*(int *)((int)param_1 + 0x60) == 2)) {
    local_2c = (uint)*(ushort *)((int)this + 0x30);
    if ((*(uint *)((int)this + 0x54) & 0x400) != 0) {
      local_2c = 1;
    }
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x30);
    if ((*(uint *)((int)param_1 + 0x54) & 0x400) != 0) {
      uVar8 = 1;
    }
    iVar7 = 0;
    if (local_2c <= uVar8) {
      iVar7 = uVar8 - local_2c;
    }
    local_10 = -(uint)(uVar8 < local_2c) & local_2c - uVar8;
    local_18 = 0;
    local_1c = 0;
    local_24 = 0;
    local_14 = 0;
    local_44 = this;
    local_20 = iVar7;
    FUN_10013d65(param_1,(byte)iVar7,&local_24,&local_14);
    FUN_10013d65(this,(byte)local_10,&local_18,&local_1c);
    if (((local_24 != local_18) || (local_14 != local_1c)) && ((iVar7 != 0 || (local_10 != 0)))) {
      local_10 = 0;
      iVar7 = 0;
      local_20 = 0;
      FUN_10013d65(param_1,0,&local_24,&local_14);
      FUN_10013d65(this,0,&local_18,&local_1c);
    }
    if (local_2c <= uVar8) {
      uVar8 = local_2c;
    }
    local_9 = 1;
    local_28 = (1 << ((byte)iVar7 & 0x1f)) - 1;
    local_24 = 0;
    uVar5 = 0;
    bVar2 = 1;
    local_2c = uVar8;
    if (*(int *)((int)this + 100) != 0) {
      do {
        iVar7 = local_20;
        uVar5 = local_24;
        bVar2 = local_9;
        if (local_9 == 0) break;
        uVar6 = local_24 * 0x10;
        iVar1 = *(int *)((int)param_1 + 0x3c);
        uVar5 = *(uint *)(iVar1 + 0xc + uVar6);
        uVar8 = *(uint *)(iVar1 + 8 + uVar6);
        bVar2 = (byte)local_20;
        local_14 = uVar6;
        SetRect(&local_64,*(int *)(iVar1 + uVar6) >> (bVar2 & 0x1f),
                *(int *)(iVar1 + 4 + uVar6) >> (bVar2 & 0x1f),
                (uint)((uVar8 & local_28) != 0) + ((int)uVar8 >> (bVar2 & 0x1f)),
                (uint)((uVar5 & local_28) != 0) + ((int)uVar5 >> (bVar2 & 0x1f)));
        local_54.right = local_18;
        local_54.bottom = local_1c;
        local_54.left = 0;
        local_54.top = 0;
        BVar3 = IntersectRect(&local_64,&local_64,&local_54);
        uVar5 = local_2c;
        if (BVar3 != 0) {
          local_30 = 0;
          if (local_2c == 0) {
            local_3c = iVar7 << 2;
            local_40 = local_10 << 2;
          }
          else {
            local_3c = iVar7 * 4;
            local_34 = local_3c + local_14 * 4;
            local_40 = local_10 * 4;
            local_38 = local_40 + local_14 * 4;
            uVar8 = 0;
            do {
              FUN_100124b2(*(void **)(*(int *)((int)this + 0x38) + local_38 + uVar8 * 4),
                           *(int *)(*(int *)((int)param_1 + 0x38) + local_34 + uVar8 * 4));
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar5);
          }
          iVar7 = *(int *)(local_3c + local_14 * 4 + *(int *)((int)param_1 + 0x38));
          local_34 = local_40 + local_14 * 4;
          uVar9 = 1;
          iVar1 = *(int *)(local_34 + *(int *)((int)this + 0x38));
          local_3c = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x50);
          local_38 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50);
          LVar10 = local_64.left;
          LVar11 = local_64.top;
          LVar12 = local_64.right;
          LVar13 = local_64.bottom;
          local_40 = iVar7;
          iVar7 = FUN_10002621(*(int *)(iVar7 + 0x28));
          iVar4 = FUN_100025c9(extraout_ECX);
          uVar5 = local_2c;
          this = local_44;
          bVar2 = FUN_1002d87f(local_38,local_3c,*(int **)((int)local_44 + 0x40),local_24,local_24,
                               local_20,local_10,local_2c,*(int *)(local_40 + 0x50),
                               *(int *)(iVar1 + 0x50),&local_64.left,iVar4,iVar7,uVar9,LVar10,LVar11
                               ,LVar12,LVar13);
          local_9 = local_9 & bVar2;
          uVar8 = 0;
          uVar6 = local_14;
          if (uVar5 != 0) {
            do {
              FUN_10012511(*(int *)(*(int *)((int)this + 0x38) + local_34 + uVar8 * 4));
              uVar8 = uVar8 + 1;
              uVar6 = local_14;
            } while (uVar8 < uVar5);
          }
        }
        SetRectEmpty((LPRECT)(*(int *)((int)param_1 + 0x3c) + uVar6));
        uVar5 = local_24 + 1;
        bVar2 = local_9;
        local_24 = uVar5;
      } while (uVar5 < *(uint *)((int)this + 100));
    }
  }
  return CONCAT31((int3)(uVar5 >> 8),bVar2);
}

