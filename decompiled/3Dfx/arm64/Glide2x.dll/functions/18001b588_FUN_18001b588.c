/*
 * FUN_18001b588 at 18001b588
 * undefined8 __cdecl FUN_18001b588(longlong * param_1, int * param_2)
 * Address ranges: 18001b588-18001b80f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001b588(longlong *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  SIZE_T SVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar11 = 0;
  uVar12 = 0x800;
  if (param_2[1] == 0) {
    uVar12 = 0;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar12 = (ulonglong)
           (param_2[4] & 0x1fU |
           (param_2[5] & 0x1fU | (param_2[6] & 7U | (param_2[7] & 0x1fU) << 3) << 5) << 5) << 10 |
           ((ulonglong)(uint)param_2[8] & 0x1f |
           ((ulonglong)(uint)param_2[9] & 7 |
           ((ulonglong)(uint)param_2[10] & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0xb) & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0x15) & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0x1f) & 0xf |
           (uVar12 | (ulonglong)(*param_2 != 0) << 10 | (ulonglong)*(byte *)(param_2 + 0x29) & 0xf)
           << 4) << 4) << 4) << 4) << 3) << 5) << 0x1c | (ulonglong)(param_2[0x21] != 0) << 9 |
           (ulonglong)(param_2[0x20] != 0) << 8 | (ulonglong)(param_2[0x17] != 0) << 7 |
           (ulonglong)(param_2[0x16] != 0) << 6 | (ulonglong)(param_2[0xd] != 0) << 5 |
           (ulonglong)(param_2[0xc] != 0) << 4 | (ulonglong)(param_2[3] != 0) << 3 |
           (ulonglong)(param_2[2] != 0) << 2;
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar5 = uVar3;
    do {
      uVar11 = uVar5 + uVar8 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + (ulonglong)uVar11 * 0x158);
      uVar2 = uVar11;
      if (uVar10 <= uVar12) {
        if (uVar12 <= uVar10) break;
        uVar8 = uVar11 + 1;
        uVar11 = uVar11 + 1;
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar8);
    if ((uVar11 != uVar3) &&
       (lVar6 = (ulonglong)uVar11 * 0x158, *(ulonglong *)(*param_1 + lVar6) == uVar12))
    goto LAB_18001b7ec;
  }
  if (uVar3 == *(uint *)(param_1 + 1)) {
    uVar10 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    SVar9 = uVar10 * 0x158;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar10;
    if (SUB168(auVar1 * ZEXT816(0x158),8) != 0) {
      SVar9 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_18005fb88(SVar9);
    if (lVar6 != 0) {
      uVar10 = 0;
      if ((int)param_1[1] != 0) {
        do {
          thunk_FUN_180001218((undefined8 *)(lVar6 + uVar10 * 0x158),
                              (undefined8 *)(*param_1 + uVar10 * 0x158),0x158);
          uVar3 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_18005fbc8((LPVOID)*param_1);
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  while (lVar7 = *param_1, uVar11 < uVar3) {
    thunk_FUN_180001218((undefined8 *)(lVar7 + (ulonglong)uVar3 * 0x158),
                        (undefined8 *)(lVar7 + (ulonglong)(uVar3 - 1) * 0x158),0x158);
    uVar3 = uVar3 - 1;
  }
  lVar6 = (ulonglong)uVar11 * 0x158;
  *(ulonglong *)(lVar7 + lVar6) = uVar12;
  thunk_FUN_180001218((undefined8 *)(lVar6 + *param_1 + 8),(undefined8 *)param_2,0x148);
  puVar4 = (undefined8 *)FUN_18005fb88(0x148);
  if (puVar4 != (undefined8 *)0x0) {
    thunk_FUN_180001218(puVar4,(undefined8 *)param_2,0x148);
  }
  *(undefined8 **)(lVar6 + *param_1 + 0x150) = puVar4;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18001b7ec:
  return *(undefined8 *)(lVar6 + *param_1 + 0x150);
}

