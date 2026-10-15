/*
 * FUN_10028c40 at 10028c40
 * undefined FUN_10028c40(void)
 * Address ranges: 10028c40-10028d57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028c40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10157b40(auStack_b0);
  uVar8 = 0;
  puVar4 = (undefined8 *)(*(int *)(param_1 + 0xd80) + param_2 * 0x40);
  do {
    uVar7 = 0;
    fVar12 = *(float *)(param_3 + 0xc + uVar8 * 0x10);
    fVar11 = *(float *)(param_3 + 8 + uVar8 * 0x10);
    fVar10 = *(float *)(param_3 + uVar8 * 0x10);
    fVar9 = *(float *)(param_3 + 4 + uVar8 * 0x10);
    do {
      iVar5 = uVar7 * 2;
      iVar1 = uVar7 * 0x10;
      iVar6 = uVar7 * 2;
      iVar2 = uVar7 * 0x10;
      iVar3 = uVar7 * 0x10;
      uVar7 = uVar7 + 1;
      *(float *)((int)&local_60 + iVar3 + uVar8 * 4) =
           *(float *)(puVar4 + iVar5) * fVar10 + *(float *)((int)puVar4 + iVar1 + 4) * fVar9 +
           *(float *)(puVar4 + iVar6 + 1) * fVar11 + *(float *)((int)puVar4 + iVar2 + 0xc) * fVar12;
    } while (uVar7 < 4);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  uStack_98 = uStack_58;
  local_a0 = local_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_78 = uStack_38;
  local_80 = local_40;
  uStack_68 = uStack_28;
  uStack_70 = uStack_30;
  puVar4[1] = uStack_58;
  *puVar4 = local_60;
  puVar4[3] = uStack_48;
  puVar4[2] = uStack_50;
  puVar4[5] = uStack_38;
  puVar4[4] = local_40;
  puVar4[7] = uStack_28;
  puVar4[6] = uStack_30;
  FUN_100289c0(param_1,param_2);
  FUN_10157a90(auStack_b0);
  return;
}

