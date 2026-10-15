/*
 * FUN_1800e1fe8 at 1800e1fe8
 * undefined FUN_1800e1fe8(void)
 * Address ranges: 1800e1fe8-1800e22bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e1fe8(longlong param_1,ulonglong param_2,int *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_50 [2];
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar12 = 0;
  uVar3 = *(uint *)(param_1 + 0xc04);
  uVar13 = (ulonglong)
           (param_3[1] & 1U | (param_3[2] & 0xfU | (uint)*(ushort *)(param_3 + 4) << 5) << 1) << 1 |
           ((ulonglong)(param_3[0xb] & 0xfU | (param_3[10] & 0xfU | (param_3[10] & 0xfU) << 4) << 4)
            << 4 | ((ulonglong)
                    (param_3[7] & 0xfU | (param_3[6] & 0xfU | (param_3[6] & 0xfU) << 4) << 4) << 4 |
                   (ulonglong)(uint)param_3[8] & 0xf) << 0x10 | (ulonglong)(uint)param_3[0xc] & 0xf)
           << 0x20 | (ulonglong)(param_3[3] != 0) << 6 | (ulonglong)(*param_3 != 0);
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar7 = uVar3;
    do {
      uVar4 = uVar7 + uVar8 >> 1;
      uVar12 = (ulonglong)uVar4;
      uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48);
      if (uVar10 <= uVar13) {
        if (uVar13 <= uVar10) break;
        uVar8 = uVar4 + 1;
        uVar12 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (((uint)uVar12 != uVar3) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48) == uVar13))
    goto LAB_1800e225c;
  }
  if (uVar3 == *(uint *)(param_1 + 0xc00)) {
    uVar10 = CONCAT44(0,*(uint *)(param_1 + 0xc00) << 1);
    lVar11 = uVar10 * 0x48;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    if (SUB168(auVar5 * ZEXT816(0x48),8) != 0) {
      lVar11 = -1;
    }
    lVar11 = thunk_FUN_180102f80(lVar11);
    if (lVar11 != 0) {
      uVar10 = 0;
      if (*(int *)(param_1 + 0xc00) != 0) {
        do {
          uVar3 = (int)uVar10 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xbf8) + uVar10 * 0x48);
          puVar2 = (undefined8 *)(lVar11 + uVar10 * 0x48);
          uVar16 = *puVar1;
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar16;
          puVar2[3] = uVar15;
          puVar2[2] = uVar14;
          uVar16 = puVar1[4];
          uVar15 = puVar1[7];
          uVar14 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar16;
          puVar2[7] = uVar15;
          puVar2[6] = uVar14;
          puVar2[8] = puVar1[8];
          uVar10 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0xc00));
      }
      thunk_FUN_180102fc0(*(longlong *)(param_1 + 0xbf8));
      *(longlong *)(param_1 + 0xbf8) = lVar11;
      *(int *)(param_1 + 0xc00) = *(int *)(param_1 + 0xc00) << 1;
    }
  }
  uVar10 = (ulonglong)*(uint *)(param_1 + 0xc04);
  while ((uint)uVar12 < (uint)uVar10) {
    uVar9 = (ulonglong)((uint)uVar10 - 1);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xbf8) + uVar10 * 0x48);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xbf8) + uVar9 * 0x48);
    uVar16 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar16;
    puVar1[3] = uVar15;
    puVar1[2] = uVar14;
    uVar16 = puVar2[4];
    uVar15 = puVar2[7];
    uVar14 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar16;
    puVar1[7] = uVar15;
    puVar1[6] = uVar14;
    puVar1[8] = puVar2[8];
    uVar10 = uVar9;
  }
  local_50[0] = 0;
  *(ulonglong *)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48) = uVar13;
  uVar16 = *(undefined8 *)param_3;
  uVar15 = *(undefined8 *)(param_3 + 6);
  uVar14 = *(undefined8 *)(param_3 + 4);
  lVar11 = *(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48;
  *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar11 + 8) = uVar16;
  *(undefined8 *)(lVar11 + 0x20) = uVar15;
  *(undefined8 *)(lVar11 + 0x18) = uVar14;
  uVar14 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(lVar11 + 0x28) = uVar14;
  *(int *)(lVar11 + 0x38) = param_3[0xc];
  plVar6 = *(longlong **)
            (*(longlong *)(param_1 + 0xc08) + (ulonglong)*(uint *)(param_1 + 0xc10) * 0x18c0 + 0x6b0
            );
  (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,local_50);
  *(undefined8 *)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48 + 0x40) = local_50[0];
  *(int *)(param_1 + 0xc04) = *(int *)(param_1 + 0xc04) + 1;
LAB_1800e225c:
  lVar11 = *(longlong *)(uVar12 * 0x48 + *(longlong *)(param_1 + 0xbf8) + 0x40);
  if ((lVar11 != *(longlong *)(param_1 + 0x6e8)) || (param_4 != *(int *)(param_1 + 0x6f0))) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x120))
              (*(longlong **)(param_1 + 0x6b8),lVar11,param_4);
    *(longlong *)(param_1 + 0x6e8) = lVar11;
    *(int *)(param_1 + 0x6f0) = param_4;
  }
  return;
}

