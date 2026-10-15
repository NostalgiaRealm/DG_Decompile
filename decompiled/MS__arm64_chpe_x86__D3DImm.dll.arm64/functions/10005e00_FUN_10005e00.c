/*
 * FUN_10005e00 at 10005e00
 * undefined FUN_10005e00(void)
 * Address ranges: 10005e00-10005ee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10005e00(int param_1,uint *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)*param_2;
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar8 = uVar5 + uVar6 >> 1;
      uVar7 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar8 * 0x80);
      uVar3 = uVar8;
      if (uVar7 <= uVar4) {
        if (uVar4 <= uVar7) break;
        uVar6 = uVar8 + 1;
        uVar8 = uVar6;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar6);
  }
  if ((uVar8 == uVar2) ||
     (puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar8 * 0x80), *puVar1 != uVar4)) {
    FUN_100064e0(param_1,uVar8,uVar4,param_2,param_3);
  }
  else {
    uVar11 = *param_3;
    uVar10 = param_3[3];
    uVar9 = param_3[2];
    *(undefined8 *)((int)puVar1 + 0x14) = param_3[1];
    *(undefined8 *)((int)puVar1 + 0xc) = uVar11;
    *(undefined8 *)((int)puVar1 + 0x24) = uVar10;
    *(undefined8 *)((int)puVar1 + 0x1c) = uVar9;
    uVar11 = param_3[4];
    uVar10 = param_3[7];
    uVar9 = param_3[6];
    *(undefined8 *)((int)puVar1 + 0x34) = param_3[5];
    *(undefined8 *)((int)puVar1 + 0x2c) = uVar11;
    *(undefined8 *)((int)puVar1 + 0x44) = uVar10;
    *(undefined8 *)((int)puVar1 + 0x3c) = uVar9;
    uVar11 = param_3[8];
    uVar10 = param_3[0xb];
    uVar9 = param_3[10];
    *(undefined8 *)((int)puVar1 + 0x54) = param_3[9];
    *(undefined8 *)((int)puVar1 + 0x4c) = uVar11;
    *(undefined8 *)((int)puVar1 + 100) = uVar10;
    *(undefined8 *)((int)puVar1 + 0x5c) = uVar9;
    uVar9 = param_3[0xc];
    *(undefined8 *)((int)puVar1 + 0x74) = param_3[0xd];
    *(undefined8 *)((int)puVar1 + 0x6c) = uVar9;
  }
  return *(int *)(param_1 + 4) + uVar8 * 0x80 + 8;
}

