/*
 * FUN_10048900 at 10048900
 * undefined FUN_10048900(void)
 * Address ranges: 10048900-10048a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048900(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,int param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  unkbyte9 *pVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  undefined1 auVar16 [16];
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  
  piVar1 = param_2 + 3;
  uVar6 = param_2[2] - *param_2;
  bVar14 = (byte)*param_5;
  iVar15 = param_2[1];
  if (iVar15 < *piVar1) {
    uVar5 = uVar6 >> 4;
    uVar4 = uVar6 & 0xfffffff0;
    if ((char)param_5[1] == '\0') {
      do {
        uVar13 = 0;
        if (uVar5 != 0) {
          do {
            pVar3 = (unkbyte9 *)(param_6 + uVar13 * 0x10);
            uVar9 = *(undefined8 *)((int)pVar3 + 8);
            bVar17 = (byte)((ulonglong)uVar9 >> 8);
            bVar18 = (byte)((ulonglong)uVar9 >> 0x10);
            bVar19 = (byte)((ulonglong)uVar9 >> 0x18);
            bVar20 = (byte)((ulonglong)uVar9 >> 0x20);
            bVar21 = (byte)((ulonglong)uVar9 >> 0x28);
            bVar22 = (byte)((ulonglong)uVar9 >> 0x30);
            bVar23 = (byte)((ulonglong)uVar9 >> 0x38);
            uVar8 = *(undefined8 *)pVar3;
            pauVar2 = (undefined1 (*) [16])(param_8 + uVar13 * 0x10);
            uVar13 = uVar13 + 1;
            auVar16[9] = bVar17;
            auVar16._0_9_ = *pVar3;
            auVar16[10] = bVar18;
            auVar16[0xb] = bVar19;
            auVar16[0xc] = bVar20;
            auVar16[0xd] = bVar21;
            auVar16[0xe] = bVar22;
            auVar16[0xf] = bVar23;
            auVar11[1] = -(bVar14 <= (byte)((ulonglong)uVar8 >> 8));
            auVar11[0] = -(bVar14 <= (byte)uVar8);
            auVar11[2] = -(bVar14 <= (byte)((ulonglong)uVar8 >> 0x10));
            auVar11[3] = -(bVar14 <= (byte)((ulonglong)uVar8 >> 0x18));
            auVar11[4] = -(bVar14 <= (byte)((ulonglong)uVar8 >> 0x20));
            auVar11[5] = -(bVar14 <= (byte)((ulonglong)uVar8 >> 0x28));
            auVar11[6] = -(bVar14 <= (byte)((ulonglong)uVar8 >> 0x30));
            auVar11[7] = -(bVar14 <= (byte)((ulonglong)uVar8 >> 0x38));
            auVar11[8] = -(bVar14 <= (byte)uVar9);
            auVar11[9] = -(bVar14 <= bVar17);
            auVar11[10] = -(bVar14 <= bVar18);
            auVar11[0xb] = -(bVar14 <= bVar19);
            auVar11[0xc] = -(bVar14 <= bVar20);
            auVar11[0xd] = -(bVar14 <= bVar21);
            auVar11[0xe] = -(bVar14 <= bVar22);
            auVar11[0xf] = -(bVar14 <= bVar23);
            auVar16 = *pauVar2 ^ (*pauVar2 ^ auVar16) & ~auVar11;
            *(longlong *)(*pauVar2 + 8) = auVar16._8_8_;
            *(longlong *)*pauVar2 = auVar16._0_8_;
          } while (uVar13 < uVar5);
        }
        uVar13 = 0;
        if ((uVar6 & 0xf) != 0) {
          do {
            bVar17 = *(byte *)(uVar13 + uVar4 + param_6);
            if ((uint)bVar17 != *param_5) {
              *(byte *)(uVar13 + uVar4 + param_8) = bVar17;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uVar6 & 0xf));
        }
        iVar15 = iVar15 + 1;
        param_6 = param_6 + param_7;
        param_8 = param_5[5] + param_8;
      } while (iVar15 < *piVar1);
    }
    else {
      do {
        uVar13 = 0;
        if (uVar5 != 0) {
          do {
            iVar12 = uVar13 * -0x10;
            pauVar2 = (undefined1 (*) [16])(param_8 + uVar13 * 0x10);
            uVar13 = uVar13 + 1;
            auVar16 = NEON_rev64(*(undefined1 (*) [16])(param_6 + iVar12 + -0x10),1);
            auVar7[8] = auVar16[0];
            auVar7._0_8_ = auVar16._8_8_;
            auVar7[9] = auVar16[1];
            auVar7[10] = auVar16[2];
            auVar7[0xb] = auVar16[3];
            auVar7[0xc] = auVar16[4];
            auVar7[0xd] = auVar16[5];
            auVar7[0xe] = auVar16[6];
            auVar7[0xf] = auVar16[7];
            auVar10[1] = -(bVar14 <= auVar16[9]);
            auVar10[0] = -(bVar14 <= auVar16[8]);
            auVar10[2] = -(bVar14 <= auVar16[10]);
            auVar10[3] = -(bVar14 <= auVar16[0xb]);
            auVar10[4] = -(bVar14 <= auVar16[0xc]);
            auVar10[5] = -(bVar14 <= auVar16[0xd]);
            auVar10[6] = -(bVar14 <= auVar16[0xe]);
            auVar10[7] = -(bVar14 <= auVar16[0xf]);
            auVar10[8] = -(bVar14 <= auVar16[0]);
            auVar10[9] = -(bVar14 <= auVar16[1]);
            auVar10[10] = -(bVar14 <= auVar16[2]);
            auVar10[0xb] = -(bVar14 <= auVar16[3]);
            auVar10[0xc] = -(bVar14 <= auVar16[4]);
            auVar10[0xd] = -(bVar14 <= auVar16[5]);
            auVar10[0xe] = -(bVar14 <= auVar16[6]);
            auVar10[0xf] = -(bVar14 <= auVar16[7]);
            auVar16 = *pauVar2 ^ (*pauVar2 ^ auVar7) & ~auVar10;
            *(longlong *)(*pauVar2 + 8) = auVar16._8_8_;
            *(longlong *)*pauVar2 = auVar16._0_8_;
          } while (uVar13 < uVar5);
        }
        uVar13 = 0;
        if ((uVar6 & 0xf) != 0) {
          do {
            bVar17 = *(byte *)(((param_6 - uVar4) - uVar13) + -1);
            if ((uint)bVar17 != *param_5) {
              *(byte *)(uVar13 + uVar4 + param_8) = bVar17;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uVar6 & 0xf));
        }
        iVar15 = iVar15 + 1;
        param_6 = param_6 + param_7;
        param_8 = param_8 + param_5[5];
      } while (iVar15 < *piVar1);
    }
  }
  return;
}

