/*
 * FUN_10016268 at 10016268
 * undefined FUN_10016268(void)
 * Address ranges: 10016268-100165c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10016268(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  ulonglong local_48;
  
  uVar7 = *(uint *)(param_1 + 0xbc);
  uVar14 = (ulonglong)param_2;
  if (uVar7 != 0) {
    uVar10 = 0;
    uVar11 = uVar7;
    do {
      uVar12 = uVar11 + uVar10 >> 1;
      uVar13 = *(ulonglong *)(*(int *)(param_1 + 0xb8) + uVar12 * 0x20);
      uVar8 = uVar12;
      if (uVar13 <= uVar14) {
        if (uVar14 <= uVar13) break;
        uVar10 = uVar12 + 1;
        uVar12 = uVar10;
        uVar8 = uVar11;
      }
      uVar11 = uVar8;
    } while (uVar11 != uVar10);
    if (((uVar12 != uVar7) &&
        (puVar5 = (ulonglong *)(*(int *)(param_1 + 0xb8) + uVar12 * 0x20), *puVar5 == uVar14)) &&
       (iVar9 = (int)puVar5 + 0xc, iVar9 != 0)) {
      return iVar9;
    }
  }
  local_60 = 0;
  uStack_58 = 0;
  uVar10 = 0;
  if (uVar7 != 0) {
    uVar11 = 0;
    uVar12 = uVar7;
    do {
      uVar10 = uVar12 + uVar11 >> 1;
      uVar13 = *(ulonglong *)(*(int *)(param_1 + 0xb8) + uVar10 * 0x20);
      uVar8 = uVar10;
      if (uVar13 <= uVar14) {
        if (uVar14 <= uVar13) break;
        uVar11 = uVar10 + 1;
        uVar10 = uVar11;
        uVar8 = uVar12;
      }
      uVar12 = uVar8;
    } while (uVar12 != uVar11);
  }
  piVar2 = (int *)(param_1 + 0xb8);
  if ((uVar10 == uVar7) || (puVar5 = (ulonglong *)(*piVar2 + uVar10 * 0x20), *puVar5 != uVar14)) {
    puVar3 = (uint *)(param_1 + 0xc0);
    uVar11 = *puVar3;
    if (uVar11 == uVar7) {
      uVar7 = 0x10;
      if (uVar11 != 0) {
        uVar7 = uVar11 << 1;
      }
      iVar9 = FUN_101322b0(uVar7 << 5);
      if (iVar9 != 0) {
        if (*(uint *)(param_1 + 0xbc) == 0) {
          uVar11 = 0;
        }
        else {
          uVar12 = 0;
          local_50 = param_2;
          local_48 = uVar14;
          do {
            *(undefined4 *)(iVar9 + 0x10 + uVar12 * 0x20) = 0;
            *(undefined4 *)(iVar9 + 0x14 + uVar12 * 0x20) = 0;
            *(undefined4 *)(iVar9 + 0x18 + uVar12 * 0x20) = 0;
            puVar6 = (undefined8 *)(*piVar2 + uVar12 * 0x20);
            *(undefined8 *)(iVar9 + uVar12 * 0x20) = *puVar6;
            *(undefined4 *)(iVar9 + 8 + uVar12 * 0x20) = *(undefined4 *)(puVar6 + 1);
            FUN_10019fb0(iVar9 + 0xc + uVar12 * 0x20,(int)puVar6 + 0xc);
            FUN_101322d0(*(undefined4 *)(*piVar2 + uVar12 * 0x20 + 0x10));
            uVar11 = *(uint *)(param_1 + 0xbc);
            uVar12 = uVar12 + 1;
            uVar14 = local_48;
            param_2 = local_50;
          } while (uVar12 < uVar11);
        }
        if (uVar11 < uVar7) {
          do {
            *(undefined4 *)(iVar9 + 0x10 + uVar11 * 0x20) = 0;
            *(undefined4 *)(iVar9 + 0x14 + uVar11 * 0x20) = 0;
            iVar1 = uVar11 * 0x20;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(iVar9 + 0x18 + iVar1) = 0;
          } while (uVar11 < uVar7);
        }
        FUN_101322d0(*(int *)(param_1 + 0xb4));
        *(int *)(param_1 + 0xb4) = iVar9;
        *piVar2 = iVar9;
        *puVar3 = uVar7;
      }
    }
    puVar4 = (uint *)(param_1 + 0xbc);
    uVar7 = *puVar4;
    if (*puVar3 != uVar7) {
      for (; uVar10 < uVar7; uVar7 = uVar7 - 1) {
        puVar6 = (undefined8 *)(*piVar2 + uVar7 * 0x20);
        *puVar6 = puVar6[-4];
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + -3);
        FUN_10019fb0((int)puVar6 + 0xc,(int)puVar6 + -0x14);
      }
      *puVar4 = *puVar4 + 1;
      *(uint *)(*piVar2 + uVar10 * 0x20 + 8) = param_2;
      FUN_10019fb0(*piVar2 + uVar10 * 0x20 + 0xc,&local_60);
      *(ulonglong *)(*piVar2 + uVar10 * 0x20) = uVar14;
    }
  }
  else {
    FUN_10019fb0((int)puVar5 + 0xc,&local_60);
  }
  iVar9 = *piVar2;
  FUN_101322d0(local_60._4_4_);
  return iVar9 + uVar10 * 0x20 + 0xc;
}

