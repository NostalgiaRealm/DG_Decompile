/*
 * FUN_180044340 at 180044340
 * ulonglong __fastcall FUN_180044340(longlong param_1, undefined1 param_2)
 * Address ranges: 180044340-18004499b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180044340(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  uint local_res10 [2];
  longlong local_res18;
  
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  if (*(char *)(param_1 + 0x7662) == '\0') {
    uVar8 = 0;
    uVar13 = 0;
    if (*(char *)(param_1 + 0xf6c2) != '\0') {
      lVar1 = *(longlong *)(param_1 + 0xf7e0);
      uVar6 = uVar8;
      uVar12 = uVar8;
      if (lVar1 != 0) {
        uVar6 = *(ulonglong *)(lVar1 + 8);
        uVar12 = (ulonglong)*(uint *)(lVar1 + 0x60);
      }
      uVar10 = *(longlong *)(param_1 + 0xf8d0) + 0x30;
      if (*(longlong *)(param_1 + 0xf8d0) == 0) {
        uVar10 = uVar8;
      }
      FUN_180063e10(param_1,uVar10,uVar6,(uint)uVar12);
      *(undefined1 *)(param_1 + 0xf6c2) = 0;
    }
    uVar5 = uVar13;
    if (*(char *)(param_1 + 0x1018f) != '\0') {
      uVar5 = *(uint *)(param_1 + 0xffd4);
    }
    uVar11 = (uVar5 | *(uint *)(param_1 + 0xffd0)) & ~*(uint *)(param_1 + 0xf6b8);
    local_res10[0] = uVar11;
    uVar5 = 0;
    bVar14 = uVar11 == 0;
    if (!bVar14) {
      for (; (uVar11 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    while (!bVar14) {
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      FUN_180043ba0(param_1,*(ulonglong *)(param_1 + 0xfee8 + (ulonglong)(uVar5 & 0xff) * 8));
      uVar5 = 0;
      bVar14 = local_res10[0] == 0;
      if (!bVar14) {
        for (; (local_res10[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    *(uint *)(param_1 + 0xf6b8) = *(uint *)(param_1 + 0xf6b8) | uVar11;
    *(byte *)(param_1 + 0xf6c0) = *(byte *)(param_1 + 0xf6c0) | uVar11 != 0;
    local_res10[0] = *(uint *)(param_1 + 0xf6b8) & 0xf;
    *(undefined4 *)(param_1 + 0xffd0) = 0;
    uVar5 = 0;
    if (local_res10[0] != 0) {
      for (; (local_res10[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_res10[0] != 0) {
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      while( true ) {
        uVar11 = uVar5 & 0xff;
        uVar8 = (ulonglong)uVar11;
        plVar2 = *(longlong **)(param_1 + 0xfe98 + uVar8 * 8);
        local_res8 = *(undefined4 *)(param_1 + 0xe98);
        bVar14 = (*(byte *)((longlong)&local_res8 + ((longlong)(int)uVar11 >> 3)) >> (uVar5 & 7) & 1
                 ) != 0;
        if (plVar2 == (longlong *)0x0) {
          lVar1 = *(longlong *)(param_1 + 0xfec0 + uVar8 * 8);
          if (lVar1 == 0) {
            uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180);
          }
          else {
            uVar5 = FUN_1800a3a68(lVar1,bVar14);
            uVar6 = (ulonglong)uVar5;
            if (uVar5 != 0xffffffff) {
              uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0xfec0 + uVar8 * 8) + 0x40);
              *(ulonglong *)(param_1 + 0xfee8 + uVar8 * 8) = uVar12;
              FUN_180043ac0(param_1,uVar12,0);
            }
          }
        }
        else {
          bVar9 = *(byte *)((longlong)plVar2 + 0x192);
          local_res8 = *(undefined4 *)(param_1 + 0xffd4);
          if ((((*(byte *)((longlong)&local_res8 + ((longlong)(int)uVar11 >> 3)) >> (uVar5 & 7) & 1)
                != 0) && ((bVar9 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x7b0) == 0 || (*(int *)(param_1 + 0x7b4) == 0)))) {
            bVar9 = bVar9 & 0xfe;
          }
          if (bVar9 == 1) {
            uVar6 = (**(code **)(*plVar2 + 0xf8))();
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
            if ((((*(longlong *)(lVar1 + 0xb10) != 0) && (uVar6 != 0)) &&
                (iVar4 = FUN_1800ea5c8(*(longlong **)(lVar1 + 0xb18),uVar6,0,0,
                                       *(longlong *)(lVar1 + 0xb10),lVar1,0,
                                       *(longlong *)(lVar1 + 0xb78)),
                *(int *)(*(longlong *)(lVar1 + 0xb10) + 0x30) != 3)) && (iVar4 != 0)) {
              FUN_1800e23ec(lVar1,uVar6,0,iVar4,0);
            }
            *(undefined1 *)(param_1 + 0x1018b) = 1;
            pbVar3 = (byte *)(param_1 + 0xffd0 + ((longlong)(int)uVar11 >> 3));
            *pbVar3 = *pbVar3 | '\x01' << (uVar5 & 7);
          }
          plVar2 = *(longlong **)(param_1 + 0xfe98 + uVar8 * 8);
          uVar5 = (**(code **)(*plVar2 + 0x118))(plVar2,bVar14);
          uVar6 = (ulonglong)uVar5;
          if (uVar5 != 0xffffffff) {
            uVar7 = (**(code **)(**(longlong **)(param_1 + 0xfe98 + uVar8 * 8) + 0xf8))();
            *(undefined8 *)(param_1 + 0xfee8 + uVar8 * 8) = uVar7;
            bVar9 = (**(code **)(**(longlong **)(param_1 + 0xfe98 + uVar8 * 8) + 0x110))();
            FUN_180043ac0(param_1,*(ulonglong *)(param_1 + 0xfee8 + uVar8 * 8),bVar9);
          }
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x50) + (uVar6 >> 0x10) * 0x10);
        (**(code **)(*plVar2 + 0x48))(plVar2,&local_res18);
        local_res18 = local_res18 + (ulonglong)(((uint)uVar6 & 0xffff) * *(int *)(lVar1 + 0x20));
        *(longlong *)(param_1 + 0xfbd8 + uVar8 * 8) = local_res18;
        uVar5 = 0;
        if (local_res10[0] != 0) {
          for (; (local_res10[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if (local_res10[0] == 0) break;
        pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar5 >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      }
    }
    if (*(char *)(param_1 + 0x1018f) != '\0') {
      uVar13 = *(uint *)(param_1 + 0xffcc);
    }
    uVar5 = (uVar13 | *(uint *)(param_1 + 0xffc8)) & ~*(uint *)(param_1 + 0xf680);
    local_res10[0] = uVar5;
    uVar13 = 0;
    bVar14 = uVar5 == 0;
    if (!bVar14) {
      for (; (uVar5 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
      }
    }
    while (!bVar14) {
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar13 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar13 & 7));
      FUN_1800438c0(param_1,*(ulonglong *)(param_1 + 0xfe10 + (ulonglong)(uVar13 & 0xff) * 8));
      uVar13 = 0;
      bVar14 = local_res10[0] == 0;
      if (!bVar14) {
        for (; (local_res10[0] >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
        }
      }
    }
    *(uint *)(param_1 + 0xf680) = *(uint *)(param_1 + 0xf680) | uVar5;
    local_res10[0] = *(uint *)(param_1 + 0xf680);
    *(undefined4 *)(param_1 + 0xffc8) = 0;
    *(byte *)(param_1 + 0xf689) = *(byte *)(param_1 + 0xf689) | uVar5 != 0;
    uVar13 = 0;
    bVar14 = local_res10[0] != 0;
    if (bVar14) {
      for (; (local_res10[0] >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
      }
    }
    while (bVar14) {
      uVar8 = (ulonglong)uVar13 & 0xff;
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar13 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar13 & 7));
      plVar2 = *(longlong **)(param_1 + 0xfd10 + uVar8 * 8);
      local_res8 = *(undefined4 *)(param_1 + 0xe94);
      uVar13 = (uint)uVar8;
      bVar14 = (*(byte *)((longlong)&local_res8 + ((longlong)(int)uVar13 >> 3)) >> (uVar13 & 7) & 1)
               != 0;
      if (plVar2 == (longlong *)0x0) {
        lVar1 = *(longlong *)(param_1 + 0xfd90 + uVar8 * 8);
        if (lVar1 == 0) {
          uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180);
        }
        else {
          uVar5 = FUN_1800a3a68(lVar1,bVar14);
          uVar6 = (ulonglong)uVar5;
          if (uVar5 != 0xffffffff) {
            uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0xfd90 + uVar8 * 8) + 0x40);
            *(ulonglong *)(param_1 + 0xfe10 + uVar8 * 8) = uVar12;
            FUN_1800437e0(param_1,uVar12,0);
          }
        }
      }
      else {
        bVar9 = *(byte *)((longlong)plVar2 + 0x192);
        local_res8 = *(undefined4 *)(param_1 + 0xffcc);
        if ((((*(byte *)((longlong)&local_res8 + ((longlong)(int)uVar13 >> 3)) >> (uVar13 & 7) & 1)
              != 0) && ((bVar9 & 1) != 0)) &&
           ((*(int *)(param_1 + 0x7b0) == 0 || (*(int *)(param_1 + 0x7b4) == 0)))) {
          bVar9 = bVar9 & 0xfe;
        }
        if (bVar9 == 1) {
          uVar6 = (**(code **)(*plVar2 + 0xf8))();
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
          if (((*(longlong *)(lVar1 + 0xb10) != 0) && (uVar6 != 0)) &&
             ((iVar4 = FUN_1800ea5c8(*(longlong **)(lVar1 + 0xb18),uVar6,0,0,
                                     *(longlong *)(lVar1 + 0xb10),lVar1,0,
                                     *(longlong *)(lVar1 + 0xb78)),
              *(int *)(*(longlong *)(lVar1 + 0xb10) + 0x30) != 3 && (iVar4 != 0)))) {
            FUN_1800e23ec(lVar1,uVar6,0,iVar4,0);
          }
          *(undefined1 *)(param_1 + 0x1018b) = 1;
          pbVar3 = (byte *)(param_1 + 0xffc8 + ((longlong)(int)uVar13 >> 3));
          *pbVar3 = *pbVar3 | '\x01' << (uVar13 & 7);
        }
        plVar2 = *(longlong **)(param_1 + 0xfd10 + uVar8 * 8);
        uVar5 = (**(code **)(*plVar2 + 0x118))(plVar2,bVar14);
        uVar6 = (ulonglong)uVar5;
        if (uVar5 != 0xffffffff) {
          uVar7 = (**(code **)(**(longlong **)(param_1 + 0xfd10 + uVar8 * 8) + 0xf8))();
          *(undefined8 *)(param_1 + 0xfe10 + uVar8 * 8) = uVar7;
          bVar9 = (**(code **)(**(longlong **)(param_1 + 0xfd10 + uVar8 * 8) + 0x110))();
          FUN_1800437e0(param_1,*(ulonglong *)(param_1 + 0xfe10 + uVar8 * 8),bVar9);
        }
      }
      if (uVar13 < 8) {
        *(undefined8 *)(param_1 + 0xfa58 + uVar8 * 8) = *(undefined8 *)(param_1 + 0xf8d8);
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x50) + (uVar6 >> 0x10) * 0x10);
      (**(code **)(*plVar2 + 0x48))(plVar2,&local_res18);
      local_res18 = local_res18 + (ulonglong)(((uint)uVar6 & 0xffff) * *(int *)(lVar1 + 0x20));
      *(longlong *)(param_1 + 0xfa98 + uVar8 * 8) = local_res18;
      uVar13 = 0;
      bVar14 = local_res10[0] != 0;
      if (bVar14) {
        for (; (local_res10[0] >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
        }
      }
    }
    return (ulonglong)uVar13 & 0xffffffffffffff00;
  }
  if ((*(char *)(param_1 + 0xf689) != '\0') &&
     (plVar2 = *(longlong **)(param_1 + 0xfcb8), plVar2 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*plVar2 + 0x118))(plVar2,0,0);
    if ((uint)in_RAX != 0xffffffff) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1930);
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x50) + ((in_RAX & 0xffffffff) >> 0x10) * 0x10);
      (**(code **)(*plVar2 + 0x48))(plVar2,&local_res8);
      *(ulonglong *)(param_1 + 0xfb18) =
           CONCAT44(uStackX_c,local_res8) +
           (ulonglong)(((uint)in_RAX & 0xffff) * *(int *)(lVar1 + 0x20));
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0xfcb8) + 0xf8))();
      *(ulonglong *)(param_1 + 0xfe90) = uVar8;
      in_RAX = FUN_1800437e0(param_1,uVar8,0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

