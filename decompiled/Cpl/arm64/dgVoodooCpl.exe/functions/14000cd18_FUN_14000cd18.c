/*
 * FUN_14000cd18 at 14000cd18
 * undefined8 __cdecl FUN_14000cd18(longlong param_1, uint param_2, int * param_3)
 * Address ranges: 14000cd18-14000cfc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000cd18(longlong param_1,uint param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  HWND hWnd;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  SIZE_T SVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  LPARAM lParam;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  
  uVar8 = 0;
  do {
    if (param_2 <= (uint)(&DAT_140028640)[uVar8 * 4]) break;
    uVar6 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar6;
  } while (uVar6 < 3);
  uVar6 = (uint)uVar8;
  if (uVar6 == 3) {
    uVar6 = 2;
  }
  uStack_3c = (&DAT_140028640)[(ulonglong)uVar6 * 4];
  uVar13 = 0;
  local_40 = *(uint *)(&DAT_140028644 + (ulonglong)uVar6 * 0x10);
  uVar6 = *(uint *)(param_1 + 0x13c);
  uVar8 = (((ulonglong)uStack_3c & 0xffff) << 0x10 | (ulonglong)local_40 << 0x20) +
          (ulonglong)param_2;
  local_38 = param_2;
  if (uVar6 != 0) {
    uVar9 = 0;
    uVar7 = uVar6;
    do {
      uVar3 = uVar7 + uVar9 >> 1;
      uVar13 = (ulonglong)uVar3;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x130) + uVar13 * 0x20);
      if (uVar12 <= uVar8) {
        if (uVar8 <= uVar12) break;
        uVar9 = uVar3 + 1;
        uVar13 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar7;
      }
      uVar7 = uVar3;
    } while (uVar7 != uVar9);
    if (((uint)uVar13 != uVar6) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0x130) + uVar13 * 0x20) == uVar8))
    goto LAB_14000cec0;
  }
  if (uVar6 == *(uint *)(param_1 + 0x138)) {
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x138) & 0x7fffffff;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12 << 1;
    SVar10 = uVar12 << 6;
    if (SUB168(auVar4 * ZEXT816(0x20),8) != 0) {
      SVar10 = 0xffffffffffffffff;
    }
    lVar5 = thunk_FUN_1400247f0(SVar10);
    if (lVar5 != 0) {
      uVar12 = 0;
      if (*(int *)(param_1 + 0x138) != 0) {
        do {
          uVar6 = (int)uVar12 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + uVar12 * 0x20);
          puVar2 = (undefined8 *)(lVar5 + uVar12 * 0x20);
          uVar16 = *puVar1;
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar16;
          puVar2[3] = uVar15;
          puVar2[2] = uVar14;
          uVar12 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + 0x138));
      }
      thunk_FUN_140024830(*(LPVOID *)(param_1 + 0x130));
      *(longlong *)(param_1 + 0x130) = lVar5;
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) << 1;
    }
  }
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x13c);
  while ((uint)uVar13 < (uint)uVar12) {
    uVar11 = (ulonglong)((uint)uVar12 - 1);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + uVar12 * 0x20);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + uVar11 * 0x20);
    uVar16 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar16;
    puVar1[3] = uVar15;
    puVar1[2] = uVar14;
    uVar12 = uVar11;
  }
  FUN_140011b50((longlong *)(param_1 + 0x130),uVar13,uVar8,(undefined8 *)&local_40);
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
LAB_14000cec0:
  lParam = *(LPARAM *)(*(longlong *)(param_1 + 0x130) + uVar13 * 0x20 + 0x18);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  SendMessageA(hWnd,0x172,0,lParam);
  FUN_140011118(param_1 + 0xb8,param_2,param_3);
  FUN_140011118(param_1 + 0x510,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0x640,param_2,(int *)0x0);
  FUN_140006d68(param_1 + 0x5a8);
  FUN_140011118(param_1 + 0x770,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0xa00,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0xc90,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0xf08,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0x1040,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0x1278,param_2,(int *)0x0);
  FUN_140010940((longlong *)(param_1 + 0x150));
  FUN_140010070(param_1,0x402);
  return 1;
}

