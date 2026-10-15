/*
 * FUN_1800ba580 at 1800ba580
 * int __fastcall FUN_1800ba580(longlong param_1, undefined8 * param_2, undefined8 * param_3)
 * Address ranges: 1800ba580-1800bae45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ba580(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  byte bVar7;
  BOOL BVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  bool bVar22;
  byte bVar23;
  byte bVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  byte local_res10;
  int local_4b4;
  uint local_4b0;
  uint local_4a8;
  uint local_498 [16];
  int local_458;
  uint local_454;
  uint local_450;
  uint local_44c;
  uint local_448;
  byte abStack_444 [512];
  byte abStack_244 [76];
  byte local_1f8 [448];
  
  uVar26 = 0;
  local_4b4 = -0x7789f794;
  if ((param_2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) {
    return -0x7789f794;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar6 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar6 = true;
    BVar8 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar8 == 0) {
      FUN_1800044dc(0);
      bVar6 = true;
    }
  }
  *param_3 = 0;
  FUN_180088764((undefined1 *)&local_458);
  FUN_1800fbea0((undefined1 *)local_498,0,0x40);
  local_res10 = 0;
  bVar27 = true;
  FUN_1800fbea0(local_1f8,0,0x1c0);
  lVar12 = *(longlong *)(param_1 + 0x60);
  local_4a8 = 0;
  bVar22 = true;
  uVar3 = *(uint *)(lVar12 + 0xd4);
  local_4b0 = 0;
  uVar10 = local_454;
LAB_1800ba693:
  bVar24 = 0x10;
  uVar1 = *(ushort *)(param_2 + uVar26);
  if (((((uVar1 == 0xff) && (*(short *)((longlong)param_2 + uVar26 * 8 + 2) == 0)) &&
       (*(char *)((longlong)param_2 + uVar26 * 8 + 4) == '\x11')) &&
      ((*(char *)((longlong)param_2 + uVar26 * 8 + 5) == '\0' &&
       (*(char *)((longlong)param_2 + uVar26 * 8 + 6) == '\0')))) &&
     (*(char *)((longlong)param_2 + uVar26 * 8 + 7) == '\0')) {
    if (bVar27) {
      local_454 = uVar10;
      if (uVar10 == 4) {
        local_454 = 2;
      }
      local_44c = local_498[0];
      iVar11 = FUN_1800be6bc(param_1 + 0x80,(undefined8 *)&local_458);
      if (((iVar11 != 0) &&
          (local_458 = iVar11,
          puVar14 = FUN_1800ad104(param_1 + -0x6838,(undefined8 *)&local_458,0,local_res10,0),
          puVar14 != (undefined8 *)0x0)) &&
         (bVar27 = FUN_1800c2e68((longlong)puVar14,param_2,(uint)uVar26 + 1), bVar27)) {
        uVar15 = FUN_1800c2fc0((longlong)puVar14,(longlong *)&DAT_1800fd6f0,param_3);
        local_4b4 = (int)uVar15;
        if (local_4b4 < 0) {
LAB_1800bade2:
          FUN_1800c2f6c((longlong)puVar14);
          *puVar14 = &PTR_FUN_180104cd0;
          FUN_1800fbcf0(puVar14);
        }
        else {
          iVar11 = *(int *)(param_1 + 0x134);
          if (*(int *)(param_1 + 0x130) == iVar11) {
            uVar26 = 0x10;
            if (iVar11 != 0) {
              uVar26 = (ulonglong)(uint)(iVar11 * 2);
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar26;
            uVar15 = SUB168(ZEXT816(8) * auVar4,0);
            if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
              uVar15 = 0xffffffffffffffff;
            }
            puVar16 = (undefined8 *)thunk_FUN_1800fbccc(uVar15);
            if (puVar16 == (undefined8 *)0x0) goto LAB_1800bade2;
            FUN_1800fbec0(puVar16,*(undefined8 **)(param_1 + 0x128),
                          (ulonglong)*(uint *)(param_1 + 0x134) << 3);
            FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x128));
            *(undefined8 **)(param_1 + 0x128) = puVar16;
            *(int *)(param_1 + 0x134) = (int)uVar26;
          }
          *(undefined8 **)
           (*(longlong *)(param_1 + 0x128) + (ulonglong)*(uint *)(param_1 + 0x130) * 8) = puVar14;
          *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
        }
      }
    }
LAB_1800bae04:
    if (bVar6) {
      LeaveCriticalSection(DAT_1801123a8);
      return local_4b4;
    }
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    return local_4b4;
  }
  bVar27 = (bool)((uint)uVar26 < 0x40 & bVar27);
  if (bVar27) {
    bVar5 = (bool)((uint)uVar1 < *(uint *)(lVar12 + 0xbc) & bVar27);
  }
  else {
    bVar5 = false;
  }
  uVar2 = *(ushort *)((longlong)param_2 + uVar26 * 8 + 2);
  uVar17 = (uint)uVar2;
  bVar27 = false;
  if (bVar5) {
    bVar22 = (bool)(bVar22 & uVar17 == local_498[uVar1]);
    bVar27 = (bVar22 || (uVar3 & 0x40) != 0) && (uVar2 & 3) == 0;
  }
  bVar18 = 0x11;
  if (!bVar27) goto LAB_1800bac5c;
  bVar20 = *(byte *)((longlong)param_2 + uVar26 * 8 + 6);
  bVar21 = *(byte *)((longlong)param_2 + uVar26 * 8 + 7);
  if (bVar20 < 8) {
    if (bVar20 == 7) {
      bVar23 = bVar21 & 0xf | 0x70;
    }
    else if (bVar20 == 0) {
      if (bVar21 == 0) {
        bVar18 = 0;
      }
      else {
        bVar18 = 0xf;
        if (bVar21 != 1) {
          bVar18 = 0x11;
        }
      }
      bVar23 = bVar21 & 0xf;
      local_454 = 2;
      bVar27 = (bool)(bVar27 & (uVar10 - 2 & 0xfffffffd) == 0);
      uVar10 = 2;
LAB_1800ba925:
      if (!bVar27) goto LAB_1800bac5c;
    }
    else if (bVar20 == 1) {
      bVar23 = bVar21 & 0xf | 0x10;
      bVar18 = (-(bVar21 != 0) & 0x10U) + 1;
    }
    else if (bVar20 == 2) {
      bVar23 = bVar21 & 0xf | 0x20;
      bVar18 = (-(bVar21 != 0) & 0xfU) + 2;
    }
    else if (bVar20 == 3) {
      if (bVar21 == 0) {
        bVar18 = 3;
      }
      else {
        bVar18 = (bVar21 != 1) + 0x10;
      }
      bVar23 = bVar21 & 0xf | 0x30;
    }
    else if (bVar20 == 4) {
      bVar23 = bVar21 & 0xf | 0x40;
      bVar18 = (-(bVar21 != 0) & 0xdU) + 4;
    }
    else if (bVar20 == 5) {
      bVar18 = 0x11;
      if (bVar21 < 8) {
        bVar18 = bVar21 + 7;
      }
      bVar23 = bVar21 & 0xf | 0x50;
    }
    else {
      if (bVar20 != 6) goto LAB_1800bae04;
      bVar23 = bVar21 & 0xf | 0x60;
    }
  }
  else if (bVar20 == 8) {
    bVar23 = bVar21 & 0xf | 0x80;
  }
  else {
    if (bVar20 == 9) {
      bVar5 = false;
      if (bVar21 == 0) {
        bVar5 = bVar27;
      }
      if (bVar5) {
        bVar27 = (uVar10 & 0xfffffffb) == 0;
        bVar18 = 0;
        local_454 = 0;
        bVar23 = 0x90;
        uVar10 = 0;
        goto LAB_1800ba925;
      }
      bVar27 = false;
      goto LAB_1800bac5c;
    }
    if (bVar20 == 10) {
      if (bVar21 == 0) {
        bVar18 = 5;
      }
      else {
        bVar18 = 6;
        if (bVar21 != 1) {
          bVar18 = 0x11;
        }
      }
      bVar23 = bVar21 & 0xf | 0xa0;
    }
    else if (bVar20 == 0xb) {
      bVar23 = bVar21 & 0xf | 0xb0;
    }
    else if (bVar20 == 0xc) {
      bVar23 = bVar21 & 0xf | 0xc0;
    }
    else {
      if (bVar20 != 0xd) goto LAB_1800bae04;
      bVar23 = bVar21 & 0xf | 0xd0;
    }
  }
  uVar9 = (uint)(bVar21 >> 3) + (uint)bVar20 * 0x20;
  bVar20 = '\x01' << (bVar21 & 7);
  bVar5 = false;
  if ((bVar20 & local_1f8[uVar9]) == 0) {
    bVar5 = bVar27;
  }
  bVar27 = bVar5;
  uVar19 = 0;
  local_1f8[uVar9] = local_1f8[uVar9] | bVar20;
  if (!bVar27) goto LAB_1800bac5c;
  bVar20 = *(byte *)((longlong)param_2 + uVar26 * 8 + 4);
  if (bVar20 < 10) {
    if (bVar20 == 9) {
      bVar24 = 9;
      bVar20 = 2;
      bVar21 = 4;
      uVar19 = 4;
      goto LAB_1800bab15;
    }
    if (bVar20 == 0) {
      bVar24 = 0;
      bVar20 = 1;
LAB_1800baa49:
      bVar21 = 4;
    }
    else if (bVar20 == 1) {
      bVar20 = 2;
      bVar21 = 8;
      bVar24 = 1;
    }
    else if (bVar20 == 2) {
      bVar20 = 3;
      bVar21 = 0xc;
      bVar24 = 2;
    }
    else if (bVar20 == 3) {
      bVar21 = 0x10;
      bVar20 = 4;
      bVar24 = 3;
    }
    else {
      if (bVar20 != 4) {
        if (bVar20 == 5) {
          bVar20 = 4;
          bVar24 = 5;
          bVar21 = 4;
          uVar19 = 1;
          goto LAB_1800bab15;
        }
        if (bVar20 == 6) {
          bVar24 = 6;
          bVar20 = 2;
          goto LAB_1800baa49;
        }
        if (bVar20 == 7) {
          bVar20 = 4;
          bVar21 = 8;
          bVar24 = 7;
          goto LAB_1800baa4c;
        }
        if (bVar20 != 8) goto LAB_1800bae04;
        bVar20 = 4;
        bVar24 = 8;
        bVar21 = 4;
        uVar19 = 2;
        goto LAB_1800bab15;
      }
      bVar20 = 4;
      bVar24 = 4;
      bVar21 = 4;
    }
LAB_1800baa4c:
    lVar12 = *(longlong *)(param_1 + 0x60);
LAB_1800baa50:
    bVar5 = true;
    if (uVar19 != 0) goto LAB_1800baa5c;
LAB_1800bab3a:
    bVar7 = 0;
  }
  else {
    if (bVar20 == 10) {
      bVar24 = 10;
      uVar19 = 8;
LAB_1800bab10:
      bVar20 = 4;
      bVar21 = 8;
    }
    else if (bVar20 == 0xb) {
      bVar24 = 0xb;
      bVar20 = 2;
      bVar21 = 4;
      uVar19 = 0x10;
    }
    else {
      if (bVar20 == 0xc) {
        bVar24 = 0xc;
        uVar19 = 0x20;
        goto LAB_1800bab10;
      }
      if (bVar20 == 0xd) {
        bVar24 = 0xf;
        bVar20 = 3;
        bVar21 = 4;
        uVar19 = 0x40;
      }
      else if (bVar20 == 0xe) {
        bVar20 = 3;
        bVar21 = 4;
        uVar19 = 0x80;
      }
      else {
        if (bVar20 != 0xf) {
          if (bVar20 == 0x10) {
            bVar24 = 0xe;
            uVar19 = 0x200;
            goto LAB_1800bab10;
          }
          goto LAB_1800bae04;
        }
        bVar20 = 2;
        bVar21 = 4;
        bVar24 = 0xd;
        uVar19 = 0x100;
      }
    }
LAB_1800bab15:
    lVar12 = *(longlong *)(param_1 + 0x60);
    if (((*(uint *)(lVar12 + 0xec) & uVar19) != 0) || ((*(byte *)(param_1 + -0x59c0) & 0x40) == 0))
    goto LAB_1800baa50;
    bVar5 = false;
LAB_1800baa5c:
    bVar7 = 1;
    if ((*(uint *)(lVar12 + 0xec) & uVar19) != 0) goto LAB_1800bab3a;
  }
  local_res10 = local_res10 | bVar7;
  bVar27 = false;
  if (bVar5) {
    if (*(char *)((longlong)param_2 + uVar26 * 8 + 5) != '\0') goto LAB_1800bae04;
    uVar2 = *(ushort *)((longlong)param_2 + uVar26 * 8 + 2);
    uVar10 = (uint)uVar2;
    uVar26 = (ulonglong)local_4b0;
    bVar27 = uVar2 < 0x400;
    bVar7 = abStack_444[uVar26 * 8];
    while (bVar7 != 0xff) {
      local_4b0 = (uint)uVar26 + 1;
      uVar26 = (ulonglong)local_4b0;
      bVar7 = abStack_444[uVar26 * 8];
    }
    uVar25 = uVar26;
    if ((bVar18 != 0x11) && (uVar25 = (ulonglong)bVar18, (uint)bVar18 < (uint)uVar26)) {
      *(undefined8 *)(abStack_444 + uVar26 * 8) =
           *(undefined8 *)(abStack_444 + (ulonglong)bVar18 * 8);
      uVar13 = 0;
      if (local_450 != 0) {
        do {
          if (abStack_244[uVar13] == bVar18) {
            abStack_244[uVar13] = (byte)uVar26;
            break;
          }
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while (uVar10 < local_450);
      }
      abStack_244[local_450] = (byte)uVar26;
      uVar10 = uVar17;
    }
    abStack_444[uVar25 * 8 + 3] = (byte)(uVar10 >> 2);
    abStack_444[uVar25 * 8 + 1] = bVar20;
    abStack_444[uVar25 * 8] = (byte)uVar1;
    abStack_444[uVar25 * 8 + 2] = bVar21;
    abStack_444[uVar25 * 8 + 5] = bVar23;
    abStack_444[uVar25 * 8 + 4] = bVar24;
    abStack_444[uVar25 * 8 + 6] = (&DAT_180102ae0)[bVar24];
    local_448 = local_448 | 1 << ((byte)uVar1 & 0x1f);
    abStack_244[local_450] = (byte)uVar25;
    local_450 = local_450 + 1;
    uVar10 = local_454;
    if (local_498[uVar1] < uVar17 + bVar21) {
      local_498[uVar1] = uVar17 + bVar21;
    }
  }
LAB_1800bac5c:
  local_4a8 = local_4a8 + 1;
  uVar26 = (ulonglong)local_4a8;
  if (!bVar27) goto LAB_1800bae04;
  lVar12 = *(longlong *)(param_1 + 0x60);
  goto LAB_1800ba693;
}

