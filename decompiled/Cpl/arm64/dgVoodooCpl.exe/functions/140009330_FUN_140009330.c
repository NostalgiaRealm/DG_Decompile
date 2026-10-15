/*
 * FUN_140009330 at 140009330
 * undefined __cdecl FUN_140009330(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140009330-140009a7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140009330(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  LRESULT LVar4;
  ulonglong uVar5;
  HWND hWnd;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  CHAR aCStack_c0 [32];
  CHAR aCStack_a0 [128];
  
  FUN_140007490(param_1 + 0x528);
  FUN_1400088d0(param_1 + 0x660,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x27b) != '\0') {
    FUN_14000fcf0(param_1 + 0x8f0,0x401,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x80))
    ;
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x27b) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x27c) != '\0') {
    uVar10 = 0;
    uVar7 = 0;
    LVar4 = FUN_14000fd38(param_1 + 0x8f0,0x406);
    if ((uint)LVar4 != 0) {
      do {
        uVar7 = (uint)uVar10;
        iVar3 = FUN_14000fd78(param_1 + 0x8f0,0x406,uVar10);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x970) + 0x58)) break;
        uVar7 = uVar7 + 1;
        uVar10 = (ulonglong)uVar7;
      } while (uVar7 < (uint)LVar4);
    }
    FUN_14000fff0(param_1 + 0x8f0,0x406,uVar7);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x27c) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x27d) != '\0') {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x970) + 0x58);
    FUN_140010038(param_1 + 0x8f0,0x402);
    if (6 < uVar7) {
      uVar7 = 1;
    }
    lVar8 = 0;
    do {
      uVar1 = *(uint *)(&DAT_14002c160 + lVar8 * 4 + (ulonglong)uVar7 * 0x28);
      if (uVar1 != 0) {
        FUN_140024880(aCStack_c0,"%d MB",(ulonglong)uVar1,param_4,param_5,param_6,param_7,param_8);
        param_4 = (ulonglong)*(uint *)(&DAT_14002c160 + lVar8 * 4 + (ulonglong)uVar7 * 0x28);
        FUN_14000fe68(param_1 + 0x8f0,0x402,(LPARAM)aCStack_c0,param_4);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x263) = 0;
  }
  uVar10 = 0;
  uVar7 = 0;
  LVar4 = FUN_14000fd38(param_1 + 0x8f0,0x402);
  uVar1 = (uint)LVar4;
  if (uVar1 != 0) {
    do {
      uVar5 = FUN_14000fd78(param_1 + 0x8f0,0x402,uVar10);
      uVar7 = (uint)uVar10;
      if ((uVar5 & 0xffffffff) == *(ulonglong *)(*(longlong *)(param_1 + 0x970) + 0x5c) >> 0x14) {
        FUN_14000fff0(param_1 + 0x8f0,0x402,uVar7);
        break;
      }
      uVar7 = uVar7 + 1;
      uVar10 = (ulonglong)uVar7;
    } while (uVar7 < uVar1);
  }
  if (uVar7 == uVar1) {
    FUN_140024880(aCStack_a0,"%d MB",*(ulonglong *)(*(longlong *)(param_1 + 0x970) + 0x5c) >> 0x14,
                  param_4,param_5,param_6,param_7,param_8);
    FUN_14000fc58(param_1 + 0x8f0,0x402,aCStack_a0);
  }
  piVar6 = *(int **)(param_1 + 0x970);
  if ((((*(int *)(param_1 + 0xa18) != *piVar6) || (*(int *)(param_1 + 0xa1c) != piVar6[1])) ||
      (*(int *)(param_1 + 0xa20) != piVar6[2])) ||
     ((*(int *)(param_1 + 0xa24) != piVar6[6] ||
      (bVar2 = *(byte *)(param_1 + 0xa28), bVar2 != *(byte *)((longlong)piVar6 + 0x22))))) {
    *(int *)(param_1 + 0xa18) = *piVar6;
    iVar11 = piVar6[1];
    *(int *)(param_1 + 0xa1c) = iVar11;
    uVar7 = piVar6[2];
    iVar3 = 0;
    if (0 < iVar11) {
      iVar3 = iVar11 + -1;
    }
    *(uint *)(param_1 + 0xa20) = uVar7;
    uVar1 = piVar6[6];
    *(uint *)(param_1 + 0xa24) = uVar1;
    bVar2 = *(byte *)((longlong)piVar6 + 0x22);
    *(byte *)(param_1 + 0xa28) = bVar2;
    FUN_140001638((longlong *)(param_1 + 0xa30),iVar3,uVar7,uVar1,bVar2,param_6,param_7,param_8);
    bVar2 = *(byte *)(param_1 + 0xa28);
  }
  uVar10 = (ulonglong)bVar2;
  lVar8 = *(longlong *)(param_1 + 0x970);
  if ((*(uint *)(lVar8 + 0x70) == 0) || (uVar7 = *(uint *)(lVar8 + 0x74), uVar7 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x70) / uVar7;
    }
    uVar5 = (ulonglong)uVar1;
  }
  uVar9 = (ulonglong)*(uint *)(lVar8 + 0x68);
  FUN_140002050(param_1 + 0xa30,*(uint *)(lVar8 + 100),uVar9,uVar5,uVar10,param_6,param_7,param_8);
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x260) != '\0') {
    FUN_1400022d8((longlong *)(param_1 + 0xb68));
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x281) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x281) != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x281) = 0;
    FUN_1400023e0(param_1 + 0xb68,*(int *)(*(longlong *)(param_1 + 0x970) + 0x6c));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x27f) != '\0') {
    LVar4 = FUN_14000fd38(param_1 + 0x8f0,0x40b);
    uVar9 = 0;
    if ((uint)LVar4 != 0) {
      do {
        iVar3 = FUN_14000fd78(param_1 + 0x8f0,0x40b,uVar9);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x970) + 0x78)) break;
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < (uint)LVar4);
    }
    FUN_14000fff0(param_1 + 0x8f0,0x40b,(int)uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x27f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x280) != '\0') {
    LVar4 = FUN_14000fd38(param_1 + 0x8f0,0x40c);
    uVar9 = 0;
    if ((uint)LVar4 != 0) {
      do {
        iVar3 = FUN_14000fd78(param_1 + 0x8f0,0x40c,uVar9);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x970) + 0x7c)) break;
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < (uint)LVar4);
    }
    FUN_14000fff0(param_1 + 0x8f0,0x40c,(int)uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x280) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x27e) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x87);
    FUN_14000fcf0(param_1 + 0x8f0,0x40e,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x27e) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x283) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x81);
    FUN_14000fcf0(param_1 + 0x8f0,0x403,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x283) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x284) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x82);
    FUN_14000fcf0(param_1 + 0x8f0,0x404,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x284) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x285) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x84);
    FUN_14000fcf0(param_1 + 0x8f0,0x409,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x285) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x286) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x85);
    FUN_14000fcf0(param_1 + 0x8f0,0x40a,uVar9);
    iVar3 = **(int **)(param_1 + 0x970);
    hWnd = GetDlgItem(*(HWND *)(param_1 + 0x908),0x40a);
    EnableWindow(hWnd,SUB14(iVar3 != 1,0));
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x286) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x287) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x86);
    FUN_14000fcf0(param_1 + 0x8f0,0x3f8,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x287) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x282) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x83);
    FUN_14000fcf0(param_1 + 0x8f0,0x405,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x282) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x288) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x88);
    FUN_14000fcf0(param_1 + 0x8f0,0x40f,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x288) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x289) != '\0') {
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x970) + 0x89);
    FUN_14000fcf0(param_1 + 0x8f0,0x40d,uVar9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x289) = 0;
  }
  FUN_140004f60(param_1 + 0x8f0);
  if (*(char *)(param_1 + 0x410) != '\0') {
    FUN_140005c20(param_1 + 0xb80);
    FUN_1400080d0(param_1 + 0xe00,extraout_x1_00,uVar9,uVar5,uVar10,param_6,param_7,param_8);
    FUN_140003900(param_1 + 0xf28,extraout_x1_01,uVar9,uVar5,uVar10,param_6,param_7,param_8);
    if (*(char *)(*(longlong *)(param_1 + 0x11e8) + 0x2b7) != '\0') {
      uVar10 = 0;
      uVar7 = 0;
      LVar4 = FUN_14000fd38(param_1 + 0x1168,0x40f);
      uVar1 = (uint)LVar4;
      if (uVar1 != 0) {
        do {
          iVar3 = FUN_14000fd78(param_1 + 0x1168,0x40f,uVar10);
          iVar11 = (int)uVar10;
          if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x11e8) + 0x1fb)) goto LAB_1400098b4;
          uVar7 = iVar11 + 1;
          uVar10 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
      if (uVar7 == uVar1) {
        iVar11 = -1;
LAB_1400098b4:
        FUN_14000fff0(param_1 + 0x1168,0x40f,iVar11);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x11e8) + 0x2b7) = 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x11e8) + 0x2b8) != '\0') {
      uVar10 = 0;
      uVar7 = 0;
      LVar4 = FUN_14000fd38(param_1 + 0x1168,0x410);
      uVar1 = (uint)LVar4;
      if (uVar1 != 0) {
        do {
          iVar3 = FUN_14000fd78(param_1 + 0x1168,0x410,uVar10);
          iVar11 = (int)uVar10;
          if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x11e8) + 0x1ff)) goto LAB_140009928;
          uVar7 = iVar11 + 1;
          uVar10 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
      if (uVar7 == uVar1) {
        iVar11 = -1;
LAB_140009928:
        FUN_14000fff0(param_1 + 0x1168,0x410,iVar11);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x11e8) + 0x2b8) = 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x11e8) + 0x2b9) != '\0') {
      uVar10 = 0;
      uVar7 = 0;
      LVar4 = FUN_14000fd38(param_1 + 0x1168,0x411);
      uVar1 = (uint)LVar4;
      if (uVar1 != 0) {
        do {
          iVar3 = FUN_14000fd78(param_1 + 0x1168,0x411,uVar10);
          iVar11 = (int)uVar10;
          if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x11e8) + 0x203)) goto LAB_14000999c;
          uVar7 = iVar11 + 1;
          uVar10 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
      if (uVar7 == uVar1) {
        iVar11 = -1;
LAB_14000999c:
        FUN_14000fff0(param_1 + 0x1168,0x411,iVar11);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x11e8) + 0x2b9) = 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x11e8) + 0x2ba) != '\0') {
      uVar10 = 0;
      uVar7 = 0;
      LVar4 = FUN_14000fd38(param_1 + 0x1168,0x412);
      uVar1 = (uint)LVar4;
      if (uVar1 != 0) {
        do {
          iVar3 = FUN_14000fd78(param_1 + 0x1168,0x412,uVar10);
          iVar11 = (int)uVar10;
          if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x11e8) + 0x207)) goto LAB_140009a10;
          uVar7 = iVar11 + 1;
          uVar10 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
      if (uVar7 == uVar1) {
        iVar11 = -1;
LAB_140009a10:
        FUN_14000fff0(param_1 + 0x1168,0x412,iVar11);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x11e8) + 0x2ba) = 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x11e8) + 699) != '\0') {
      FUN_14000fcf0(param_1 + 0x1168,0x413,
                    (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x11e8) + 0x20b));
      *(undefined1 *)(*(longlong *)(param_1 + 0x11e8) + 699) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x1d40) = 0;
  return;
}

