/*
 * FUN_1002dd0b at 1002dd0b
 * undefined __stdcall FUN_1002dd0b(int * param_1, undefined4 param_2, undefined4 param_3, uint * param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1002dd0b-1002df18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002dd0b(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int param_5,
                 int param_6,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar4 = *param_4;
  uVar13 = param_1[2] - *param_1;
  local_14 = param_1[1];
  if ((char)param_4[1] == '\0') {
    if (local_14 < param_1[3]) {
      local_1c = param_7;
      iVar10 = (uVar13 & 0xfffffffc) * 4;
      local_18 = param_5;
      do {
        if (uVar13 >> 2 != 0) {
          uVar12 = 0;
          do {
            uVar15 = uVar12 + 1;
            puVar1 = (uint *)(local_18 + uVar12 * 0x10);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            uVar16 = -(uint)(*puVar1 == uVar4);
            uVar18 = -(uint)(uVar5 == uVar4);
            uVar17 = -(uint)(uVar6 == uVar4);
            uVar19 = -(uint)(uVar7 == uVar4);
            puVar2 = (uint *)(local_1c + uVar12 * 0x10);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar14 = puVar2[3];
            puVar3 = (uint *)(local_1c + uVar12 * 0x10);
            *puVar3 = *puVar2 & uVar16 | ~uVar16 & *puVar1;
            puVar3[1] = uVar8 & uVar18 | ~uVar18 & uVar5;
            puVar3[2] = uVar9 & uVar17 | ~uVar17 & uVar6;
            puVar3[3] = uVar14 & uVar19 | ~uVar19 & uVar7;
            uVar12 = uVar15;
          } while (uVar15 < uVar13 >> 2);
        }
        uVar12 = 0;
        if ((uVar13 & 3) != 0) {
          do {
            uVar5 = *(uint *)(local_18 + iVar10 + uVar12 * 4);
            if (uVar5 != *param_4) {
              *(uint *)(iVar10 + local_1c + uVar12 * 4) = uVar5;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < (uVar13 & 3));
        }
        local_1c = local_1c + param_4[5];
        local_18 = local_18 + param_6;
        local_14 = local_14 + 1;
      } while (local_14 < param_1[3]);
    }
  }
  else if (local_14 < param_1[3]) {
    local_1c = param_5;
    do {
      local_20 = 0;
      if (uVar13 >> 2 != 0) {
        do {
          iVar11 = local_20 * 0x10;
          iVar10 = local_1c + local_20 * -0x10;
          uVar12 = *(uint *)(iVar10 + -0x10);
          uVar5 = *(uint *)(iVar10 + -0xc);
          uVar6 = *(uint *)(iVar10 + -8);
          local_20 = local_20 + 1;
          uVar14 = -(uint)(*(uint *)(iVar10 + -4) == uVar4);
          uVar15 = -(uint)(uVar6 == uVar4);
          uVar16 = -(uint)(uVar5 == uVar4);
          uVar18 = -(uint)(uVar12 == uVar4);
          puVar1 = (uint *)(iVar11 + param_7);
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar2 = (uint *)(iVar11 + param_7);
          *puVar2 = *puVar1 & uVar14 | ~uVar14 & *(uint *)(iVar10 + -4);
          puVar2[1] = uVar7 & uVar15 | ~uVar15 & uVar6;
          puVar2[2] = uVar8 & uVar16 | ~uVar16 & uVar5;
          puVar2[3] = uVar9 & uVar18 | ~uVar18 & uVar12;
        } while (local_20 < uVar13 >> 2);
      }
      uVar12 = 0;
      if ((uVar13 & 3) != 0) {
        do {
          uVar5 = *(uint *)(local_1c + (uVar13 & 0xfffffffc) * -4 + uVar12 * -4 + -4);
          if (uVar5 != *param_4) {
            *(uint *)((uVar13 & 0xfffffffc) * 4 + param_7 + uVar12 * 4) = uVar5;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uVar13 & 3));
      }
      param_7 = param_7 + param_4[5];
      local_1c = local_1c + param_6;
      local_14 = local_14 + 1;
    } while (local_14 < param_1[3]);
  }
  return;
}

