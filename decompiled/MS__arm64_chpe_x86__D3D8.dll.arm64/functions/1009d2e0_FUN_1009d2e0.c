/*
 * FUN_1009d2e0 at 1009d2e0
 * undefined FUN_1009d2e0(void)
 * Address ranges: 1009d2e0-1009d643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d2e0(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,int param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 *local_5c;
  uint *local_58;
  uint local_54;
  uint *puStack_50;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 0x28);
  if (1 < *puVar1 && param_3 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar9 = (*extraout_w11)(param_1,0);
    (*pcVar8)();
    uVar10 = (*extraout_w11_00)(param_1,0);
    puStack_50 = (uint *)(param_1 + 0x24);
    if (*puStack_50 != 0) {
      uVar13 = 0;
      local_54 = param_3;
      do {
        if (((1 << (ulonglong)(uVar13 & 0x1f) & local_54) != 0) && (uVar12 = 1, 1 < *puVar1)) {
          local_5c = (undefined4 *)(param_1 + 0xe0);
          local_58 = puVar1;
          do {
            uVar7 = uVar12 - 1;
            uVar2 = uVar9 >> (ulonglong)(uVar7 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            uVar3 = uVar10 >> (ulonglong)(uVar7 & 0x1f);
            if (uVar3 == 0) {
              uVar3 = 1;
            }
            uVar4 = uVar9 >> (ulonglong)(uVar12 & 0x1f);
            if (uVar4 == 0) {
              uVar4 = 1;
            }
            uVar5 = uVar10 >> (ulonglong)(uVar12 & 0x1f);
            if (uVar5 == 0) {
              uVar5 = 1;
            }
            fVar16 = 1.0;
            if (*(char *)(param_1 + 0x3c) == '\0') {
              fVar16 = 0.5;
            }
            iVar11 = param_6;
            if (param_6 == 0) {
              iVar11 = *(int *)(param_1 + 0x2c);
            }
            iVar6 = uVar12 + iVar11 * uVar13;
            FUN_100dfee0(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15dc),auStack_60,
                         *(undefined4 *)(param_2 + 0x1c),iVar6);
            iVar11 = param_4;
            if (param_4 == -1) {
              iVar11 = *(int *)(param_2 + 0x18);
            }
            FUN_100dfee0(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15d8),auStack_64,iVar11,
                         param_5);
            fVar15 = (float)uVar3;
            fVar14 = (float)uVar2;
            FUN_10096f00(0x3efd70a4,0x3efd70a4,(float)uVar4 + 0.495,(float)uVar5 + 0.495,
                         fVar16 / fVar14,fVar16 / fVar15,(fVar14 + fVar16) / fVar14,
                         (fVar15 + fVar16) / fVar15,*local_5c,*(undefined4 *)(param_1 + 0x1c),
                         *(undefined4 *)(param_1 + 0x1c),uVar12,iVar6,uVar7,uVar13,iVar6 + -1,
                         *(undefined4 *)(param_2 + 0xc));
            uVar12 = uVar12 + 1;
          } while (uVar12 < *local_58);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *puStack_50);
    }
  }
  return;
}

