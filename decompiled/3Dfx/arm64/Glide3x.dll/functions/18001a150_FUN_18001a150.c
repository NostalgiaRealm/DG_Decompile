/*
 * FUN_18001a150 at 18001a150
 * ulonglong __cdecl FUN_18001a150(longlong * param_1, longlong * param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18001a150-18001a64f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001a150(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong extraout_x0;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  tagRECT local_f0;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_d0;
  RECT local_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar2 = *(byte *)((longlong)param_2 + 0x94);
  uVar6 = IsRectEmpty((RECT *)((longlong)param_2 + 0x34));
  uVar10 = (ulonglong)uVar6;
  if (uVar6 == 0) {
    if (*(char *)((longlong)param_2 + 0x99) == '\0') {
      if (*(char *)((longlong)param_2 + 0x96) != '\0') {
        if ((char)param_2[0x13] == '\0') {
          local_f0.bottom = *(LONG *)(param_2 + 4);
          local_e0 = *(int *)((longlong)param_2 + 0x24);
          local_f0.left = 0;
          local_f0.top = 0;
          local_f0.right = 0;
          uStack_dc = 1;
          FUN_180019a18((longlong)param_1,(longlong)param_2,&local_f0.left,bVar2);
        }
        else {
          local_f0.bottom = *(uint *)((longlong)param_2 + 0x3c);
          local_e0 = (int)param_2[8];
          local_f0._0_8_ = *(undefined8 *)((longlong)param_2 + 0x34);
          local_78 = 0;
          local_a8 = 1;
          local_f0.right = 0;
          uStack_68 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_dc = 1;
          *(uint *)((longlong)param_2 + 0x44) =
               *(int *)((longlong)param_2 + 0x44) + ((uint)(local_e0 - (int)param_2[7]) >> 4);
          bVar5 = bVar2 == 0;
          lVar7 = 0x150;
          if (bVar5) {
            lVar7 = 0x120;
          }
          local_a0 = 0;
          local_b0 = *(undefined8 *)((longlong)param_2 + lVar7);
          local_70 = 0;
          lVar11 = 0x164;
          if (bVar5) {
            lVar11 = 0x134;
          }
          _local_90 = CONCAT44(1,*(undefined4 *)((longlong)param_2 + 0x24));
          _uStack_98 = CONCAT44((int)param_2[4],*(undefined4 *)((longlong)param_2 + lVar11));
          lVar11 = 0x168;
          if (bVar5) {
            lVar11 = 0x138;
          }
          local_88 = (ulonglong)*(uint *)((longlong)param_2 + lVar11);
          lVar11 = 0x140;
          if (bVar5) {
            lVar11 = 0x110;
          }
          local_80 = *(ulonglong *)((longlong)param_2 + lVar11);
          lVar11 = *(longlong *)(*(longlong *)(param_1[0x28] + 0x3340) + 0x1508);
          *(int *)(lVar11 + 0x684) = *(int *)(lVar11 + 0x684) + 1;
          FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1[0x28] + 0x3340) + 0x1508),local_80,0,0,
                        0x400);
          FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1[0x28] + 0x3340) + 0x1508),
                        *(ulonglong *)((longlong)param_2 + lVar7),0,1,0x800);
          FUN_18004fe40(*(longlong *)(*(longlong *)(param_1[0x28] + 0x3340) + 0x1508),&local_80,
                        local_f0.left,local_f0.top,0,&local_b0,&local_f0);
          FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1[0x28] + 0x3340) + 0x1508),
                        *(ulonglong *)((longlong)param_2 + lVar7),0,1,0);
          lVar7 = FUN_18004ecf8(*(longlong *)(*(longlong *)(param_1[0x28] + 0x3340) + 0x1508));
          param_2[0x1a] = lVar7;
          lVar7 = *(longlong *)(*(longlong *)(param_1[0x28] + 0x3340) + 0x1508);
          iVar14 = *(int *)(lVar7 + 0x684) + -1;
          *(int *)(lVar7 + 0x684) = iVar14;
          if ((iVar14 == 0) && (*(int *)(lVar7 + 0x680) <= *(int *)(lVar7 + 0x678))) {
            FUN_18004e830(lVar7 + 8,0);
          }
        }
        FUN_180019438(param_1,param_2,(byte)param_3,bVar2,*(uint *)((longlong)param_2 + 0x34),
                      *(uint *)(param_2 + 7),*(uint *)((longlong)param_2 + 0x3c),
                      *(uint *)(param_2 + 8),(byte)param_4);
        *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
      }
    }
    else {
      puVar1 = (ulonglong *)(param_2 + 0x14);
      uVar12 = *puVar1;
      uVar6 = 0;
      uVar10 = uVar12;
      do {
        uVar13 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar8 = (uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20);
        if ((1 - (uVar8 >> 6) & 0xff) != 0) {
          uVar13 = -1L << ((ulonglong)(uVar8 + 1) & 0x3f);
          iVar14 = uVar6 + uVar8;
          uVar10 = ~uVar10 & uVar13;
          uVar12 = uVar12 & uVar13;
          uVar3 = param_3;
          uVar8 = (uint)bVar2;
          uVar4 = param_4;
          if (iVar14 != -1) goto LAB_18001a238;
          break;
        }
        uVar6 = uVar6 + 0x40;
        if (uVar6 == 0x100) break;
        uVar12 = puVar1[uVar6 >> 6];
        uVar10 = 0;
        if (0x100 - uVar6 < 0x40) {
          uVar10 = 0xffffffffffffffff;
        }
        uVar10 = uVar12 | uVar10;
      } while (uVar6 < 0x100);
    }
LAB_18001a5ac:
    uVar10 = FUN_18001d7d8((longlong)param_2);
    if (param_2 == param_1 + 0x29) {
      uVar10 = (**(code **)(*param_1 + 0x98))(param_1,0);
    }
    if ((*(char *)((longlong)param_1 + 300) != '\0') ||
       (**(char **)(param_1[0x28] + 0x3328) != '\0')) {
      uVar6 = FUN_18001c1d0((longlong)param_1,1,0);
      uVar10 = (ulonglong)uVar6;
      if (*(char *)(*(longlong *)(param_1[0x28] + 0x3328) + 3) != '\0') {
        DebugBreak();
        uVar10 = extraout_x0;
      }
    }
    if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
      uVar6 = FUN_18001c1d0((longlong)param_1,2,0);
      uVar10 = (ulonglong)uVar6;
    }
  }
  return uVar10;
LAB_18001a238:
  local_d8 = uVar4;
  local_d4 = uVar8;
  local_d0 = uVar3;
  uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar8 = (uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20);
  if ((1 - (uVar8 >> 6) & 0xff) == 0) {
    uVar6 = uVar6 + 0x40;
    if (uVar6 != 0x100) {
      uVar12 = puVar1[uVar6 >> 6];
      uVar10 = 0;
      if (0x100 - uVar6 < 0x40) {
        uVar10 = 0xffffffffffffffff;
      }
      uVar10 = ~(uVar12 | uVar10);
      uVar3 = local_d0;
      uVar8 = local_d4;
      uVar4 = local_d8;
      if (uVar6 < 0x100) goto LAB_18001a238;
    }
    iVar9 = -1;
  }
  else {
    uVar13 = -1L << ((ulonglong)(uVar8 + 1) & 0x3f);
    uVar10 = uVar10 & uVar13;
    uVar12 = uVar12 & uVar13;
    iVar9 = uVar6 + uVar8;
  }
  if (iVar9 == -1) {
    iVar9 = iVar14;
  }
  auVar15 = FUN_18001d650(iVar14 << 0xf,iVar9 << 0xf,*(uint *)(param_2 + 4),
                          *(uint *)((longlong)param_2 + 0x24),(int)param_2[0xd],
                          (uint)*(byte *)((longlong)param_2 + 0x94));
  local_c8.left = *(LONG *)((longlong)param_2 + 0x34);
  local_c8.top = auVar15._4_4_;
  local_c8.right = *(LONG *)((longlong)param_2 + 0x3c);
  local_c8.bottom = auVar15._12_4_;
  if (auVar15._8_4_ != 0) {
    local_c8.bottom = local_c8.bottom + 1;
  }
  IntersectRect(&local_f0,&local_c8,(RECT *)((longlong)param_2 + 0x34));
  FUN_180019bb0((longlong)param_1,(longlong)param_2,iVar14 << 0xf,iVar9 << 0xf,param_2[0xb],
                (int)param_2[0xd],(uint)*(byte *)((longlong)param_2 + 0x94));
  FUN_180019438(param_1,param_2,(byte)local_d0,(byte)local_d4,local_f0.left,local_f0.top,
                local_f0.right,local_f0.bottom,(byte)local_d8);
  *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
  while( true ) {
    if (0xff < uVar6) goto LAB_18001a5ac;
    uVar13 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar8 = (uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20);
    if ((1 - (uVar8 >> 6) & 0xff) != 0) break;
    uVar6 = uVar6 + 0x40;
    if (uVar6 == 0x100) goto LAB_18001a5ac;
    uVar12 = puVar1[uVar6 >> 6];
    uVar10 = 0;
    if (0x100 - uVar6 < 0x40) {
      uVar10 = 0xffffffffffffffff;
    }
    uVar10 = ~(uVar12 | uVar10);
  }
  uVar13 = -1L << ((ulonglong)(uVar8 + 1) & 0x3f);
  iVar14 = uVar6 + uVar8;
  uVar10 = uVar10 & uVar13;
  uVar12 = uVar12 & uVar13;
  uVar3 = local_d0;
  uVar8 = local_d4;
  uVar4 = local_d8;
  if (iVar14 == -1) goto LAB_18001a5ac;
  goto LAB_18001a238;
}

