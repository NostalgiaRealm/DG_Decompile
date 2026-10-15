/*
 * FUN_1800174c8 at 1800174c8
 * undefined8 __fastcall FUN_1800174c8(longlong param_1, longlong param_2)
 * Address ranges: 1800174c8-180017814
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800174c8(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 extraout_var;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte local_res8;
  uint local_res10;
  int local_res18;
  uint local_res20;
  uint local_a0;
  uint local_9c;
  RECT local_90;
  tagRECT local_78;
  longlong local_68;
  tagRECT local_58;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x74);
  bVar3 = 0;
  if (((*(uint *)(param_1 + 0x74) == *(uint *)(param_2 + 0x74)) && (*(int *)(param_1 + 0x7c) == 0))
     && (*(int *)(param_2 + 0x7c) == 2)) {
    uVar10 = 1;
    uVar11 = 1;
    if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
      uVar11 = (uint)*(ushort *)(param_1 + 0x3c);
    }
    if ((*(uint *)(param_2 + 0x70) & 0x400) == 0) {
      uVar10 = (uint)*(ushort *)(param_2 + 0x3c);
    }
    uVar15 = *(uint *)(param_1 + 0x68);
    uVar1 = *(uint *)(param_1 + 0x6c);
    local_res18 = 0;
    if (uVar11 <= uVar10) {
      local_res18 = uVar10 - uVar11;
    }
    bVar3 = (byte)local_res18 & 0x1f;
    local_res10 = -(uint)(uVar10 < uVar11) & uVar11 - uVar10;
    bVar7 = (byte)local_res18 & 0x1f;
    uVar14 = 1;
    uVar5 = (ulonglong)(*(uint *)(param_2 + 0x68) >> bVar7);
    if (*(uint *)(param_2 + 0x68) >> bVar7 == 0) {
      uVar5 = 1;
    }
    uVar2 = *(uint *)(param_2 + 0x6c) >> bVar3;
    if (*(uint *)(param_2 + 0x6c) >> bVar3 == 0) {
      uVar2 = uVar14;
    }
    bVar3 = (byte)local_res10 & 0x1f;
    bVar7 = (byte)local_res10 & 0x1f;
    local_a0 = uVar15 >> bVar3;
    if (uVar15 >> bVar3 == 0) {
      local_a0 = uVar14;
    }
    local_res20 = uVar1 >> bVar7;
    if (uVar1 >> bVar7 == 0) {
      local_res20 = uVar14;
    }
    if ((((uint)uVar5 != local_a0) || (uVar2 != local_res20)) &&
       ((local_res18 != 0 || (local_res10 != 0)))) {
      local_res10 = 0;
      local_res18 = 0;
      local_a0 = uVar15;
      if (uVar15 == 0) {
        local_a0 = 1;
      }
      uVar5 = (ulonglong)local_a0;
      local_res20 = uVar1;
      if (uVar1 == 0) {
        local_res20 = 1;
      }
    }
    bVar3 = 1;
    local_res8 = 1;
    if (uVar11 <= uVar10) {
      uVar10 = uVar11;
    }
    bVar7 = (byte)local_res18;
    uVar11 = (1 << (bVar7 & 0x1f)) - 1;
    local_9c = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        if (bVar3 == 0) break;
        lVar13 = *(longlong *)(param_2 + 0x48);
        local_68 = (ulonglong)local_9c * 0x10;
        SetRect(&local_78,*(int *)(lVar13 + local_68) >> (bVar7 & 0x1f),
                *(int *)(lVar13 + 4 + local_68) >> (bVar7 & 0x1f),
                (uint)((*(uint *)(lVar13 + 8 + local_68) & uVar11) != 0) +
                (*(int *)(lVar13 + 8 + local_68) >> (bVar7 & 0x1f)),
                (uint)((*(uint *)(lVar13 + 0xc + local_68) & uVar11) != 0) +
                (*(int *)(lVar13 + 0xc + local_68) >> (bVar7 & 0x1f)));
        local_90.right = local_a0;
        local_90.left = 0;
        local_90.top = 0;
        local_90.bottom = local_res20;
        BVar4 = IntersectRect(&local_78,&local_78,&local_90);
        if (BVar4 != 0) {
          iVar16 = local_9c * 0x10;
          if (uVar10 != 0) {
            uVar15 = 0;
            do {
              FUN_180014ecc(*(longlong *)
                             (*(longlong *)(param_1 + 0x40) +
                             (ulonglong)(local_res10 + iVar16 + uVar15) * 8),
                            *(longlong *)
                             (*(longlong *)(param_2 + 0x40) +
                             (ulonglong)(local_res18 + iVar16 + uVar15) * 8));
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar10);
          }
          local_58.left = local_78.left;
          local_58.top = local_78.top;
          local_58.right = local_78.right;
          local_58.bottom = local_78.bottom;
          lVar13 = *(longlong *)
                    (*(longlong *)(param_2 + 0x40) + (ulonglong)(uint)(iVar16 + local_res18) * 8);
          lVar12 = *(longlong *)
                    (*(longlong *)(param_1 + 0x40) + (ulonglong)(iVar16 + local_res10) * 8);
          iVar8 = *(int *)(lVar13 + 0x48);
          uVar15 = local_res10;
          uVar6 = FUN_1800028a0(iVar8);
          iVar9 = (int)uVar6;
          uVar6 = FUN_180002844(iVar8);
          bVar3 = FUN_1800324a8(*(undefined8 *)(*(longlong *)(lVar12 + 8) + 0x70),
                                *(undefined8 *)(*(longlong *)(lVar13 + 8) + 0x70),
                                *(longlong **)(param_1 + 0x50),local_9c,local_9c,local_res18,uVar15,
                                uVar10,*(int *)(lVar13 + 0x70),*(int *)(lVar12 + 0x70),
                                &local_78.left,&local_58.left,(int)uVar6,iVar9,1);
          bVar3 = local_res8 & bVar3;
          local_res8 = bVar3;
          if (uVar10 != 0) {
            uVar15 = 0;
            do {
              lVar13 = *(longlong *)
                        (*(longlong *)(param_1 + 0x40) +
                        (ulonglong)(iVar16 + local_res10 + uVar15) * 8);
              if (*(longlong *)(*(longlong *)(lVar13 + 8) + 0x70) != 0) {
                FUN_180007f2c(*(longlong *)(lVar13 + 0x28),lVar13);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar10);
          }
        }
        BVar4 = SetRectEmpty((LPRECT)(*(longlong *)(param_2 + 0x48) + local_68));
        uVar5 = CONCAT44(extraout_var,BVar4);
        local_9c = local_9c + 1;
      } while (local_9c < *(uint *)(param_1 + 0x80));
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),bVar3);
}

