/*
 * FUN_1005e150 at 1005e150
 * undefined FUN_1005e150(void)
 * Address ranges: 1005e150-1005e2bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e150(int *param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  if (*puVar1 == *puVar2) {
    uVar9 = (ulonglong)(*puVar2 << 1) * 0xc0;
    uVar8 = (undefined4)uVar9;
    if (uVar9 >> 0x20 != 0) {
      uVar8 = 0xffffffff;
    }
    iVar6 = FUN_10081da0(uVar8);
    if (iVar6 != 0) {
      uVar7 = 0;
      if (*puVar2 != 0) {
        do {
          uVar3 = uVar7 + 1;
          puVar4 = (undefined8 *)(*param_1 + uVar7 * 0xc0);
          puVar5 = (undefined8 *)(iVar6 + uVar7 * 0xc0);
          uVar12 = *puVar4;
          uVar11 = puVar4[3];
          uVar10 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar12;
          puVar5[3] = uVar11;
          puVar5[2] = uVar10;
          uVar12 = puVar4[4];
          uVar11 = puVar4[7];
          uVar10 = puVar4[6];
          puVar5[5] = puVar4[5];
          puVar5[4] = uVar12;
          puVar5[7] = uVar11;
          puVar5[6] = uVar10;
          uVar12 = puVar4[8];
          uVar11 = puVar4[0xb];
          uVar10 = puVar4[10];
          puVar5[9] = puVar4[9];
          puVar5[8] = uVar12;
          puVar5[0xb] = uVar11;
          puVar5[10] = uVar10;
          uVar12 = puVar4[0xc];
          uVar11 = puVar4[0xf];
          uVar10 = puVar4[0xe];
          puVar5[0xd] = puVar4[0xd];
          puVar5[0xc] = uVar12;
          puVar5[0xf] = uVar11;
          puVar5[0xe] = uVar10;
          uVar12 = puVar4[0x10];
          uVar11 = puVar4[0x13];
          uVar10 = puVar4[0x12];
          puVar5[0x11] = puVar4[0x11];
          puVar5[0x10] = uVar12;
          puVar5[0x13] = uVar11;
          puVar5[0x12] = uVar10;
          uVar12 = puVar4[0x14];
          uVar11 = puVar4[0x17];
          uVar10 = puVar4[0x16];
          puVar5[0x15] = puVar4[0x15];
          puVar5[0x14] = uVar12;
          puVar5[0x17] = uVar11;
          puVar5[0x16] = uVar10;
          uVar7 = uVar3;
        } while (uVar3 < *puVar2);
      }
      FUN_10081dc0(*param_1);
      *param_1 = iVar6;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar7 = *puVar1; param_2 < uVar7; uVar7 = uVar7 - 1) {
    puVar4 = (undefined8 *)(*param_1 + uVar7 * 0xc0);
    puVar4[1] = puVar4[-0x17];
    *puVar4 = puVar4[-0x18];
    puVar4[3] = puVar4[-0x15];
    puVar4[2] = puVar4[-0x16];
    puVar4[5] = puVar4[-0x13];
    puVar4[4] = puVar4[-0x14];
    puVar4[7] = puVar4[-0x11];
    puVar4[6] = puVar4[-0x12];
    puVar4[9] = puVar4[-0xf];
    puVar4[8] = puVar4[-0x10];
    puVar4[0xb] = puVar4[-0xd];
    puVar4[10] = puVar4[-0xe];
    puVar4[0xd] = puVar4[-0xb];
    puVar4[0xc] = puVar4[-0xc];
    puVar4[0xf] = puVar4[-9];
    puVar4[0xe] = puVar4[-10];
    puVar4[0x11] = puVar4[-7];
    puVar4[0x10] = puVar4[-8];
    puVar4[0x13] = puVar4[-5];
    puVar4[0x12] = puVar4[-6];
    puVar4[0x15] = puVar4[-3];
    puVar4[0x14] = puVar4[-4];
    puVar4[0x17] = puVar4[-1];
    puVar4[0x16] = puVar4[-2];
  }
  FUN_1005e2d0(param_1,param_2,param_3,param_4);
  *puVar1 = *puVar1 + 1;
  return;
}

