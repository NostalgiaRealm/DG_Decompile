/*
 * FUN_18005a780 at 18005a780
 * undefined __fastcall FUN_18005a780(longlong param_1)
 * Address ranges: 18005a780-18005aca4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a780(longlong param_1)

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
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  
  if (*(char *)(param_1 + 0xf693) != '\0') {
    fVar1 = *(float *)(param_1 + 0x75c4);
    fVar2 = *(float *)(param_1 + 0x75d4);
    fVar3 = *(float *)(param_1 + 0x75a4);
    fVar4 = *(float *)(param_1 + 0x75b4);
    fVar5 = *(float *)(param_1 + 0x7614);
    fVar6 = *(float *)(param_1 + 0x761c);
    fVar7 = *(float *)(param_1 + 0x7604);
    fVar8 = *(float *)(param_1 + 0x7620);
    local_e8 = *(float *)(param_1 + 0x75e8) * fVar4 + *(float *)(param_1 + 0x75e4) * fVar3 +
               *(float *)(param_1 + 0x75ec) * fVar1 + *(float *)(param_1 + 0x75f0) * fVar2;
    fVar9 = *(float *)(param_1 + 0x760c);
    fVar10 = *(float *)(param_1 + 0x75f4);
    fVar11 = *(float *)(param_1 + 0x7610);
    fVar12 = *(float *)(param_1 + 0x7618);
    local_d8 = *(float *)(param_1 + 0x75f8) * fVar4 + fVar10 * fVar3 +
               *(float *)(param_1 + 0x75fc) * fVar1 + *(float *)(param_1 + 0x7600) * fVar2;
    fVar13 = *(float *)(param_1 + 0x75c8);
    fVar14 = *(float *)(param_1 + 0x75a8);
    local_c8 = *(float *)(param_1 + 0x7608) * fVar4 + fVar7 * fVar3 + fVar9 * fVar1 + fVar11 * fVar2
    ;
    fVar15 = *(float *)(param_1 + 0x75b8);
    fVar16 = *(float *)(param_1 + 0x75d8);
    local_b8 = fVar12 * fVar4 + fVar5 * fVar3 + fVar6 * fVar1 + fVar8 * fVar2;
    local_e4 = *(float *)(param_1 + 0x75e8) * fVar15 + *(float *)(param_1 + 0x75e4) * fVar14 +
               *(float *)(param_1 + 0x75ec) * fVar13 + *(float *)(param_1 + 0x75f0) * fVar16;
    local_d4 = *(float *)(param_1 + 0x75f8) * fVar15 + fVar10 * fVar14 +
               *(float *)(param_1 + 0x75fc) * fVar13 + *(float *)(param_1 + 0x7600) * fVar16;
    fVar1 = *(float *)(param_1 + 0x75bc);
    fVar2 = *(float *)(param_1 + 0x75cc);
    local_c4 = *(float *)(param_1 + 0x7608) * fVar15 + fVar7 * fVar14 + fVar9 * fVar13 +
               fVar11 * fVar16;
    fVar3 = *(float *)(param_1 + 0x75ac);
    fVar4 = *(float *)(param_1 + 0x75dc);
    local_b4 = fVar12 * fVar15 + fVar5 * fVar14 + fVar6 * fVar13 + fVar8 * fVar16;
    local_e0 = *(float *)(param_1 + 0x75e8) * fVar1 + *(float *)(param_1 + 0x75e4) * fVar3 +
               *(float *)(param_1 + 0x75ec) * fVar2 + *(float *)(param_1 + 0x75f0) * fVar4;
    local_d0 = *(float *)(param_1 + 0x75f8) * fVar1 + fVar10 * fVar3 +
               *(float *)(param_1 + 0x75fc) * fVar2 + *(float *)(param_1 + 0x7600) * fVar4;
    local_c0 = *(float *)(param_1 + 0x7608) * fVar1 + fVar7 * fVar3 + fVar9 * fVar2 + fVar11 * fVar4
    ;
    fVar13 = *(float *)(param_1 + 0x75d0);
    fVar14 = *(float *)(param_1 + 0x75e0);
    fVar15 = *(float *)(param_1 + 0x75b0);
    local_b0 = fVar12 * fVar1 + fVar5 * fVar3 + fVar6 * fVar2 + fVar8 * fVar4;
    fVar1 = *(float *)(param_1 + 0x75c0);
    local_dc = *(float *)(param_1 + 0x75e8) * fVar1 + *(float *)(param_1 + 0x75e4) * fVar15 +
               *(float *)(param_1 + 0x75ec) * fVar13 + *(float *)(param_1 + 0x75f0) * fVar14;
    local_ac = fVar12 * fVar1 + fVar5 * fVar15 + fVar6 * fVar13 + fVar8 * fVar14;
    local_cc = *(float *)(param_1 + 0x75f8) * fVar1 + fVar10 * fVar15 +
               *(float *)(param_1 + 0x75fc) * fVar13 + *(float *)(param_1 + 0x7600) * fVar14;
    local_bc = *(float *)(param_1 + 0x7608) * fVar1 + fVar7 * fVar15 + fVar9 * fVar13 +
               fVar11 * fVar14;
    FUN_18002d088(&local_e8,(undefined8 *)(param_1 + 0x6ba0),'\0');
    *(undefined1 *)(param_1 + 0xf693) = 0;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  return;
}

