/*
 * FUN_10005ac0 at 10005ac0
 * undefined FUN_10005ac0(void)
 * Address ranges: 10005ac0-10005bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10005ac0(int param_1,uint *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)*param_2;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar4 * 0xa0);
      uVar3 = uVar4;
      if (uVar8 <= uVar5) {
        if (uVar5 <= uVar8) break;
        uVar7 = uVar4 + 1;
        uVar4 = uVar7;
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
    } while (uVar6 != uVar7);
  }
  if ((uVar4 == uVar2) ||
     (puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar4 * 0xa0), *puVar1 != uVar5)) {
    FUN_10006110(param_1,uVar4,uVar5,param_2,param_3);
  }
  else {
    uVar9 = *param_3;
    uVar8 = param_3[3];
    uVar5 = param_3[2];
    puVar1[5] = param_3[1];
    puVar1[4] = uVar9;
    puVar1[7] = uVar8;
    puVar1[6] = uVar5;
    uVar9 = param_3[4];
    uVar8 = param_3[7];
    uVar5 = param_3[6];
    puVar1[9] = param_3[5];
    puVar1[8] = uVar9;
    puVar1[0xb] = uVar8;
    puVar1[10] = uVar5;
    uVar9 = param_3[8];
    uVar8 = param_3[0xb];
    uVar5 = param_3[10];
    puVar1[0xd] = param_3[9];
    puVar1[0xc] = uVar9;
    puVar1[0xf] = uVar8;
    puVar1[0xe] = uVar5;
    uVar9 = param_3[0xc];
    uVar8 = param_3[0xf];
    uVar5 = param_3[0xe];
    puVar1[0x11] = param_3[0xd];
    puVar1[0x10] = uVar9;
    puVar1[0x13] = uVar8;
    puVar1[0x12] = uVar5;
  }
  return *(int *)(param_1 + 4) + uVar4 * 0xa0 + 0x10;
}

