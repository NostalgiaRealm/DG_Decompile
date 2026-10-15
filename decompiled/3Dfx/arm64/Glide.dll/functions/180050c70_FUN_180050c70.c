/*
 * FUN_180050c70 at 180050c70
 * undefined __cdecl FUN_180050c70(longlong param_1, ulonglong param_2, int * param_3, int param_4)
 * Address ranges: 180050c70-180050f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050c70(longlong param_1,ulonglong param_2,int *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  SIZE_T SVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_50 [2];
  
  lVar13 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar14 = 0;
  uVar3 = *(uint *)(lVar13 + 0xc04);
  uVar15 = (ulonglong)
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
      uVar14 = (ulonglong)uVar4;
      uVar11 = *(ulonglong *)(*(longlong *)(lVar13 + 0xbf8) + uVar14 * 0x48);
      if (uVar11 <= uVar15) {
        if (uVar15 <= uVar11) break;
        uVar8 = uVar4 + 1;
        uVar14 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (((uint)uVar14 != uVar3) &&
       (*(ulonglong *)(*(longlong *)(lVar13 + 0xbf8) + uVar14 * 0x48) == uVar15))
    goto LAB_180050ee4;
  }
  if (uVar3 == *(uint *)(lVar13 + 0xc00)) {
    uVar11 = CONCAT44(0,*(uint *)(lVar13 + 0xc00) << 1);
    SVar9 = uVar11 * 0x48;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    if (SUB168(auVar5 * ZEXT816(0x48),8) != 0) {
      SVar9 = 0xffffffffffffffff;
    }
    lVar12 = thunk_FUN_1800609d8(SVar9);
    if (lVar12 != 0) {
      uVar11 = 0;
      if (*(int *)(lVar13 + 0xc00) != 0) {
        do {
          uVar3 = (int)uVar11 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(lVar13 + 0xbf8) + uVar11 * 0x48);
          puVar2 = (undefined8 *)(lVar12 + uVar11 * 0x48);
          uVar18 = *puVar1;
          uVar17 = puVar1[3];
          uVar16 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar18;
          puVar2[3] = uVar17;
          puVar2[2] = uVar16;
          uVar18 = puVar1[4];
          uVar17 = puVar1[7];
          uVar16 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar18;
          puVar2[7] = uVar17;
          puVar2[6] = uVar16;
          puVar2[8] = puVar1[8];
          uVar11 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar13 + 0xc00));
      }
      thunk_FUN_180060a18(*(LPVOID *)(lVar13 + 0xbf8));
      *(longlong *)(lVar13 + 0xbf8) = lVar12;
      *(int *)(lVar13 + 0xc00) = *(int *)(lVar13 + 0xc00) << 1;
    }
  }
  uVar11 = (ulonglong)*(uint *)(lVar13 + 0xc04);
  while ((uint)uVar14 < (uint)uVar11) {
    uVar10 = (ulonglong)((uint)uVar11 - 1);
    puVar1 = (undefined8 *)(*(longlong *)(lVar13 + 0xbf8) + uVar11 * 0x48);
    puVar2 = (undefined8 *)(*(longlong *)(lVar13 + 0xbf8) + uVar10 * 0x48);
    uVar18 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar18;
    puVar1[3] = uVar17;
    puVar1[2] = uVar16;
    uVar18 = puVar2[4];
    uVar17 = puVar2[7];
    uVar16 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar18;
    puVar1[7] = uVar17;
    puVar1[6] = uVar16;
    puVar1[8] = puVar2[8];
    uVar11 = uVar10;
  }
  local_50[0] = 0;
  *(ulonglong *)(*(longlong *)(lVar13 + 0xbf8) + uVar14 * 0x48) = uVar15;
  uVar18 = *(undefined8 *)param_3;
  uVar17 = *(undefined8 *)(param_3 + 6);
  uVar16 = *(undefined8 *)(param_3 + 4);
  lVar12 = *(longlong *)(lVar13 + 0xbf8) + uVar14 * 0x48;
  *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar12 + 8) = uVar18;
  *(undefined8 *)(lVar12 + 0x20) = uVar17;
  *(undefined8 *)(lVar12 + 0x18) = uVar16;
  uVar16 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(lVar12 + 0x28) = uVar16;
  *(int *)(lVar12 + 0x38) = param_3[0xc];
  plVar6 = *(longlong **)
            (*(longlong *)(lVar13 + 0xc08) + (ulonglong)*(uint *)(lVar13 + 0xc10) * 0x18c0 + 0x6b0);
  (**(code **)(*plVar6 + 0xa8))(plVar6,param_3,local_50);
  *(undefined8 *)(*(longlong *)(lVar13 + 0xbf8) + uVar14 * 0x48 + 0x40) = local_50[0];
  *(int *)(lVar13 + 0xc04) = *(int *)(lVar13 + 0xc04) + 1;
LAB_180050ee4:
  lVar12 = *(longlong *)(uVar14 * 0x48 + *(longlong *)(lVar13 + 0xbf8) + 0x40);
  if ((lVar12 != *(longlong *)(lVar13 + 0x6e8)) || (param_4 != *(int *)(lVar13 + 0x6f0))) {
    (**(code **)(**(longlong **)(lVar13 + 0x6b8) + 0x120))
              (*(longlong **)(lVar13 + 0x6b8),lVar12,param_4);
    *(longlong *)(lVar13 + 0x6e8) = lVar12;
    *(int *)(lVar13 + 0x6f0) = param_4;
  }
  return;
}

