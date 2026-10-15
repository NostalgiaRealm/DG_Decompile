/*
 * FUN_18009c65c at 18009c65c
 * undefined __fastcall FUN_18009c65c(longlong * param_1, longlong param_2, uint param_3, uint param_4, int param_5, int param_6)
 * Address ranges: 18009c65c-18009c9ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009c65c(longlong *param_1,longlong param_2,uint param_3,uint param_4,int param_5,
                  int param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
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
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  char local_res8;
  uint in_stack_fffffffffffffec0;
  undefined3 uVar22;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  float local_e8 [3];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  
  if ((1 < *(uint *)(param_1 + 7)) && (param_3 != 0)) {
    uVar6 = (**(code **)(*param_1 + 0x40))(param_1,0);
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1,0);
    uVar14 = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        uVar13 = 1;
        if (((param_3 >> (uVar14 & 0x1f) & 1) != 0) && (1 < *(uint *)(param_1 + 7))) {
          do {
            bVar5 = (byte)uVar13;
            bVar4 = bVar5 - 1 & 0x1f;
            uVar8 = 1;
            uVar9 = uVar8;
            if (uVar6 >> bVar4 != 0) {
              uVar9 = uVar6 >> bVar4;
            }
            bVar4 = bVar5 - 1 & 0x1f;
            uVar10 = uVar8;
            if (uVar7 >> bVar4 != 0) {
              uVar10 = uVar7 >> bVar4;
            }
            uVar11 = uVar8;
            if (uVar6 >> (bVar5 & 0x1f) != 0) {
              uVar11 = uVar6 >> (bVar5 & 0x1f);
            }
            if (uVar7 >> (bVar5 & 0x1f) != 0) {
              uVar8 = uVar7 >> (bVar5 & 0x1f);
            }
            if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
              fVar21 = 0.5;
            }
            else {
              fVar21 = 1.0;
            }
            iVar16 = param_6;
            if (param_6 == 0) {
              iVar16 = *(int *)((longlong)param_1 + 0x3c);
            }
            iVar16 = iVar16 * uVar14 + uVar13;
            FUN_1800e1d04(*(longlong *)(param_1[0xb] + 0x1938),&local_100,*(uint *)(param_2 + 0x30),
                          iVar16);
            uVar15 = param_4;
            if (param_4 == 0xffffffff) {
              uVar15 = *(uint *)(param_2 + 0x2c);
            }
            FUN_1800e1d04(*(longlong *)(param_1[0xb] + 0x1930),&local_f8,uVar15,param_5);
            cVar1 = *(char *)((longlong)param_1 + 0x4c);
            local_f0 = param_1[0x26];
            uVar15 = *(uint *)((longlong)param_1 + 0x2c);
            uVar2 = *(undefined4 *)(param_2 + 0x48);
            uVar3 = *(undefined8 *)(param_2 + 0x14);
            uVar12 = (-(uint)(cVar1 != '\0') & 0x100) << 8 | 0x80000016;
            fVar18 = (float)uVar10;
            local_res8 = '\0';
            fVar17 = (float)uVar9;
            fVar20 = fVar21 / fVar18;
            fVar19 = (fVar17 + fVar21) / fVar17;
            fVar18 = (fVar18 + fVar21) / fVar18;
            if ((((uVar12 == 0x24) || (uVar12 == 0x25)) || (uVar12 == 0x26)) || (uVar12 == 0x27)) {
              local_res8 = '\x01';
            }
            uVar22 = (undefined3)(in_stack_fffffffffffffec0 >> 8);
            FUN_1800aa2e0(local_f0,uVar15,0,0,0,0,cVar1,cVar1,0);
            in_stack_fffffffffffffec0 = CONCAT31(uVar22,1);
            local_a8 = 0;
            local_88 = 0;
            local_70 = 0;
            local_5c = 0;
            local_bc = uVar13 - 1;
            local_98 = 0;
            local_b4 = iVar16 + -1;
            local_e8[2] = (float)uVar11 + 0.495;
            local_dc = (float)uVar8 + 0.495;
            local_a0 = local_100;
            local_80 = local_f8;
            local_78 = 0;
            local_68 = 0;
            local_e8[0] = 0.495;
            local_e8[1] = 0.495;
            local_c4 = 0xffffffff;
            local_d8 = fVar21 / fVar17;
            local_d4 = fVar20;
            local_d0 = fVar19;
            local_cc = fVar18;
            local_c8 = uVar13;
            local_c0 = iVar16;
            local_b8 = uVar14;
            local_b0 = uVar3;
            local_90 = uVar3;
            local_60 = uVar2;
            FUN_180094c50(local_f0,local_e8,uVar15,uVar15,uVar12,local_res8,cVar1,
                          in_stack_fffffffffffffec0);
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(param_1 + 7));
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)((longlong)param_1 + 0x34));
    }
  }
  return;
}

