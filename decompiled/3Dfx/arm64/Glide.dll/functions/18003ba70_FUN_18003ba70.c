/*
 * FUN_18003ba70 at 18003ba70
 * undefined __cdecl FUN_18003ba70(undefined8 param_1, undefined8 * param_2, longlong param_3, uint param_4)
 * Address ranges: 18003ba70-18003bc1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ba70(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar10 = 0;
  param_2[2] = 0;
  uVar8 = 0x40;
  if (param_4 != 0) {
    do {
      uVar9 = (int)uVar10 + 1;
      lVar1 = param_3 + uVar10 * 0x180;
      bVar7 = (&DAT_180064b68)[*(uint *)(lVar1 + 0x130)];
      uVar11 = 2;
      if (*(float *)(lVar1 + 0x120) == *(float *)(lVar1 + 0x124)) {
        uVar11 = 0;
      }
      *(uint *)((longlong)param_2 + uVar10 * 4) =
           *(uint *)(lVar1 + 0x100) |
           (*(uint *)(lVar1 + 0x110) |
           (*(uint *)(lVar1 + 0x104) |
           (*(uint *)(lVar1 + 0x114) |
           (*(uint *)(lVar1 + 0x144) |
           (*(uint *)(lVar1 + 0x13c) |
           (uVar11 | (*(uint *)(lVar1 + 0x148) & 3 |
                     (*(uint *)(lVar1 + 0x134) | *(int *)(lVar1 + 0x138) << 2) << 2) << 2 |
           *(uint *)(lVar1 + 0x140)) << 1) << 2) << 4) << 4) << 5) << 5;
      uVar11 = uVar8;
      if (*(int *)(lVar1 + 0x118) == 0) {
        uVar11 = 0;
      }
      *(uint *)((longlong)param_2 + uVar10 * 4 + 0xc) =
           uVar11 | (uint)(*(int *)(lVar1 + 0x108) != 0) << 5 | (uint)(bVar7 >> 1);
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < param_4);
  }
  iVar2 = *(int *)(param_3 + 0xd0);
  uVar11 = *(uint *)(param_3 + 0xc0);
  uVar5 = *(uint *)(param_3 + 0x1c);
  uVar9 = 4;
  if (*(int *)(param_3 + 0x4c) == 0) {
    uVar9 = 0;
  }
  uVar3 = *(uint *)(param_3 + 0x74);
  uVar12 = 0x20;
  if (*(int *)(param_3 + 0xf0) == 0) {
    uVar12 = 0;
  }
  uVar6 = *(uint *)(param_3 + 0x8c);
  uVar4 = *(uint *)(param_3 + 0x24);
  uVar13 = 8;
  if (*(int *)(param_3 + 0x28) == 0) {
    uVar13 = 0;
  }
  if (*(int *)(param_3 + 0xa0) == 0) {
    uVar8 = 0;
  }
  *(uint *)(param_2 + 3) =
       *(uint *)(param_3 + 0xec) |
       (*(uint *)(param_3 + 0xf8) |
       (*(uint *)(param_3 + 0xe8) |
       (*(uint *)(param_3 + 0xe4) |
       (uVar12 | (*(uint *)(param_3 + 0x78) |
                 (uVar9 | (*(uint *)(param_3 + 200) |
                          (*(uint *)(param_3 + 0xd8) |
                          (*(uint *)(param_3 + 0xd4) | *(int *)(param_3 + 0xc4) << 2) << 2) << 2) <<
                          3 | *(uint *)(param_3 + 0xcc)) << 3) << 6 | *(uint *)(param_3 + 0xe0)) <<
       4) << 2) << 2) << 2;
  *(uint *)((longlong)param_2 + 0x1c) =
       uVar8 | (uVar6 & 3 |
               (uVar6 >> 8 & 3 |
               (uVar3 | (uVar13 | (uVar5 >> 4 & 0xf0 | uVar5 & 0xf | param_4 << 0xb) << 4 | uVar4)
                        << 4) << 2) << 2) << 7 | (uint)(iVar2 != 0) << 5 | uVar11;
  return;
}

