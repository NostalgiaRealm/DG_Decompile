/*
 * FUN_18002f970 at 18002f970
 * undefined __cdecl FUN_18002f970(undefined8 param_1, undefined8 * param_2, longlong param_3, uint param_4)
 * Address ranges: 18002f970-18002fb4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f970(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar11 = 0;
  param_2[2] = 0;
  if (param_4 != 0) {
    do {
      lVar8 = param_3 + uVar11 * 0x1a0;
      bVar7 = (&DAT_180066908)[*(uint *)(lVar8 + 0x130)];
      uVar10 = 2;
      if (*(float *)(lVar8 + 0x120) == *(float *)(lVar8 + 0x124)) {
        uVar10 = 0;
      }
      *(uint *)((longlong)param_2 + uVar11 * 4) =
           *(uint *)(lVar8 + 0x100) |
           (*(uint *)(lVar8 + 0x110) |
           (*(uint *)(lVar8 + 0x104) |
           (*(uint *)(lVar8 + 0x114) |
           (*(uint *)(lVar8 + 0x144) |
           (*(uint *)(lVar8 + 0x13c) |
           (uVar10 | (*(uint *)(lVar8 + 0x148) & 3 |
                     (*(uint *)(lVar8 + 0x134) | *(int *)(lVar8 + 0x138) << 2) << 2) << 2 |
           *(uint *)(lVar8 + 0x140)) << 1) << 2) << 4) << 4) << 5) << 5;
      uVar10 = 0x80;
      if (*(int *)(lVar8 + 0x17c) == 0) {
        uVar10 = 0;
      }
      *(uint *)((longlong)param_2 + uVar11 * 4 + 0xc) =
           uVar10 | (uint)(*(int *)(lVar8 + 0x118) != 0) << 6 |
           (uint)(*(int *)(lVar8 + 0x108) != 0) << 5 | (uint)(bVar7 >> 1);
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < param_4);
  }
  iVar1 = *(int *)(param_3 + 0xd0);
  uVar2 = *(uint *)(param_3 + 0xc0);
  uVar5 = *(uint *)(param_3 + 0x1c);
  uVar10 = 4;
  if (*(int *)(param_3 + 0x4c) == 0) {
    uVar10 = 0;
  }
  uVar3 = *(uint *)(param_3 + 0x74);
  uVar14 = 0x20;
  if (*(int *)(param_3 + 0xf0) == 0) {
    uVar14 = 0;
  }
  uVar6 = *(uint *)(param_3 + 0x8c);
  uVar12 = 0x100;
  if (*(int *)(param_3 + 0x634) == 0) {
    uVar12 = 0;
  }
  uVar4 = *(uint *)(param_3 + 0x24);
  uVar13 = 8;
  if (*(int *)(param_3 + 0x28) == 0) {
    uVar13 = 0;
  }
  uVar9 = 0x40;
  if (*(int *)(param_3 + 0xa0) == 0) {
    uVar9 = 0;
  }
  *(uint *)(param_2 + 3) =
       *(uint *)(param_3 + 0xec) |
       (*(uint *)(param_3 + 0xf8) |
       (*(uint *)(param_3 + 0xe8) |
       (*(uint *)(param_3 + 0xe4) |
       (uVar14 | (*(uint *)(param_3 + 0x78) |
                 (uVar10 | (*(uint *)(param_3 + 200) |
                           (*(uint *)(param_3 + 0xd8) |
                           (*(uint *)(param_3 + 0xd4) | *(int *)(param_3 + 0xc4) << 2) << 2) << 2)
                           << 3 | *(uint *)(param_3 + 0xcc)) << 3) << 6 | *(uint *)(param_3 + 0xe0))
       << 4) << 2) << 2) << 2;
  *(uint *)((longlong)param_2 + 0x1c) =
       uVar9 | (uVar6 & 3 |
               (uVar6 >> 8 & 3 |
               (uVar3 | (uVar13 | (uVar12 | param_4 << 0xb | uVar5 >> 4 & 0xf0 | uVar5 & 0xf) << 4 |
                        uVar4) << 4) << 2) << 2) << 7 | (uint)(iVar1 != 0) << 5 | uVar2;
  return;
}

