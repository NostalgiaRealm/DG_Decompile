/*
 * FUN_14000ae8c at 14000ae8c
 * undefined __fastcall FUN_14000ae8c(longlong param_1, uint param_2, int * param_3)
 * Address ranges: 14000ae8c-14000b104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ae8c(longlong param_1,uint param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  LPARAM lParam;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  HWND hWnd;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 local_58;
  int local_54;
  uint local_50;
  
  uVar15 = 0;
  do {
    if (param_2 <= (uint)(&DAT_140028568)[uVar15 * 4]) goto LAB_14000aece;
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
  } while (uVar14 < 3);
  uVar15 = (ulonglong)uVar14;
  if (uVar14 == 3) {
    uVar15 = 2;
  }
LAB_14000aece:
  uVar14 = *(uint *)(param_1 + 0x13c);
  plVar1 = (longlong *)(param_1 + 0x130);
  uVar6 = 0;
  local_58 = *(undefined4 *)(&DAT_14002856c + uVar15 * 0x10);
  local_54 = (&DAT_140028568)[uVar15 * 4];
  uVar15 = CONCAT44(local_58,local_54 << 0x10) + (ulonglong)param_2;
  local_50 = param_2;
  if (uVar14 != 0) {
    uVar10 = 0;
    uVar13 = uVar14;
    do {
      uVar6 = uVar13 + uVar10 >> 1;
      uVar11 = *(ulonglong *)(*plVar1 + (ulonglong)uVar6 * 0x20);
      uVar5 = uVar6;
      if (uVar11 <= uVar15) {
        if (uVar15 <= uVar11) break;
        uVar10 = uVar6 + 1;
        uVar6 = uVar10;
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar10);
    if ((uVar6 != uVar14) && (*(ulonglong *)((ulonglong)uVar6 * 0x20 + *plVar1) == uVar15))
    goto LAB_14000b00a;
  }
  if (uVar14 == *(uint *)(param_1 + 0x138)) {
    auVar4 = ZEXT816(0x20) * ZEXT416(*(uint *)(param_1 + 0x138) * 2);
    uVar7 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = thunk_FUN_14002423c(uVar7);
    if (lVar8 != 0) {
      uVar14 = 0;
      if (*(int *)(param_1 + 0x138) != 0) {
        do {
          lVar9 = *plVar1;
          uVar11 = (ulonglong)uVar14;
          uVar14 = uVar14 + 1;
          lVar12 = uVar11 * 0x20;
          puVar2 = (undefined8 *)(lVar9 + lVar12);
          uVar7 = puVar2[1];
          *(undefined8 *)(lVar12 + lVar8) = *puVar2;
          ((undefined8 *)(lVar12 + lVar8))[1] = uVar7;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar12);
          uVar7 = puVar2[1];
          puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
        } while (uVar14 < *(uint *)(param_1 + 0x138));
      }
      FUN_140024260((LPVOID)*plVar1);
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) << 1;
      *plVar1 = lVar8;
    }
  }
  uVar14 = *(uint *)(param_1 + 0x13c);
  while (uVar6 < uVar14) {
    lVar8 = *plVar1;
    lVar9 = (ulonglong)(uVar14 - 1) * 0x20;
    puVar2 = (undefined8 *)(lVar8 + lVar9);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar8 + (ulonglong)uVar14 * 0x20);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    uVar7 = puVar2[1];
    puVar3 = (undefined8 *)(lVar8 + 0x10 + (ulonglong)uVar14 * 0x20);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    uVar14 = uVar14 - 1;
  }
  FUN_14000ff10(plVar1,uVar6,uVar15,(ushort *)&local_58);
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
LAB_14000b00a:
  lParam = *(LPARAM *)((ulonglong)uVar6 * 0x20 + 0x18 + *plVar1);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  SendMessageA(hWnd,0x172,0,lParam);
  FUN_14000f960(param_1 + 0xb8,param_2,param_3);
  FUN_14000f960(param_1 + 0x510,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0x640,param_2,(int *)0x0);
  FUN_1400076e4(param_1 + 0x5a8);
  FUN_14000f960(param_1 + 0x770,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0xa00,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0xc90,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0xf08,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0x1040,param_2,(int *)0x0);
  FUN_14000f960(param_1 + 0x1278,param_2,(int *)0x0);
  FUN_14000f030((longlong *)(param_1 + 0x150));
  return;
}

