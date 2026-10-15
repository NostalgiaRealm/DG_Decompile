/*
 * FUN_1005cb60 at 1005cb60
 * undefined FUN_1005cb60(void)
 * Address ranges: 1005cb60-1005cd6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005cb60(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar14 = 0;
  piVar7 = param_1;
  if (param_1[2] != 0) {
    do {
      local_50 = 0;
      uVar13 = 0;
      local_48 = 0;
      piVar1 = (int *)(*param_1 + uVar14 * 0x10 + 0xc);
      iVar8 = *piVar1;
      if (*(int *)(iVar8 + 0xc) != 0) {
        do {
          if (uVar13 < *(uint *)(iVar8 + 0xc)) {
            iVar8 = *(int *)(iVar8 + 8) + uVar13 * 0x28;
            if ((iVar8 + 8 != 0) &&
               ((*(int *)(iVar8 + 0x10) == param_2 || (*(int *)(iVar8 + 0x14) == param_3)))) {
              FUN_1005c9b0(piVar7,(int *)(iVar8 + 0x10),1);
              piVar7 = (int *)FUN_10047380(&local_50,iVar8 + 8);
            }
          }
          iVar8 = *piVar1;
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(iVar8 + 0xc));
      }
      uVar13 = 0;
      if (local_50._4_4_ != 0) {
        do {
          iVar8 = *piVar1;
          puVar2 = (uint *)(iVar8 + 0xc);
          uVar4 = *puVar2;
          if (uVar4 != 0) {
            uVar5 = *(uint *)((int)local_50 + uVar13 * 4);
            uVar11 = 0;
            uVar12 = uVar4;
            do {
              uVar9 = uVar12 + uVar11 >> 1;
              uVar10 = *(ulonglong *)(*(int *)(iVar8 + 8) + uVar9 * 0x28);
              uVar6 = uVar9;
              if (uVar10 <= uVar5) {
                if (uVar5 <= uVar10) break;
                uVar11 = uVar9 + 1;
                uVar9 = uVar11;
                uVar6 = uVar12;
              }
              uVar12 = uVar6;
            } while (uVar12 != uVar11);
            if ((uVar9 != uVar4) &&
               (*(ulonglong *)(*(int *)(iVar8 + 8) + uVar9 * 0x28) == (ulonglong)uVar5)) {
              uVar9 = uVar9 + 1;
              if (uVar9 < uVar4) {
                do {
                  uVar4 = uVar9 + 1;
                  puVar3 = (undefined8 *)(*(int *)(iVar8 + 8) + uVar9 * 0x28);
                  puVar3[-4] = puVar3[1];
                  puVar3[-5] = *puVar3;
                  puVar3[-2] = puVar3[3];
                  puVar3[-3] = puVar3[2];
                  puVar3[-1] = puVar3[4];
                  uVar9 = uVar4;
                } while (uVar4 < *puVar2);
              }
              *puVar2 = *puVar2 - 1;
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_50._4_4_);
      }
      FUN_1007dd80(local_50 & 0xffffffff);
      local_50 = 0;
      local_48 = 0;
      piVar7 = (int *)FUN_1007dd80(0);
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)param_1[2]);
  }
  return;
}

