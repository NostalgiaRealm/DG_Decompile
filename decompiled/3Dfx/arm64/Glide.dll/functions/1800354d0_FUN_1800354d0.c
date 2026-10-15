/*
 * FUN_1800354d0 at 1800354d0
 * undefined __cdecl FUN_1800354d0(longlong * param_1, longlong * param_2, uint param_3, undefined * * * * param_4)
 * Address ranges: 1800354d0-18003592b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800354d0(longlong *param_1,longlong *param_2,uint param_3,undefined ****param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined ****ppppuVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  RECT local_80;
  tagRECT local_70;
  int local_60;
  undefined4 uStack_5c;
  
  bVar4 = *(byte *)((longlong)param_2 + 0x94);
  ppppuVar9 = param_4;
  BVar5 = IsRectEmpty((RECT *)((longlong)param_2 + 0x34));
  if (BVar5 == 0) {
    FUN_18001e6a0(param_1[0x28]);
    if (*(char *)((longlong)param_2 + 0x99) == '\0') {
      if (*(char *)((longlong)param_2 + 0x96) != '\0') {
        uVar16 = (uint)bVar4;
        if ((char)param_2[0x13] == '\0') {
          FUN_180035260((longlong)param_1,(longlong)param_2,0,0,0,0,bVar4);
        }
        else {
          uVar10 = *(uint *)((longlong)param_2 + 0x3c);
          iVar15 = (int)param_2[8];
          uVar2 = *(uint *)((longlong)param_2 + 0x34);
          uVar3 = *(uint *)(param_2 + 7);
          *(uint *)((longlong)param_2 + 0x44) =
               *(int *)((longlong)param_2 + 0x44) + (iVar15 - uVar3 >> 4);
          if ((((uVar2 == 0) && (uVar10 == *(uint *)(param_2 + 4) && uVar3 == 0)) &&
              (iVar15 == *(int *)((longlong)param_2 + 0x24))) &&
             (*(char *)((longlong)param_2 + 0x49) == '\0')) {
            plVar6 = *(longlong **)(*(longlong *)(param_1[0x28] + 0x31c0) + 8);
            if (uVar16 == 0) {
              lVar8 = param_2[0x2e];
              lVar7 = param_2[0x20];
            }
            else {
              lVar8 = param_2[0x2f];
              lVar7 = param_2[0x26];
            }
            (**(code **)(*plVar6 + 0x178))(plVar6,lVar7,lVar8);
          }
          else {
            uStack_5c = 1;
            local_70.right = 0;
            plVar6 = *(longlong **)(*(longlong *)(param_1[0x28] + 0x31c0) + 8);
            local_70.left = uVar2;
            local_70.top = uVar3;
            local_70.bottom = uVar10;
            local_60 = iVar15;
            if (uVar16 == 0) {
              (**(code **)(*plVar6 + 0x170))
                        (plVar6,param_2[0x20],0,uVar2,uVar3,0,param_2[0x2e],0,&local_70);
            }
            else {
              (**(code **)(*plVar6 + 0x170))(plVar6,param_2[0x26]);
            }
          }
        }
        ppppuVar9 = (undefined ****)(ulonglong)uVar16;
        FUN_180034dd8((longlong)param_1,(longlong)param_2,(ulonglong)param_3,(ulonglong)ppppuVar9,
                      *(uint *)((longlong)param_2 + 0x34),*(uint *)(param_2 + 7),
                      *(uint *)((longlong)param_2 + 0x3c),*(uint *)(param_2 + 8),(byte)param_4);
        *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
      }
    }
    else {
      puVar1 = (ulonglong *)(param_2 + 0x14);
      uVar13 = *puVar1;
      uVar16 = 0;
      uVar12 = uVar13;
      do {
        uVar14 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar10 = (uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
        if ((1 - (uVar10 >> 6) & 0xff) != 0) {
          uVar14 = -1L << ((ulonglong)(uVar10 + 1) & 0x3f);
          iVar15 = uVar16 + uVar10;
          uVar12 = ~uVar12 & uVar14;
          uVar13 = uVar13 & uVar14;
          if (iVar15 != -1) goto LAB_1800355c0;
          break;
        }
        uVar16 = uVar16 + 0x40;
        if (uVar16 == 0x100) break;
        uVar13 = puVar1[uVar16 >> 6];
        uVar12 = 0;
        if (0x100 - uVar16 < 0x40) {
          uVar12 = 0xffffffffffffffff;
        }
        uVar12 = uVar13 | uVar12;
      } while (uVar16 < 0x100);
    }
LAB_180035870:
    FUN_18002ab30((longlong)param_2);
    if (param_2 == param_1 + 0x29) {
      (**(code **)(*param_1 + 0x98))(param_1,0);
    }
    if (((*(char *)((longlong)param_1 + 300) != '\0') ||
        (**(char **)(param_1[0x28] + 0x31a8) != '\0')) &&
       (FUN_180036e48((longlong)param_1,1,0,ppppuVar9),
       *(char *)(*(longlong *)(param_1[0x28] + 0x31a8) + 3) != '\0')) {
      DebugBreak();
    }
    if (*(char *)((longlong)param_1 + 0x12d) != '\0') {
      FUN_180036e48((longlong)param_1,2,0,ppppuVar9);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1[0x28] + 0x31b0) + 0x620));
  }
  return;
LAB_1800355c0:
  uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
  uVar10 = (uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
  if ((1 - (uVar10 >> 6) & 0xff) == 0) {
    uVar16 = uVar16 + 0x40;
    if (uVar16 != 0x100) {
      uVar13 = puVar1[uVar16 >> 6];
      uVar12 = 0;
      if (0x100 - uVar16 < 0x40) {
        uVar12 = 0xffffffffffffffff;
      }
      uVar12 = ~(uVar13 | uVar12);
      if (uVar16 < 0x100) goto LAB_1800355c0;
    }
    iVar11 = -1;
  }
  else {
    uVar14 = -1L << ((ulonglong)(uVar10 + 1) & 0x3f);
    uVar12 = uVar12 & uVar14;
    uVar13 = uVar13 & uVar14;
    iVar11 = uVar16 + uVar10;
  }
  if (iVar11 == -1) {
    iVar11 = iVar15;
  }
  FUN_180035260((longlong)param_1,(longlong)param_2,iVar15 << 0xf,iVar11 << 0xf,param_2[0xb],
                (int)param_2[0xd],*(byte *)((longlong)param_2 + 0x94));
  auVar17 = FUN_18002a9a8(iVar15 << 0xf,iVar11 << 0xf,*(uint *)(param_2 + 4),
                          *(uint *)((longlong)param_2 + 0x24),(int)param_2[0xd],
                          (uint)*(byte *)((longlong)param_2 + 0x94));
  local_80.left = *(LONG *)((longlong)param_2 + 0x34);
  local_80.top = auVar17._4_4_;
  local_80.right = *(LONG *)((longlong)param_2 + 0x3c);
  local_80.bottom = auVar17._12_4_;
  if (auVar17._8_4_ != 0) {
    local_80.bottom = local_80.bottom + 1;
  }
  IntersectRect(&local_70,&local_80,(RECT *)((longlong)param_2 + 0x34));
  ppppuVar9 = (undefined ****)(ulonglong)bVar4;
  FUN_180034dd8((longlong)param_1,(longlong)param_2,(ulonglong)param_3,(ulonglong)ppppuVar9,
                local_70.left,local_70.top,local_70.right,local_70.bottom,(byte)param_4);
  *(byte *)((longlong)param_2 + 0x4a) = *(byte *)((longlong)param_2 + 0x4a) | 2;
  while( true ) {
    if (0xff < uVar16) goto LAB_180035870;
    uVar14 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar10 = (uint)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
    if ((1 - (uVar10 >> 6) & 0xff) != 0) break;
    uVar16 = uVar16 + 0x40;
    if (uVar16 == 0x100) goto LAB_180035870;
    uVar13 = puVar1[uVar16 >> 6];
    uVar12 = 0;
    if (0x100 - uVar16 < 0x40) {
      uVar12 = 0xffffffffffffffff;
    }
    uVar12 = ~(uVar13 | uVar12);
  }
  uVar14 = -1L << ((ulonglong)(uVar10 + 1) & 0x3f);
  iVar15 = uVar16 + uVar10;
  uVar13 = uVar13 & uVar14;
  uVar12 = uVar12 & uVar14;
  if (iVar15 == -1) goto LAB_180035870;
  goto LAB_1800355c0;
}

