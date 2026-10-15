/*
 * FUN_1004e571 at 1004e571
 * undefined8 __stdcall FUN_1004e571(uint * param_1)
 * Address ranges: 1004e571-1004e638
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004e571(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar1 = param_1[0x15];
  uVar11 = param_1[0x1a] + param_1[0x18];
  uVar12 = uVar11 + uVar1;
  uVar2 = param_1[0x13];
  uVar13 = uVar12 + uVar2;
  uVar3 = param_1[0x11];
  uVar14 = uVar13 + uVar3;
  uVar4 = param_1[0xf];
  uVar15 = uVar14 + uVar4;
  uVar5 = param_1[0xc];
  uVar16 = uVar15 + param_1[0xe];
  uVar17 = uVar16 + uVar5;
  uVar6 = param_1[10];
  uVar18 = uVar17 + uVar6;
  uVar7 = param_1[6];
  uVar19 = uVar18 + param_1[8];
  uVar20 = uVar19 + uVar7;
  uVar8 = param_1[4];
  uVar21 = uVar20 + uVar8;
  uVar9 = param_1[2];
  uVar22 = uVar21 + uVar9;
  uVar10 = *param_1;
  return CONCAT44(((int)uVar10 >> 0x1f) +
                  param_1[0x1b] + param_1[0x19] + param_1[0x17] + param_1[0x16] + param_1[0x14] +
                  param_1[0x12] + param_1[0x10] + param_1[0xd] + param_1[0xb] + param_1[9] +
                  param_1[7] + param_1[5] + param_1[3] + param_1[1] +
                  (uint)CARRY4(param_1[0x1a],param_1[0x18]) + ((int)uVar1 >> 0x1f) +
                  (uint)CARRY4(uVar11,uVar1) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar12,uVar2) +
                  ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar13,uVar3) + ((int)uVar4 >> 0x1f) +
                  (uint)CARRY4(uVar14,uVar4) + (uint)CARRY4(uVar15,param_1[0xe]) +
                  ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar16,uVar5) + ((int)uVar6 >> 0x1f) +
                  (uint)CARRY4(uVar17,uVar6) + (uint)CARRY4(uVar18,param_1[8]) +
                  ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar19,uVar7) + ((int)uVar8 >> 0x1f) +
                  (uint)CARRY4(uVar20,uVar8) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar21,uVar9) +
                  (uint)CARRY4(uVar10,uVar22),uVar10 + uVar22);
}

