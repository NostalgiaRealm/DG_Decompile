/*
 * FUN_180090cc8 at 180090cc8
 * undefined __fastcall FUN_180090cc8(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 180090cc8-180090fb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180090cc8(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          bVar1 = (byte)uVar5 & 0x1f;
          uVar12 = 1;
          if (*(uint *)(param_1 + 0x24) >> bVar1 != 0) {
            uVar12 = *(uint *)(param_1 + 0x24) >> bVar1;
          }
          bVar1 = (byte)uVar5 & 0x1f;
          uVar10 = 1;
          if (*(uint *)(param_1 + 0x28) >> bVar1 != 0) {
            uVar10 = *(uint *)(param_1 + 0x28) >> bVar1;
          }
          uVar11 = uVar6 * *(int *)(param_1 + 0x3c) + uVar5;
          if (*(int *)(param_1 + 0x44) - 3U < 3) {
            if (*(longlong *)(param_1 + 0x198) != 0) {
              lVar16 = *(longlong *)(param_3 + 0x20);
              if (lVar16 == 0) {
                lVar16 = *(longlong *)(param_3 + 0x18);
              }
              lVar9 = *(longlong *)(param_2 + 0x20);
              if (lVar9 == 0) {
                lVar9 = *(longlong *)(param_2 + 0x18);
              }
              uVar8 = *(uint *)(param_1 + 0x2c);
              uVar7 = 0xf;
              uVar17 = *(undefined8 *)(*(longlong *)(param_3 + 0x30) + 8 + (ulonglong)uVar11 * 0x28)
              ;
              uVar15 = *(undefined8 *)(param_2 + 0x28);
              uVar14 = 0;
              uVar13 = 0;
              goto LAB_180090ed5;
            }
          }
          else {
            if (*(int *)(param_1 + 0x2c) == 0) {
              FUN_18008d228(*(longlong *)(param_1 + 0x110),1,*(longlong *)(param_1 + 0x10));
            }
            uVar7 = 1;
            uVar8 = *(uint *)(param_1 + 0x2c);
            if (*(char *)(param_1 + 0x248) == '\0') {
              uVar7 = *(uint *)(&DAT_1800feb70 + (ulonglong)uVar8 * 4);
            }
            lVar9 = *(longlong *)(param_2 + 0x20);
            uVar7 = *(uint *)(&DAT_1800ff0e0 + (ulonglong)uVar8 * 4) & 0xf |
                    (uVar7 & 7 | 0xf8000000) << 4;
            if (lVar9 == 0) {
              lVar9 = *(longlong *)(param_2 + 0x18);
            }
            uVar15 = *(undefined8 *)(param_2 + 0x28);
            uVar17 = 0;
            lVar16 = 0;
            uVar14 = *(undefined8 *)(*(longlong *)(param_3 + 0x30) + (ulonglong)uVar11 * 0x28);
            uVar13 = *(undefined8 *)(param_3 + 0x18);
LAB_180090ed5:
            FUN_18008d560(*(longlong *)(param_1 + 0x110),(ulonglong)uVar8,uVar8,uVar5,uVar6,uVar5,
                          uVar6,*(float *)(param_1 + 0x240) * 0.0,*(float *)(param_1 + 0x244) * 0.0,
                          *(float *)(param_1 + 0x240) * (float)(int)uVar12,
                          *(float *)(param_1 + 0x244) * (float)(int)uVar10,0,0,(float)(int)uVar12,
                          (float)(int)uVar10,uVar13,uVar14,0,lVar9,uVar15,0,lVar16,uVar17,'\0',uVar7
                          ,1);
          }
          uVar5 = uVar5 + 1;
          uVar3 = (ulonglong)(uVar11 & 0x3f);
          uVar4 = (ulonglong)(uVar11 >> 6);
          lVar16 = (longlong)uVar3 >> 3;
          pbVar2 = (byte *)(param_1 + 0x250 + uVar4 * 8 + lVar16);
          *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
          pbVar2 = (byte *)(param_1 + 0x280 + uVar4 * 8 + lVar16);
          *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
          pbVar2 = (byte *)(param_1 + 0xf0 + uVar4 * 8 + lVar16);
          *pbVar2 = *pbVar2 | '\x01' << (uVar3 & 7);
        } while (uVar5 < *(uint *)(param_1 + 0x30));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x34));
  }
  return;
}

