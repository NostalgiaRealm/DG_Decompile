/*
 * FUN_1400063f4 at 1400063f4
 * undefined __fastcall FUN_1400063f4(longlong param_1)
 * Address ranges: 1400063f4-14000700a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400063f4(longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  HWND pHVar6;
  LRESULT LVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  BOOL bEnable;
  ulonglong uVar15;
  ulonglong uVar16;
  char cVar17;
  uint *puVar18;
  int iVar19;
  CHAR local_1c8 [64];
  uint local_188 [8];
  CHAR local_168 [31];
  char cStack_149;
  CHAR local_148 [14];
  char local_13a [114];
  CHAR local_c8 [136];
  
  piVar2 = *(int **)(param_1 + 0x80);
  uVar16 = 0;
  uVar14 = 0;
  if ((((*(int *)(param_1 + 0x130) != *piVar2) || (*(int *)(param_1 + 0x134) != piVar2[1])) ||
      (*(int *)(param_1 + 0x138) != piVar2[2])) ||
     ((*(int *)(param_1 + 0x13c) != piVar2[6] ||
      (cVar17 = *(char *)(param_1 + 0x140), cVar17 != *(char *)((longlong)piVar2 + 0x22))))) {
    *(int *)(param_1 + 0x130) = *piVar2;
    iVar4 = piVar2[1];
    *(int *)(param_1 + 0x134) = iVar4;
    iVar11 = piVar2[2];
    *(int *)(param_1 + 0x138) = iVar11;
    iVar1 = piVar2[6];
    *(int *)(param_1 + 0x13c) = iVar1;
    cVar17 = *(char *)((longlong)piVar2 + 0x22);
    iVar19 = iVar4 + -1;
    if (iVar4 < 1) {
      iVar19 = 0;
    }
    *(char *)(param_1 + 0x140) = cVar17;
    FUN_1400017a4((longlong *)(param_1 + 0x148),iVar19,iVar11,iVar1,cVar17);
    FUN_14000e4d0(param_1,0x40b);
    FUN_14000e4d0(param_1,0x3f1);
    cVar17 = *(char *)(param_1 + 0x140);
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  uVar12 = uVar14;
  if ((*(uint *)(lVar10 + 0x92) != 0) && (*(uint *)(lVar10 + 0x96) != 0)) {
    uVar12 = *(uint *)(lVar10 + 0x92) / *(uint *)(lVar10 + 0x96);
  }
  puVar18 = (uint *)(ulonglong)uVar12;
  FUN_140001cbc(param_1 + 0x148,*(uint *)(lVar10 + 0x8a),*(uint *)(lVar10 + 0x8e),uVar12,cVar17);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28a) != '\0') {
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f1);
    SendMessageW(pHVar6,0x14b,0,0);
    uVar15 = uVar16;
    do {
      puVar18 = (uint *)(ulonglong)(uint)(&DAT_140026bb8)[uVar15];
      FUN_14000e340(param_1,0x3f1,(LPARAM)(&PTR_s_Current_desktop_bit_depth_140026af8)[uVar15],
                    (LPARAM)puVar18);
      uVar15 = uVar15 + 1;
    } while (uVar15 != 4);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28a) = 0;
    LVar7 = FUN_14000e230(param_1,0x3f1);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar12 = uVar14;
    if (uVar13 != 0) {
      do {
        iVar11 = (int)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f1,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x9a)) goto LAB_1400065c4;
        uVar12 = iVar11 + 1;
        uVar15 = (ulonglong)uVar12;
      } while (uVar12 < uVar13);
    }
    if (uVar12 == uVar13) {
      iVar11 = -1;
LAB_1400065c4:
      FUN_14000e4a0(param_1,0x3f1,iVar11);
    }
  }
  uVar12 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28b) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f2);
    uVar5 = (uint)LVar7;
    uVar15 = uVar16;
    uVar13 = uVar12;
    if (uVar5 != 0) {
      do {
        uVar13 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f2,uVar15);
        if ((iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xa2)) &&
           (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xa6))) {
          FUN_14000e4a0(param_1,0x3f2,uVar13);
          break;
        }
        uVar13 = uVar13 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < uVar5);
    }
    if (uVar13 == uVar5) {
      uVar13 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa2);
      if (uVar13 == *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa6)) {
        FUN_140024290(local_c8,"%d",(ulonglong)uVar13,puVar18);
      }
      else {
        if (uVar13 == 0) {
          FUN_140024290(local_1c8,"%s",&DAT_1400272d4,puVar18);
        }
        else {
          FUN_140024290(local_1c8,"%d",(ulonglong)uVar13,puVar18);
        }
        uVar13 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xa6);
        if (uVar13 == 0) {
          FUN_140024290((LPSTR)local_188,"%s",&DAT_1400272d4,puVar18);
        }
        else {
          FUN_140024290((LPSTR)local_188,"%d",(ulonglong)uVar13,puVar18);
        }
        puVar18 = local_188;
        FUN_140024290(local_c8,"x:%s, y:%s",local_1c8,puVar18);
      }
      FUN_14000e180(param_1,0x3f2,local_c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28b) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28d) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f3);
    uVar5 = (uint)LVar7;
    uVar15 = uVar16;
    uVar13 = uVar12;
    if (uVar5 != 0) {
      do {
        uVar13 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f3,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x9e)) {
          FUN_14000e4a0(param_1,0x3f3,uVar13);
          break;
        }
        uVar13 = uVar13 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < uVar5);
    }
    if (uVar13 == uVar5) {
      FUN_140024290(local_1c8,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0x9e),
                    puVar18);
      FUN_14000e180(param_1,0x3f3,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28c) != '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f7);
    EnableWindow(pHVar6,(uint)(iVar4 - 3U < 6));
    LVar7 = FUN_14000e230(param_1,0x3f7);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    if (uVar13 != 0) {
      do {
        uVar14 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3f7,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xaa)) {
          FUN_14000e4a0(param_1,0x3f7,uVar14);
          break;
        }
        uVar14 = uVar14 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_140024290(local_1c8,"%d",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xaa),
                    puVar18);
      FUN_14000e180(param_1,0x3f7,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28d) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28e) == '\0') goto LAB_140006a49;
  LVar7 = FUN_14000e230(param_1,0x3f5);
  uVar13 = (uint)LVar7;
  uVar15 = uVar16;
  uVar14 = uVar12;
  if (uVar13 != 0) {
    do {
      uVar14 = (uint)uVar15;
      uVar5 = FUN_14000e270(param_1,0x3f5,uVar15);
      lVar10 = *(longlong *)(param_1 + 0x80);
      uVar15 = (ulonglong)uVar5;
      if ((((*(int *)(&DAT_140026ca8 + uVar15 * 4) == *(int *)(lVar10 + 0xae)) &&
           (*(int *)(&DAT_140026ca8 + uVar15 * 4) == *(int *)(lVar10 + 0xb2))) &&
          (*(int *)(&DAT_140026a98 + uVar15 * 4) == *(int *)(lVar10 + 0xb6))) &&
         (*(int *)(&DAT_140026b58 + uVar15 * 4) == *(int *)(lVar10 + 0xba))) {
        FUN_14000e4a0(param_1,0x3f5,uVar14);
        break;
      }
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
    } while (uVar14 < uVar13);
  }
  if (uVar14 == uVar13) {
    lVar10 = *(longlong *)(param_1 + 0x80);
    uVar14 = *(uint *)(lVar10 + 0xb6);
    if (uVar14 == 0xffffffff) {
      pcVar9 = "%d_%d";
      puVar18 = (uint *)(ulonglong)(*(uint *)(lVar10 + 0xba) & 0xffff);
      uVar14 = *(uint *)(lVar10 + 0xba) >> 0x10;
LAB_14000695d:
      FUN_140024290(local_148,pcVar9,(ulonglong)uVar14,puVar18);
      uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xae);
      puVar18 = (uint *)(*(longlong *)(param_1 + 0x80) + 0xb2);
      if ((uVar14 == 0xffffffff) && (*puVar18 == 0xffffffff)) {
        pcVar9 = &cStack_149;
        do {
          pcVar8 = pcVar9;
          pcVar9 = pcVar8 + 1;
        } while (*pcVar9 != '\0');
        builtin_strncpy(pcVar8 + 1,", pos:centered",0xf);
      }
      else {
        puVar18 = (uint *)(ulonglong)*puVar18;
        FUN_140024290(local_168,", pos:(%d|%d)",(ulonglong)uVar14,puVar18);
        pcVar9 = &cStack_149;
        do {
          pcVar9 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        lVar10 = 0;
        do {
          cVar17 = local_168[lVar10];
          pcVar9[lVar10] = cVar17;
          lVar10 = lVar10 + 1;
        } while (cVar17 != '\0');
      }
    }
    else if ((uVar14 != 0) &&
            (puVar18 = (uint *)(ulonglong)*(uint *)(lVar10 + 0xba), *(uint *)(lVar10 + 0xba) != 0))
    {
      pcVar9 = "(%d|%d)";
      goto LAB_14000695d;
    }
    FUN_14000e180(param_1,0x3f5,local_148);
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (((*(int *)(lVar10 + 0x1c) == 6) || (*(int *)(lVar10 + 0x1c) < 3)) ||
     (bEnable = 1, 8 < *(int *)(lVar10 + 0x1c))) {
    bEnable = 0;
  }
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f5);
  EnableWindow(pHVar6,bEnable);
  *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28e) = 0;
LAB_140006a49:
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x28f) != '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f6);
    EnableWindow(pHVar6,(uint)(iVar4 - 3U < 6));
    LVar7 = FUN_14000e230(param_1,0x3f6);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3f6,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xca)) {
          FUN_14000e4a0(param_1,0x3f6,(int)uVar15);
          goto LAB_140006adf;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3f6,"");
    }
LAB_140006adf:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x28f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x290) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f9);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3f9,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xce)) {
          FUN_14000e4a0(param_1,0x3f9,(int)uVar15);
          goto LAB_140006b51;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3f9,"");
    }
LAB_140006b51:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x290) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x291) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3fa);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3fa,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xd2)) {
          FUN_14000e4a0(param_1,0x3fa,(int)uVar15);
          goto LAB_140006bc3;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3fa,"");
    }
LAB_140006bc3:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x291) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x292) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3fb);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        uVar14 = (uint)uVar15;
        iVar4 = FUN_14000e270(param_1,0x3fb,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xd6)) {
          FUN_14000e4a0(param_1,0x3fb,uVar14);
          break;
        }
        uVar14 = uVar14 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_140024290(local_1c8,"%d sec",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xd6),
                    puVar18);
      FUN_14000e180(param_1,0x3fb,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x292) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x293) != '\0') {
    FUN_14000e200(param_1,0x403,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xc2)) &
                  0xffffffffffffff01);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x293) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x294) != '\0') {
    uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xc2);
    FUN_14000e200(param_1,0x404,
                  (ulonglong)(CONCAT31((uint3)(uVar14 >> 9),(char)(uVar14 >> 1)) & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x294) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x295) != '\0') {
    FUN_14000e200(param_1,0x405,
                  (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xc2) >> 2 & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x295) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x296) != '\0') {
    FUN_14000e200(param_1,0x406,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xc6)) &
                  0xffffffffffffff01);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x296) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x297) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f4);
    uVar13 = (uint)LVar7;
    uVar15 = uVar16;
    uVar14 = uVar12;
    if (uVar13 != 0) {
      do {
        iVar4 = FUN_14000e270(param_1,0x3f4,uVar15);
        if (iVar4 == *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe)) {
          FUN_14000e4a0(param_1,0x3f4,(int)uVar15);
          goto LAB_140006dec;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar13);
    }
    if (uVar14 == uVar13) {
      FUN_14000e180(param_1,0x3f4,"");
    }
LAB_140006dec:
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x297) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x298) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3f8);
    uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xde);
    uVar15 = (ulonglong)uVar14;
    if (uVar14 == 0) {
      uVar15 = 1;
    }
    uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + 0xda);
    uVar14 = (uint)LVar7;
    if (uVar14 != 0) {
      do {
        uVar12 = (uint)uVar16;
        iVar4 = FUN_14000e270(param_1,0x3f8,uVar16);
        if (((int)(uVar3 % uVar15) == 0) && (iVar4 == (int)(uVar3 / uVar15))) {
          FUN_14000e4a0(param_1,0x3f8,uVar12);
          break;
        }
        uVar12 = uVar12 + 1;
        uVar16 = (ulonglong)uVar12;
      } while (uVar12 < uVar14);
    }
    if (uVar12 == uVar14) {
      FUN_1400143b0(*(uint *)(*(longlong *)(param_1 + 0x80) + 0xda),
                    *(uint *)(*(longlong *)(param_1 + 0x80) + 0xde),local_1c8);
      FUN_14000e180(param_1,0x3f8,local_1c8);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x298) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x299) != '\0') {
    FUN_14000e200(param_1,0x407,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xe6)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x299) = 0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x407);
    EnableWindow(pHVar6,(uint)(iVar4 == 0));
  }
  lVar10 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar10 + 0x29a) != '\0') {
    FUN_14000e200(param_1,0x408,
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(lVar10 + 0xe2)) &
                  0xffffffffffffff01);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x29a) = 0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x408);
    EnableWindow(pHVar6,(uint)(iVar4 == 0));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x29b) != '\0') {
    uVar14 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0xe2);
    FUN_14000e200(param_1,0x409,
                  (ulonglong)(CONCAT31((uint3)(uVar14 >> 9),(char)(uVar14 >> 1)) & 0xffffff01));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x29b) = 0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 0xbe);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x409);
    EnableWindow(pHVar6,(uint)(iVar4 == 0));
  }
  return;
}

