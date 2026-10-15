/*
 * FUN_10005c60 at 10005c60
 * undefined FUN_10005c60(void)
 * Address ranges: 10005c60-10005d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10005c60(int param_1,uint *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)*param_2;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar4 * 0x78);
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
     (puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar4 * 0x78), *puVar1 != uVar5)) {
    FUN_100062f0(param_1,uVar4,uVar5,param_2,param_3);
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
    *(undefined8 *)((int)puVar1 + 0x6c) = param_3[0xc];
    *(undefined4 *)((int)puVar1 + 0x74) = *(undefined4 *)(param_3 + 0xd);
  }
  return *(int *)(param_1 + 4) + uVar4 * 0x78 + 8;
}

