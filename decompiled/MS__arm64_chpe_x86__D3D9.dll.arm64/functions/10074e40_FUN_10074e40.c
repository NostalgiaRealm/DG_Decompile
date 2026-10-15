/*
 * FUN_10074e40 at 10074e40
 * undefined FUN_10074e40(void)
 * Address ranges: 10074e40-1007516f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10074e40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  if (*(char *)(param_1 + 0xf673) != '\0') {
    fVar5 = *(float *)(param_1 + 0x7584);
    fVar21 = *(float *)(param_1 + 0x75c4);
    fVar1 = *(float *)(param_1 + 0x75b4);
    fVar3 = *(float *)(param_1 + 0x75a4);
    fVar6 = *(float *)(param_1 + 0x7594);
    fVar22 = *(float *)(param_1 + 0x75c8);
    fVar20 = *(float *)(param_1 + 0x75cc);
    fVar19 = *(float *)(param_1 + 0x75d0);
    fVar18 = *(float *)(param_1 + 0x75d8);
    fVar17 = *(float *)(param_1 + 0x75d4);
    fVar16 = *(float *)(param_1 + 0x75dc);
    fVar15 = *(float *)(param_1 + 0x75e0);
    fVar14 = *(float *)(param_1 + 0x75e4);
    fVar13 = *(float *)(param_1 + 0x75e8);
    fVar12 = *(float *)(param_1 + 0x75ec);
    fVar11 = *(float *)(param_1 + 0x75f0);
    fVar10 = *(float *)(param_1 + 0x75f4);
    fVar9 = *(float *)(param_1 + 0x75f8);
    local_50 = fVar22 * fVar6 + fVar21 * fVar5 + fVar20 * fVar3 + fVar19 * fVar1;
    local_40 = fVar18 * fVar6 + fVar17 * fVar5 + fVar16 * fVar3 + fVar15 * fVar1;
    local_30 = fVar13 * fVar6 + fVar14 * fVar5 + fVar12 * fVar3 + fVar11 * fVar1;
    fVar8 = *(float *)(param_1 + 0x75fc);
    fVar7 = *(float *)(param_1 + 0x7600);
    fVar2 = *(float *)(param_1 + 0x75b8);
    fVar4 = *(float *)(param_1 + 0x75a8);
    local_20 = fVar9 * fVar6 + fVar10 * fVar5 + fVar8 * fVar3 + fVar7 * fVar1;
    fVar5 = *(float *)(param_1 + 0x7588);
    fVar6 = *(float *)(param_1 + 0x7598);
    fStack_4c = fVar5 * fVar21 + fVar6 * fVar22 + fVar4 * fVar20 + fVar2 * fVar19;
    fStack_3c = fVar5 * fVar17 + fVar6 * fVar18 + fVar4 * fVar16 + fVar2 * fVar15;
    fStack_2c = fVar6 * fVar13 + fVar5 * fVar14 + fVar4 * fVar12 + fVar2 * fVar11;
    fVar1 = *(float *)(param_1 + 0x75bc);
    fVar3 = *(float *)(param_1 + 0x75ac);
    fStack_1c = fVar6 * fVar9 + fVar5 * fVar10 + fVar4 * fVar8 + fVar2 * fVar7;
    fVar5 = *(float *)(param_1 + 0x758c);
    fVar6 = *(float *)(param_1 + 0x759c);
    local_48 = fVar22 * fVar6 + fVar21 * fVar5 + fVar20 * fVar3 + fVar19 * fVar1;
    local_38 = fVar18 * fVar6 + fVar17 * fVar5 + fVar16 * fVar3 + fVar15 * fVar1;
    local_28 = fVar13 * fVar6 + fVar14 * fVar5 + fVar12 * fVar3 + fVar11 * fVar1;
    fVar2 = *(float *)(param_1 + 0x75c0);
    fVar4 = *(float *)(param_1 + 0x75b0);
    local_18 = fVar9 * fVar6 + fVar10 * fVar5 + fVar8 * fVar3 + fVar7 * fVar1;
    fVar3 = *(float *)(param_1 + 0x75a0);
    fVar1 = *(float *)(param_1 + 0x7590);
    fStack_44 = fVar22 * fVar3 + fVar21 * fVar1 + fVar20 * fVar4 + fVar19 * fVar2;
    fStack_34 = fVar18 * fVar3 + fVar17 * fVar1 + fVar16 * fVar4 + fVar15 * fVar2;
    fStack_24 = fVar13 * fVar3 + fVar14 * fVar1 + fVar12 * fVar4 + fVar11 * fVar2;
    fStack_14 = fVar9 * fVar3 + fVar10 * fVar1 + fVar8 * fVar4 + fVar7 * fVar2;
    FUN_100392f0(&local_50,param_1 + 0x6b80,0);
    *(undefined1 *)(param_1 + 0xf671) = 1;
    *(undefined1 *)(param_1 + 0xf673) = 0;
  }
  return;
}

