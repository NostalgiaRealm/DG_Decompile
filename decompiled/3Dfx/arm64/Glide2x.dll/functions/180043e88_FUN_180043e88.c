/*
 * FUN_180043e88 at 180043e88
 * undefined8 * __cdecl FUN_180043e88(longlong * param_1, byte * param_2, uint param_3)
 * Address ranges: 180043e88-1800441bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180043e88(longlong *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  SIZE_T SVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 uVar20;
  
  uVar9 = CONCAT44(0,param_3);
  uVar11 = 0;
  uVar18 = uVar9;
  if (param_3 != 0) {
    do {
      pbVar2 = param_2 + uVar11 * 0x20;
      uVar1 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar1;
      uVar18 = ((ulonglong)*(uint *)(pbVar2 + 0x1c) |
               (ulonglong)*(uint *)(pbVar2 + 0xc) + (longlong)*(int *)(pbVar2 + 0x18) +
               (ulonglong)*(uint *)(pbVar2 + 8) << 0x20) + (ulonglong)*(uint *)(pbVar2 + 0x14) +
               (ulonglong)*(uint *)(pbVar2 + 0x10) + *(longlong *)pbVar2 + uVar18;
    } while (uVar1 < param_3);
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar11 = 0;
  if (uVar1 != 0) {
    uVar12 = 0;
    uVar10 = uVar1;
    do {
      uVar3 = uVar10 + uVar12 >> 1;
      uVar11 = (ulonglong)uVar3;
      uVar15 = *(ulonglong *)(*param_1 + uVar11 * 0x18);
      if (uVar15 <= uVar18) {
        if (uVar18 <= uVar15) break;
        uVar12 = uVar3 + 1;
        uVar11 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar10;
      }
      uVar10 = uVar3;
    } while (uVar10 != uVar12);
    if (((uint)uVar11 != uVar1) && (*(ulonglong *)(*param_1 + uVar11 * 0x18) == uVar18))
    goto LAB_180044088;
  }
  if (uVar1 == *(uint *)(param_1 + 1)) {
    uVar15 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    SVar13 = uVar15 * 0x18;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar15;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
      SVar13 = 0xffffffffffffffff;
    }
    lVar19 = thunk_FUN_18005fb88(SVar13);
    if (lVar19 != 0) {
      uVar15 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar15 + 1;
          puVar17 = (undefined8 *)(*param_1 + uVar15 * 0x18);
          puVar8 = (undefined8 *)(lVar19 + uVar15 * 0x18);
          uVar20 = *puVar17;
          puVar8[1] = puVar17[1];
          *puVar8 = uVar20;
          puVar8[2] = puVar17[2];
          uVar15 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_18005fbc8((LPVOID)*param_1);
      *param_1 = lVar19;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar11 < (uint)uVar15) {
    uVar14 = (ulonglong)((uint)uVar15 - 1);
    puVar17 = (undefined8 *)(*param_1 + uVar15 * 0x18);
    puVar8 = (undefined8 *)(*param_1 + uVar14 * 0x18);
    uVar20 = *puVar8;
    puVar17[1] = puVar8[1];
    *puVar17 = uVar20;
    puVar17[2] = puVar8[2];
    uVar15 = uVar14;
  }
  *(ulonglong *)(*param_1 + uVar11 * 0x18) = uVar18;
  *(ulonglong *)(*param_1 + uVar11 * 0x18 + 8) = uVar18;
  puVar17 = (undefined8 *)FUN_18005fb88(0x10);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    *puVar17 = 0;
    puVar17[1] = 0;
  }
  *(undefined8 **)(*param_1 + uVar11 * 0x18 + 0x10) = puVar17;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_180044088:
  plVar16 = *(longlong **)(uVar11 * 0x18 + *param_1 + 0x10);
  if (plVar16 != (longlong *)0x0) {
    uVar1 = *(uint *)(plVar16 + 1);
    if (uVar1 != 0) {
      lVar19 = *plVar16;
      uVar18 = 0;
      do {
        puVar17 = *(undefined8 **)(lVar19 + uVar18 * 8);
        if ((param_3 == *(uint *)(puVar17 + 1)) &&
           (iVar7 = FUN_180060310((byte *)*puVar17,param_2,uVar9 << 5), iVar7 == 0)) {
          return puVar17;
        }
        uVar12 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar12;
      } while (uVar12 < uVar1);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar9;
    SVar13 = uVar9 << 5;
    if (SUB168(auVar5 * ZEXT816(0x20),8) != 0) {
      SVar13 = 0xffffffffffffffff;
    }
    puVar17 = (undefined8 *)thunk_FUN_18005fb88(SVar13);
    if (puVar17 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_18005fb88(0x10);
      if (puVar8 != (undefined8 *)0x0) {
        thunk_FUN_180001218(puVar17,(undefined8 *)param_2,uVar9 << 5);
        *puVar8 = puVar17;
        *(uint *)(puVar8 + 1) = param_3;
        iVar7 = *(int *)((longlong)plVar16 + 0xc);
        if ((int)plVar16[1] == iVar7) {
          uVar1 = iVar7 << 1;
          if (iVar7 == 0) {
            uVar1 = 0x10;
          }
          SVar13 = CONCAT44(0,uVar1) << 3;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = CONCAT44(0,uVar1);
          if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
            SVar13 = 0xffffffffffffffff;
          }
          puVar17 = (undefined8 *)thunk_FUN_18005fb88(SVar13);
          if (puVar17 == (undefined8 *)0x0) {
            return puVar8;
          }
          thunk_FUN_180001218(puVar17,(undefined8 *)*plVar16,
                              (ulonglong)*(uint *)((longlong)plVar16 + 0xc) << 3);
          thunk_FUN_18005fbc8((LPVOID)*plVar16);
          *plVar16 = (longlong)puVar17;
          *(uint *)((longlong)plVar16 + 0xc) = uVar1;
        }
        *(undefined8 **)(*plVar16 + (ulonglong)*(uint *)(plVar16 + 1) * 8) = puVar8;
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        return puVar8;
      }
      thunk_FUN_18005fbc8(puVar17);
    }
  }
  return (undefined8 *)0x0;
}

