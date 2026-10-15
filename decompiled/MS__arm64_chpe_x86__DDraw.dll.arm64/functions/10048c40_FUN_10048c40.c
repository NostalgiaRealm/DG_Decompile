/*
 * FUN_10048c40 at 10048c40
 * undefined FUN_10048c40(void)
 * Address ranges: 10048c40-10048dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048c40(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,int param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [12];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  
  piVar1 = param_2 + 3;
  uVar7 = param_2[2] - *param_2;
  uVar5 = *param_5;
  iVar13 = param_2[1];
  if (iVar13 < *piVar1) {
    uVar6 = uVar7 >> 2;
    uVar4 = uVar7 & 0xfffffffc;
    if ((char)param_5[1] == '\0') {
      do {
        uVar12 = 0;
        if (uVar6 != 0) {
          do {
            pauVar3 = (undefined1 (*) [12])(param_6 + uVar12 * 0x10);
            uVar15 = (uint)((ulonglong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
            pauVar2 = (undefined1 (*) [16])(param_8 + uVar12 * 0x10);
            uVar12 = uVar12 + 1;
            auVar14._12_4_ = uVar15;
            auVar14._0_12_ = *pauVar3;
            auVar10._4_4_ = -(uint)(uVar5 <= (uint)((ulonglong)*(undefined8 *)*pauVar3 >> 0x20));
            auVar10._0_4_ = -(uint)(uVar5 <= (uint)*(undefined8 *)*pauVar3);
            auVar10._8_4_ = -(uint)(uVar5 <= (uint)*(undefined8 *)(*pauVar3 + 8));
            auVar10._12_4_ = -(uint)(uVar5 <= uVar15);
            auVar14 = *pauVar2 ^ (*pauVar2 ^ auVar14) & ~auVar10;
            *(longlong *)(*pauVar2 + 8) = auVar14._8_8_;
            *(longlong *)*pauVar2 = auVar14._0_8_;
          } while (uVar12 < uVar6);
        }
        uVar12 = 0;
        if ((uVar7 & 3) != 0) {
          do {
            uVar15 = *(uint *)(param_6 + uVar4 * 4 + uVar12 * 4);
            if (uVar15 != *param_5) {
              *(uint *)(param_8 + uVar4 * 4 + uVar12 * 4) = uVar15;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < (uVar7 & 3));
        }
        iVar13 = iVar13 + 1;
        param_6 = param_6 + param_7;
        param_8 = param_5[5] + param_8;
      } while (iVar13 < *piVar1);
    }
    else {
      do {
        uVar12 = 0;
        if (uVar6 != 0) {
          do {
            iVar11 = uVar12 * -0x10;
            pauVar2 = (undefined1 (*) [16])(param_8 + uVar12 * 0x10);
            uVar12 = uVar12 + 1;
            auVar14 = NEON_rev64(*(undefined1 (*) [16])(param_6 + iVar11 + -0x10),4);
            auVar8._8_4_ = auVar14._0_4_;
            auVar8._0_8_ = auVar14._8_8_;
            auVar8._12_4_ = auVar14._4_4_;
            auVar9._4_4_ = -(uint)(uVar5 <= auVar14._12_4_);
            auVar9._0_4_ = -(uint)(uVar5 <= auVar14._8_4_);
            auVar9._8_4_ = -(uint)(uVar5 <= auVar14._0_4_);
            auVar9._12_4_ = -(uint)(uVar5 <= auVar14._4_4_);
            auVar14 = *pauVar2 ^ (*pauVar2 ^ auVar8) & ~auVar9;
            *(longlong *)(*pauVar2 + 8) = auVar14._8_8_;
            *(longlong *)*pauVar2 = auVar14._0_8_;
          } while (uVar12 < uVar6);
        }
        uVar12 = 0;
        if ((uVar7 & 3) != 0) {
          do {
            uVar15 = *(uint *)(param_6 + uVar4 * -4 + uVar12 * -4 + -4);
            if (uVar15 != *param_5) {
              *(uint *)(param_8 + uVar4 * 4 + uVar12 * 4) = uVar15;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < (uVar7 & 3));
        }
        iVar13 = iVar13 + 1;
        param_6 = param_6 + param_7;
        param_8 = param_5[5] + param_8;
      } while (iVar13 < *piVar1);
    }
  }
  return;
}

