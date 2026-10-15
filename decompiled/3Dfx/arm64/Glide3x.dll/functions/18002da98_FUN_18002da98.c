/*
 * FUN_18002da98 at 18002da98
 * undefined __cdecl FUN_18002da98(undefined1 * param_1, int param_2)
 * Address ranges: 18002da98-18002debf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002da98(undefined1 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  
  if (param_2 - 9U < 2) {
    puVar5 = (uint *)0x18006e830;
    puVar18 = (uint *)0x18006e934;
    puVar20 = (uint *)0x18006e534;
    puVar17 = (uint *)0x18006ea38;
    puVar15 = (uint *)0x18006ea3c;
    puVar6 = (uint *)0x18006e930;
    puVar7 = (uint *)0x18006ea30;
    puVar8 = (uint *)0x18006e834;
    puVar9 = (uint *)0x18006e838;
    puVar10 = (uint *)0x18006e83c;
    puVar19 = (uint *)0x18006ea34;
    puVar16 = (uint *)0x18006e938;
    puVar14 = (uint *)0x18006e93c;
  }
  else if (param_2 - 0xbU < 2) {
    puVar5 = (uint *)0x18006e840;
    puVar8 = (uint *)0x18006e844;
    puVar9 = (uint *)0x18006e848;
    puVar10 = (uint *)0x18006e84c;
    puVar7 = (uint *)0x18006ea40;
    puVar19 = (uint *)0x18006ea44;
    puVar17 = (uint *)0x18006ea48;
    puVar15 = (uint *)0x18006ea4c;
    puVar20 = (uint *)0x18006e544;
    puVar6 = (uint *)0x18006e940;
    puVar18 = (uint *)0x18006e944;
    puVar16 = (uint *)0x18006e948;
    puVar14 = (uint *)0x18006e94c;
  }
  else if (param_2 - 0xdU < 2) {
    puVar5 = (uint *)0x18006e850;
    puVar8 = (uint *)0x18006e854;
    puVar9 = (uint *)0x18006e858;
    puVar10 = (uint *)0x18006e85c;
    puVar7 = (uint *)0x18006ea50;
    puVar19 = (uint *)0x18006ea54;
    puVar17 = (uint *)0x18006ea58;
    puVar15 = (uint *)0x18006ea5c;
    puVar20 = (uint *)0x18006e554;
    puVar6 = (uint *)0x18006e950;
    puVar18 = (uint *)0x18006e954;
    puVar16 = (uint *)0x18006e958;
    puVar14 = (uint *)0x18006e95c;
  }
  else {
    puVar5 = (uint *)0x0;
    puVar7 = (uint *)0x0;
    puVar6 = (uint *)0x0;
    puVar8 = (uint *)&DAT_00000004;
    puVar9 = (uint *)&DAT_00000008;
    puVar10 = (uint *)&DAT_0000000c;
    puVar20 = (uint *)&DAT_00000004;
    puVar19 = (uint *)&DAT_00000004;
    puVar18 = (uint *)&DAT_00000004;
    puVar17 = (uint *)&DAT_00000008;
    puVar16 = (uint *)&DAT_00000008;
    puVar15 = (uint *)&DAT_0000000c;
    puVar14 = (uint *)&DAT_0000000c;
  }
  uVar22 = 0xffffffff;
  lVar21 = 0;
  uVar11 = 0xffffffff;
  switch(param_2) {
  default:
    FUN_180063e98(param_1,0,0x1000);
    break;
  case 1:
    uVar11 = 0;
    do {
      uVar13 = (ulonglong)uVar11;
      uVar22 = uVar11 * 4;
      *(undefined4 *)(param_1 + (ulonglong)uVar22 * 4) = 0;
      *(undefined4 *)(param_1 + (ulonglong)(uVar22 + 2) * 4) = 0;
      *(undefined4 *)(param_1 + (ulonglong)(uVar22 + 1) * 4) = 0;
      uVar11 = uVar11 + 1;
      *(float *)(param_1 + (ulonglong)(uVar22 + 3) * 4) = (float)uVar13;
    } while (uVar11 < 0x100);
    break;
  case 2:
  case 3:
  case 4:
    uVar11 = 0;
    do {
      uVar22 = uVar11 * 4;
      *(undefined4 *)(param_1 + (ulonglong)uVar22 * 4) = 0;
      *(undefined4 *)(param_1 + (ulonglong)(uVar22 + 2) * 4) = 0;
      *(undefined4 *)(param_1 + (ulonglong)(uVar22 + 1) * 4) = 0;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(param_1 + (ulonglong)(uVar22 + 3) * 4) = 0x437f0000;
    } while (uVar11 < 0x100);
    break;
  case 5:
    uVar13 = 0;
    do {
      uVar1 = (uint)(uVar13 >> 3);
      uVar12 = (uint)uVar13;
      uVar22 = uVar12 * 4;
      uVar11 = uVar12 & 3;
      uVar13 = (ulonglong)(uVar12 + 1);
      *(float *)(param_1 + (ulonglong)uVar22 * 4) =
           (float)(uVar12 & 0xe0 | (uVar1 & 0x18 | uVar12 & 0xe0) >> 3);
      *(float *)(param_1 + (ulonglong)(uVar22 + 1) * 4) =
           (float)(uVar1 & 3 | (uVar12 & 0x1c) << 3 | uVar12 & 0x1c);
      *(float *)(param_1 + (ulonglong)(uVar22 + 2) * 4) =
           (float)(uVar11 | (uVar11 | (uVar11 | uVar11 << 2) << 2) << 2);
      *(undefined4 *)(param_1 + (ulonglong)(uVar22 + 3) * 4) = 0x437f0000;
    } while (uVar12 + 1 < 0x100);
    break;
  case 6:
    uVar11 = 0;
    do {
      fVar23 = (float)uVar11;
      uVar22 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      *(float *)(param_1 + (ulonglong)(uVar22 + 3) * 4) = fVar23;
      *(float *)(param_1 + (ulonglong)(uVar22 + 2) * 4) = fVar23;
      *(float *)(param_1 + (ulonglong)(uVar22 + 1) * 4) = fVar23;
      *(float *)(param_1 + (ulonglong)uVar22 * 4) = fVar23;
    } while (uVar11 < 0x100);
    break;
  case 7:
    uVar11 = 0;
    do {
      fVar23 = (float)uVar11;
      uVar22 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      *(float *)(param_1 + (ulonglong)(uVar22 + 2) * 4) = fVar23;
      *(float *)(param_1 + (ulonglong)(uVar22 + 1) * 4) = fVar23;
      *(undefined4 *)(param_1 + (ulonglong)(uVar22 + 3) * 4) = 0x437f0000;
      *(float *)(param_1 + (ulonglong)uVar22 * 4) = fVar23;
    } while (uVar11 < 0x100);
    break;
  case 8:
    uVar11 = 0;
    do {
      uVar12 = uVar11 * 4;
      fVar23 = (float)(uVar11 & 0xf | (uVar11 & 0xf) << 4);
      *(float *)(param_1 + (ulonglong)(uVar12 + 2) * 4) = fVar23;
      *(float *)(param_1 + (ulonglong)(uVar12 + 1) * 4) = fVar23;
      uVar22 = uVar11 & 0xf0;
      uVar1 = uVar11 >> 4;
      *(float *)(param_1 + (ulonglong)uVar12 * 4) = fVar23;
      uVar11 = uVar11 + 1;
      *(float *)(param_1 + (ulonglong)(uVar12 + 3) * 4) = (float)(uVar22 | uVar1 & 0xf);
    } while (uVar11 < 0x100);
    break;
  case 10:
    uVar11 = 0;
  case 0xc:
  case 0xe:
    uVar22 = uVar11;
    lVar21 = 8;
  case 9:
  case 0xb:
  case 0xd:
    uVar11 = 0;
    do {
      uVar3 = uVar11 << lVar21;
      uVar12 = *puVar8;
      uVar2 = *puVar9;
      uVar1 = (*puVar10 & (int)(short)uVar3 | *puVar20) & uVar22;
      uVar4 = uVar11 * 4;
      *(float *)(param_1 + (ulonglong)uVar4 * 4) =
           (float)((*puVar5 & uVar3) >> (ulonglong)(*puVar7 & 0x1f) |
                  (*puVar5 & uVar3) >> (ulonglong)(*puVar6 & 0x1f));
      uVar11 = uVar11 + 1;
      *(float *)(param_1 + (ulonglong)(uVar4 + 1) * 4) =
           (float)((uVar12 & uVar3) >> (ulonglong)(*puVar19 & 0x1f) |
                  (uVar12 & uVar3) >> (ulonglong)(*puVar18 & 0x1f));
      *(float *)(param_1 + (ulonglong)(uVar4 + 2) * 4) =
           (float)((uVar2 & uVar3) >> (ulonglong)(*puVar17 & 0x1f) |
                  (uVar2 & uVar3) << (ulonglong)(*puVar16 & 0x1f));
      *(float *)(param_1 + (ulonglong)(uVar4 + 3) * 4) =
           (float)(uVar1 >> (ulonglong)(*puVar15 & 0x1f) | uVar1 >> (ulonglong)(*puVar14 & 0x1f));
    } while (uVar11 < 0x100);
  }
  return;
}

