/*
 * FUN_140004c48 at 140004c48
 * undefined __fastcall FUN_140004c48(longlong param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4)
 * Address ranges: 140004c48-140005203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140004c48(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  LRESULT LVar9;
  HWND pHVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  CHAR local_d8 [32];
  CHAR local_b8 [136];
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  uVar15 = 0;
  if (*(char *)(lVar3 + 0x27b) != '\0') {
    FUN_14000e200(param_1,0x401,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x80)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27b) = 0;
  }
  uVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x27c) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x406);
    uVar13 = uVar15;
    uVar12 = uVar8;
    if ((uint)LVar9 != 0) {
      do {
        uVar12 = (uint)uVar13;
        iVar5 = FUN_14000e270(param_1,0x406,uVar13);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x58)) break;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < (uint)LVar9);
    }
    FUN_14000e4a0(param_1,0x406,uVar12);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27c) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x27d) != '\0') {
    uVar12 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x58);
    uVar13 = (ulonglong)uVar12;
    if (6 < uVar12) {
      uVar13 = 1;
    }
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x402);
    param_4 = 0;
    SendMessageW(pHVar10,0x14b,0,0);
    uVar14 = uVar15;
    do {
      uVar12 = *(uint *)(&DAT_14002c160 + uVar14 * 4 + uVar13 * 0x28);
      if (uVar12 != 0) {
        FUN_140024290(local_d8,"%d MB",(ulonglong)uVar12,param_4);
        param_4 = (ulonglong)*(uint *)(&DAT_14002c160 + uVar14 * 4 + uVar13 * 0x28);
        FUN_14000e340(param_1,0x402,(LPARAM)local_d8,param_4);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x263) = 0;
  }
  LVar9 = FUN_14000e230(param_1,0x402);
  uVar6 = (uint)LVar9;
  uVar13 = uVar15;
  uVar12 = uVar8;
  if (uVar6 != 0) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = FUN_14000e270(param_1,0x402,uVar13);
      if ((ulonglong)uVar7 == *(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x5c) >> 0x14) {
        FUN_14000e4a0(param_1,0x402,uVar12);
        break;
      }
      uVar12 = uVar12 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < uVar6);
  }
  if (uVar12 == uVar6) {
    FUN_140024290(local_b8,"%d MB",*(ulonglong *)(*(longlong *)(param_1 + 0x80) + 0x5c) >> 0x14,
                  param_4);
    FUN_14000e180(param_1,0x402,local_b8);
  }
  piVar4 = *(int **)(param_1 + 0x80);
  if ((((*(int *)(param_1 + 0x128) != *piVar4) || (*(int *)(param_1 + 300) != piVar4[1])) ||
      (*(int *)(param_1 + 0x130) != piVar4[2])) ||
     ((*(int *)(param_1 + 0x134) != piVar4[6] ||
      (cVar16 = *(char *)(param_1 + 0x138), cVar16 != *(char *)((longlong)piVar4 + 0x22))))) {
    *(int *)(param_1 + 0x128) = *piVar4;
    iVar5 = piVar4[1];
    *(int *)(param_1 + 300) = iVar5;
    iVar1 = piVar4[2];
    *(int *)(param_1 + 0x130) = iVar1;
    iVar2 = piVar4[6];
    *(int *)(param_1 + 0x134) = iVar2;
    cVar16 = *(char *)((longlong)piVar4 + 0x22);
    iVar11 = iVar5 + -1;
    if (iVar5 < 1) {
      iVar11 = 0;
    }
    *(char *)(param_1 + 0x138) = cVar16;
    FUN_1400017a4((longlong *)(param_1 + 0x140),iVar11,iVar1,iVar2,cVar16);
    cVar16 = *(char *)(param_1 + 0x138);
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if ((*(uint *)(lVar3 + 0x70) != 0) && (*(int *)(lVar3 + 0x74) != 0)) {
    uVar8 = *(uint *)(lVar3 + 0x70) / *(uint *)(lVar3 + 0x74);
  }
  FUN_140001cbc(param_1 + 0x140,*(uint *)(lVar3 + 100),*(uint *)(lVar3 + 0x68),uVar8,cVar16);
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x260) != '\0') {
    FUN_140001d7c((longlong *)(param_1 + 0x278));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x281) = 1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x281) != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x281) = 0;
    FUN_140001e70(param_1 + 0x278,*(int *)(*(longlong *)(param_1 + 0x80) + 0x6c));
  }
  uVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x27f) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x40b);
    uVar13 = uVar15;
    uVar12 = uVar8;
    if ((uint)LVar9 != 0) {
      do {
        uVar12 = (uint)uVar13;
        iVar5 = FUN_14000e270(param_1,0x40b,uVar13);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x78)) break;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < (uint)LVar9);
    }
    FUN_14000e4a0(param_1,0x40b,uVar12);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27f) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x280) != '\0') {
    LVar9 = FUN_14000e230(param_1,0x40c);
    if ((uint)LVar9 != 0) {
      do {
        uVar8 = (uint)uVar15;
        iVar5 = FUN_14000e270(param_1,0x40c,uVar15);
        if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x7c)) break;
        uVar8 = uVar8 + 1;
        uVar15 = (ulonglong)uVar8;
      } while (uVar8 < (uint)LVar9);
    }
    FUN_14000e4a0(param_1,0x40c,uVar8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x280) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x27e) != '\0') {
    FUN_14000e200(param_1,0x40e,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x87)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x27e) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x283) != '\0') {
    FUN_14000e200(param_1,0x403,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x81)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x283) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x284) != '\0') {
    FUN_14000e200(param_1,0x404,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x82)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x284) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x285) != '\0') {
    FUN_14000e200(param_1,0x409,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x84)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x285) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x286) != '\0') {
    FUN_14000e200(param_1,0x40a,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x85)));
    iVar5 = **(int **)(param_1 + 0x80);
    pHVar10 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x40a);
    EnableWindow(pHVar10,(uint)(iVar5 != 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x286) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x287) != '\0') {
    FUN_14000e200(param_1,0x3f8,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x86)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x287) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x282) != '\0') {
    FUN_14000e200(param_1,0x405,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x83)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x282) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x288) != '\0') {
    FUN_14000e200(param_1,0x40f,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x88)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x288) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar3 + 0x289) != '\0') {
    FUN_14000e200(param_1,0x40d,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x89)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x289) = 0;
  }
  FUN_1400055bc(param_1);
  return;
}

