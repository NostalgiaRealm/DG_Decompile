/*
 * FUN_10048aa0 at 10048aa0
 * undefined FUN_10048aa0(void)
 * Address ranges: 10048aa0-10048c2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048aa0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,int param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  unkbyte10 *pVar3;
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
  ushort uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  
  piVar1 = param_2 + 3;
  uVar6 = param_2[2] - *param_2;
  uVar14 = (ushort)*param_5;
  iVar15 = param_2[1];
  if (iVar15 < *piVar1) {
    uVar5 = uVar6 >> 3;
    uVar4 = uVar6 & 0xfffffff8;
    if ((char)param_5[1] == '\0') {
      do {
        uVar13 = 0;
        if (uVar5 != 0) {
          do {
            pVar3 = (unkbyte10 *)(param_6 + uVar13 * 0x10);
            uVar9 = *(undefined8 *)((int)pVar3 + 8);
            uVar17 = (ushort)((ulonglong)uVar9 >> 0x10);
            uVar18 = (ushort)((ulonglong)uVar9 >> 0x20);
            uVar19 = (ushort)((ulonglong)uVar9 >> 0x30);
            uVar8 = *(undefined8 *)pVar3;
            pauVar2 = (undefined1 (*) [16])(param_8 + uVar13 * 0x10);
            uVar13 = uVar13 + 1;
            auVar16._10_2_ = uVar17;
            auVar16._0_10_ = *pVar3;
            auVar16._12_2_ = uVar18;
            auVar16._14_2_ = uVar19;
            auVar11._2_2_ = -(ushort)(uVar14 <= (ushort)((ulonglong)uVar8 >> 0x10));
            auVar11._0_2_ = -(ushort)(uVar14 <= (ushort)uVar8);
            auVar11._4_2_ = -(ushort)(uVar14 <= (ushort)((ulonglong)uVar8 >> 0x20));
            auVar11._6_2_ = -(ushort)(uVar14 <= (ushort)((ulonglong)uVar8 >> 0x30));
            auVar11._8_2_ = -(ushort)(uVar14 <= (ushort)uVar9);
            auVar11._10_2_ = -(ushort)(uVar14 <= uVar17);
            auVar11._12_2_ = -(ushort)(uVar14 <= uVar18);
            auVar11._14_2_ = -(ushort)(uVar14 <= uVar19);
            auVar16 = *pauVar2 ^ (*pauVar2 ^ auVar16) & ~auVar11;
            *(longlong *)(*pauVar2 + 8) = auVar16._8_8_;
            *(longlong *)*pauVar2 = auVar16._0_8_;
          } while (uVar13 < uVar5);
        }
        uVar13 = 0;
        if ((uVar6 & 7) != 0) {
          do {
            uVar17 = *(ushort *)(param_6 + uVar4 * 2 + uVar13 * 2);
            if ((uint)uVar17 != *param_5) {
              *(ushort *)(param_8 + uVar4 * 2 + uVar13 * 2) = uVar17;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uVar6 & 7));
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
            auVar16 = NEON_rev64(*(undefined1 (*) [16])(param_6 + iVar12 + -0x10),2);
            auVar7._8_2_ = auVar16._0_2_;
            auVar7._0_8_ = auVar16._8_8_;
            auVar7._10_2_ = auVar16._2_2_;
            auVar7._12_2_ = auVar16._4_2_;
            auVar7._14_2_ = auVar16._6_2_;
            auVar10._2_2_ = -(ushort)(uVar14 <= auVar16._10_2_);
            auVar10._0_2_ = -(ushort)(uVar14 <= auVar16._8_2_);
            auVar10._4_2_ = -(ushort)(uVar14 <= auVar16._12_2_);
            auVar10._6_2_ = -(ushort)(uVar14 <= auVar16._14_2_);
            auVar10._8_2_ = -(ushort)(uVar14 <= auVar16._0_2_);
            auVar10._10_2_ = -(ushort)(uVar14 <= auVar16._2_2_);
            auVar10._12_2_ = -(ushort)(uVar14 <= auVar16._4_2_);
            auVar10._14_2_ = -(ushort)(uVar14 <= auVar16._6_2_);
            auVar16 = *pauVar2 ^ (*pauVar2 ^ auVar7) & ~auVar10;
            *(longlong *)(*pauVar2 + 8) = auVar16._8_8_;
            *(longlong *)*pauVar2 = auVar16._0_8_;
          } while (uVar13 < uVar5);
        }
        uVar13 = 0;
        if ((uVar6 & 7) != 0) {
          do {
            uVar17 = *(ushort *)(param_6 + uVar4 * -2 + uVar13 * -2 + -2);
            if ((uint)uVar17 != *param_5) {
              *(ushort *)(param_8 + uVar4 * 2 + uVar13 * 2) = uVar17;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uVar6 & 7));
        }
        iVar15 = iVar15 + 1;
        param_6 = param_6 + param_7;
        param_8 = param_5[5] + param_8;
      } while (iVar15 < *piVar1);
    }
  }
  return;
}

