/*
 * FUN_1800b2cb8 at 1800b2cb8
 * uint __fastcall FUN_1800b2cb8(longlong param_1, longlong param_2, tagRECT * param_3, longlong param_4, longlong param_5)
 * Address ranges: 1800b2cb8-1800b30c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b2cb8(longlong param_1,longlong param_2,tagRECT *param_3,longlong param_4,
                  longlong param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  BOOL BVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  LPRECT lprcDst;
  ulonglong uVar12;
  uint uVar13;
  tagRECT *ptVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint local_c8;
  tagRECT local_b8;
  uint local_a8;
  longlong local_a0;
  tagRECT *local_98;
  longlong *local_90;
  undefined8 local_88;
  LONG LStack_80;
  LONG LStack_7c;
  tagRECT local_78;
  tagRECT local_68;
  tagRECT local_58;
  tagRECT local_48;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar3 = false;
  }
  else {
    bVar2 = true;
    BVar7 = TryEnterCriticalSection(DAT_1801123a8);
    bVar3 = true;
    if (BVar7 == 0) {
      FUN_1800044dc(0);
      bVar2 = true;
      bVar3 = true;
    }
  }
  uVar16 = 1;
  uVar17 = 0x8876086c;
  local_88 = (longlong *)(-(ulonglong)(param_2 != 0) & param_2 - 0x80U);
  local_90 = (longlong *)(-(ulonglong)(param_4 != 0) & param_4 - 0x80U);
  if ((((((param_2 != 0) && (param_4 != 0)) && (param_2 != param_4)) &&
       ((*(int *)(param_2 + -0x2c) == 2 && (*(int *)(param_4 + -0x2c) == 0)))) &&
      (((*(uint *)(*(longlong *)(param_2 + -0x78) + 0x100) >> 0xb & 1) == 0 &&
       ((*(uint *)(*(longlong *)(param_4 + -0x78) + 0x100) >> 0xb & 1) == 0)))) &&
     ((((*(int *)(param_2 + -0x28) == 0 || (*(int *)(param_2 + -0x28) == 1)) &&
       (*(int *)(param_2 + -0x24) == 0)) &&
      ((((*(int *)(param_4 + -0x28) == 0 || (*(int *)(param_4 + -0x28) == 1)) &&
        (*(int *)(param_4 + -0x24) == 0)) &&
       ((local_88 != (longlong *)0x0 && (local_90 != (longlong *)0x0)))))))) {
    local_a0 = param_1 + -0x6838;
    SetRect(&local_68,0,0,*(int *)(param_2 + -0x20),*(int *)(param_2 + -0x1c));
    SetRect(&local_58,0,0,*(int *)(param_4 + -0x20),*(int *)(param_4 + -0x1c));
    SetRectEmpty(&local_78);
    ptVar14 = &local_68;
    uVar6 = uVar16;
    if (param_3 != (tagRECT *)0x0) {
      ptVar14 = param_3;
      uVar6 = (uint)(param_3 != (tagRECT *)0x0);
    }
    local_a8 = uVar6;
    local_98 = ptVar14;
    if (((*(longlong *)(param_2 + -0x58) == local_a0) &&
        (*(longlong *)(param_4 + -0x58) == local_a0)) &&
       ((iVar11 = *(int *)(param_2 + -0x38), iVar11 == *(int *)(param_4 + -0x38) &&
        (lVar15 = local_a0, lVar8 = FUN_180002974(iVar11), (char)lVar8 == '\0')))) {
      uVar9 = FUN_180002928(iVar11);
      uVar10 = FUN_180002844(iVar11);
      uVar5 = (uint)uVar10;
      uVar13 = 0;
      bVar3 = bVar2;
      if (uVar6 != 0) {
        uVar12 = 0;
        bVar2 = true;
        local_c8 = 0;
        uVar10 = FUN_1800028a0(iVar11);
        uVar6 = (int)uVar10 - 1;
        do {
          if (!bVar2) goto LAB_1800b308c;
          IntersectRect(&local_b8,ptVar14 + (uVar12 & 0xffffffff),&local_68);
          BVar7 = EqualRect(&local_b8,ptVar14 + (uVar12 & 0xffffffff));
          bVar4 = BVar7 != 0 & bVar2;
          if (((char)uVar9 != '\0') &&
             (((((local_b8.left & uVar5 - 1) != 0 || ((local_b8.top & uVar6) != 0)) ||
               (((local_b8.right & uVar5 - 1) != 0 && (uVar5 <= *(uint *)(param_2 + -0x20))))) ||
              (((local_b8.bottom & uVar6) != 0 && (uVar5 <= *(uint *)(param_2 + -0x1c))))))) {
            bVar4 = 0;
          }
          if (param_5 != 0) {
            uVar12 = (ulonglong)local_c8;
            OffsetRect(&local_b8,*(int *)(param_5 + uVar12 * 8) - local_b8.left,
                       *(int *)(param_5 + 4 + (ulonglong)local_c8 * 8) - local_b8.top);
            if ((char)uVar9 != '\0') {
              if (((*(uint *)(param_5 + uVar12 * 8) & uVar5 - 1) != 0) ||
                 (bVar1 = 1, (*(uint *)(param_5 + 4 + uVar12 * 8) & uVar6) != 0)) {
                bVar1 = 0;
              }
              bVar4 = bVar4 & bVar1;
            }
          }
          UnionRect(&local_78,&local_78,&local_b8);
          IntersectRect(&local_48,&local_b8,&local_58);
          BVar7 = EqualRect(&local_b8,&local_48);
          local_c8 = local_c8 + 1;
          uVar12 = (ulonglong)local_c8;
          bVar2 = (bool)(BVar7 != 0 & bVar4);
          ptVar14 = local_98;
        } while (local_c8 < local_a8);
        lVar15 = local_a0;
        uVar13 = local_a8;
        if (!bVar2) goto LAB_1800b308c;
      }
      if ((*(int *)(param_2 + -0x2c) != 0) || (*(int *)(param_4 + -0x2c) == 0)) {
        uVar16 = 0;
      }
      if ((*(char *)(param_1 + -0x1f) == '\0') || (uVar17 = 0x88760868, (char)uVar16 == '\0')) {
        bVar4 = FUN_18000618c(lVar15,local_88,local_90,uVar13,(longlong)ptVar14,param_5);
        uVar17 = ~-(uint)(bVar4 != 0) & 0x80004005;
        if ((bVar4 != 0) && (*(longlong *)(param_4 + -0x50) != 0)) {
          lprcDst = (LPRECT)((ulonglong)*(uint *)(param_4 + -0x14) * 0x10 +
                            *(longlong *)(*(longlong *)(param_4 + -0x50) + 0x48));
          local_88 = (longlong *)CONCAT44(local_78.top,local_78.left);
          LStack_80 = local_78.right;
          LStack_7c = local_78.bottom;
          UnionRect(lprcDst,lprcDst,(RECT *)&local_88);
        }
      }
    }
  }
LAB_1800b308c:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar17;
}

