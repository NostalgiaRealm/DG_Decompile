/*
 * FUN_1002dacc at 1002dacc
 * undefined __stdcall FUN_1002dacc(int * param_1, undefined4 param_2, undefined4 param_3, uint * param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1002dacc-1002dd0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002dacc(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int param_5,
                 int param_6,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  sVar3 = (short)*param_4;
  uVar9 = param_1[2] - *param_1;
  local_14 = param_1[1];
  if ((char)param_4[1] == '\0') {
    if (local_14 < param_1[3]) {
      iVar7 = (uVar9 & 0xfffffff8) * 2;
      local_1c = param_5;
      local_18 = param_7;
      do {
        if (uVar9 >> 3 != 0) {
          uVar8 = 0;
          do {
            uVar10 = uVar8 + 1;
            auVar12 = *(undefined1 (*) [16])(local_1c + uVar8 * 0x10);
            uVar14 = CONCAT22(-(ushort)(auVar12._2_2_ == sVar3),-(ushort)(auVar12._0_2_ == sVar3));
            uVar15 = CONCAT22(-(ushort)(auVar12._6_2_ == sVar3),-(ushort)(auVar12._4_2_ == sVar3));
            uVar16 = CONCAT22(-(ushort)(auVar12._10_2_ == sVar3),-(ushort)(auVar12._8_2_ == sVar3));
            uVar17 = CONCAT22(-(ushort)(auVar12._14_2_ == sVar3),-(ushort)(auVar12._12_2_ == sVar3))
            ;
            puVar1 = (uint *)(local_18 + uVar8 * 0x10);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar13 = puVar1[3];
            puVar2 = (uint *)(local_18 + uVar8 * 0x10);
            *puVar2 = *puVar1 & uVar14 | ~uVar14 & auVar12._0_4_;
            puVar2[1] = uVar5 & uVar15 | ~uVar15 & auVar12._4_4_;
            puVar2[2] = uVar6 & uVar16 | ~uVar16 & auVar12._8_4_;
            puVar2[3] = uVar13 & uVar17 | ~uVar17 & auVar12._12_4_;
            uVar8 = uVar10;
          } while (uVar10 < uVar9 >> 3);
        }
        uVar8 = 0;
        if ((uVar9 & 7) != 0) {
          do {
            uVar4 = *(ushort *)(local_1c + iVar7 + uVar8 * 2);
            if ((uint)uVar4 != *param_4) {
              *(ushort *)(local_18 + iVar7 + uVar8 * 2) = uVar4;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uVar9 & 7));
        }
        local_18 = local_18 + param_4[5];
        local_1c = local_1c + param_6;
        local_14 = local_14 + 1;
      } while (local_14 < param_1[3]);
    }
  }
  else if (local_14 < param_1[3]) {
    local_1c = param_5;
    local_18 = param_7;
    do {
      local_20 = 0;
      if (uVar9 >> 3 != 0) {
        do {
          iVar7 = local_20 * 0x10;
          auVar12 = *(undefined1 (*) [16])(local_1c + local_20 * -0x10 + -0x10);
          local_20 = local_20 + 1;
          auVar11._0_8_ = auVar12._8_8_;
          auVar11._8_4_ = auVar12._0_4_;
          auVar11._12_4_ = auVar12._4_4_;
          auVar12 = pshufhw(auVar11,auVar11,0x1b);
          auVar12 = pshuflw(auVar12,auVar12,0x1b);
          uVar13 = CONCAT22(-(ushort)(auVar12._2_2_ == sVar3),-(ushort)(auVar12._0_2_ == sVar3));
          uVar10 = CONCAT22(-(ushort)(auVar12._6_2_ == sVar3),-(ushort)(auVar12._4_2_ == sVar3));
          uVar14 = CONCAT22(-(ushort)(auVar12._10_2_ == sVar3),-(ushort)(auVar12._8_2_ == sVar3));
          uVar15 = CONCAT22(-(ushort)(auVar12._14_2_ == sVar3),-(ushort)(auVar12._12_2_ == sVar3));
          puVar1 = (uint *)(iVar7 + local_18);
          uVar8 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (uint *)(iVar7 + local_18);
          *puVar2 = *puVar1 & uVar13 | ~uVar13 & auVar12._0_4_;
          puVar2[1] = uVar8 & uVar10 | ~uVar10 & auVar12._4_4_;
          puVar2[2] = uVar5 & uVar14 | ~uVar14 & auVar12._8_4_;
          puVar2[3] = uVar6 & uVar15 | ~uVar15 & auVar12._12_4_;
        } while (local_20 < uVar9 >> 3);
      }
      uVar8 = 0;
      if ((uVar9 & 7) != 0) {
        do {
          uVar4 = *(ushort *)(local_1c + (uVar9 & 0xfffffff8) * -2 + uVar8 * -2 + -2);
          if ((uint)uVar4 != *param_4) {
            *(ushort *)(local_18 + (uVar9 & 0xfffffff8) * 2 + uVar8 * 2) = uVar4;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uVar9 & 7));
      }
      local_18 = local_18 + param_4[5];
      local_1c = local_1c + param_6;
      local_14 = local_14 + 1;
    } while (local_14 < param_1[3]);
  }
  return;
}

