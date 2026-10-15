/*
 * FUN_100b4f00 at 100b4f00
 * undefined FUN_100b4f00(void)
 * Address ranges: 100b4f00-100b4ffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100b4f00(int *param_1,undefined8 *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = param_1[2];
  uVar5 = (ulonglong)*param_3;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar8 = *(ulonglong *)(*param_1 + uVar4 * 0xc0);
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
  if ((uVar4 == uVar2) || (*(ulonglong *)(*param_1 + uVar4 * 0xc0) != uVar5)) {
    FUN_100b5000(param_1,uVar4,uVar5,param_3);
  }
  iVar1 = *param_1 + uVar4 * 0xc0;
  uVar11 = *(undefined8 *)(iVar1 + 0xc);
  uVar10 = *(undefined8 *)(iVar1 + 0x24);
  uVar9 = *(undefined8 *)(iVar1 + 0x1c);
  param_2[1] = *(undefined8 *)(iVar1 + 0x14);
  *param_2 = uVar11;
  param_2[3] = uVar10;
  param_2[2] = uVar9;
  uVar11 = *(undefined8 *)(iVar1 + 0x2c);
  uVar10 = *(undefined8 *)(iVar1 + 0x44);
  uVar9 = *(undefined8 *)(iVar1 + 0x3c);
  param_2[5] = *(undefined8 *)(iVar1 + 0x34);
  param_2[4] = uVar11;
  param_2[7] = uVar10;
  param_2[6] = uVar9;
  uVar11 = *(undefined8 *)(iVar1 + 0x4c);
  uVar10 = *(undefined8 *)(iVar1 + 100);
  uVar9 = *(undefined8 *)(iVar1 + 0x5c);
  param_2[9] = *(undefined8 *)(iVar1 + 0x54);
  param_2[8] = uVar11;
  param_2[0xb] = uVar10;
  param_2[10] = uVar9;
  uVar11 = *(undefined8 *)(iVar1 + 0x6c);
  uVar10 = *(undefined8 *)(iVar1 + 0x84);
  uVar9 = *(undefined8 *)(iVar1 + 0x7c);
  param_2[0xd] = *(undefined8 *)(iVar1 + 0x74);
  param_2[0xc] = uVar11;
  param_2[0xf] = uVar10;
  param_2[0xe] = uVar9;
  uVar11 = *(undefined8 *)(iVar1 + 0x8c);
  uVar10 = *(undefined8 *)(iVar1 + 0xa4);
  uVar9 = *(undefined8 *)(iVar1 + 0x9c);
  param_2[0x11] = *(undefined8 *)(iVar1 + 0x94);
  param_2[0x10] = uVar11;
  param_2[0x13] = uVar10;
  param_2[0x12] = uVar9;
  uVar9 = *(undefined8 *)(iVar1 + 0xac);
  param_2[0x15] = *(undefined8 *)(iVar1 + 0xb4);
  param_2[0x14] = uVar9;
  return param_2;
}

