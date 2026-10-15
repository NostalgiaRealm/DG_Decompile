/*
 * FUN_10033f36 at 10033f36
 * undefined __cdecl FUN_10033f36(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint * param_7, uint param_8)
 * Address ranges: 10033f36-1003407e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_10033f36(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint *param_7,uint param_8)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 local_b0 [132];
  undefined4 *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  puVar17 = local_b0;
  uVar6 = param_4;
  FUN_1003399e(param_6);
  FUN_1003399e(param_5);
  FUN_100338fc(uVar6,(int)puVar17);
  local_18 = 1;
  local_1c = 0;
  local_14 = 0;
  local_24 = 0;
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      uVar6 = 0;
      if (param_2 != 0) {
        local_2c = (undefined4 *)&DAT_100647e8;
        iVar4 = local_24 << 6;
        local_20 = iVar4;
        if (param_8 == 0) {
          local_2c = &DAT_100647d8;
        }
        do {
          iVar3 = 0;
          pfVar1 = (float *)(uVar6 * 0x10 + iVar4 + param_1);
          if ((local_18 & param_8) == 0) {
            fVar11 = 3.4028235e+38;
            iVar4 = local_20;
            fVar7 = *pfVar1;
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            if (param_4 != 0) {
              do {
                fVar12 = fVar7;
                fVar13 = fVar8;
                fVar14 = fVar9;
                fVar15 = fVar10;
                uVar16 = FUN_100338ba((float *)0x0);
                iVar5 = (int)((ulonglong)uVar16 >> 0x20);
                auVar2._4_4_ = fVar8;
                auVar2._0_4_ = -(uint)(fVar7 < fVar11);
                auVar2._8_4_ = fVar9;
                auVar2._12_4_ = fVar10;
                local_28 = movmskps((int)uVar16,auVar2);
                local_28 = local_28 & 1;
                iVar3 = iVar5;
                if (local_28 == 0) {
                  iVar3 = extraout_ECX;
                  fVar7 = fVar11;
                }
                fVar11 = fVar7;
                iVar4 = local_20;
                fVar7 = fVar12;
                fVar8 = fVar13;
                fVar9 = fVar14;
                fVar10 = fVar15;
              } while (iVar5 + 1U < param_4);
            }
          }
          else {
            iVar3 = 3;
          }
          local_18 = local_18 << 1;
          iVar5 = local_14 + 2;
          local_1c = local_1c | local_2c[iVar3] << ((byte)local_14 & 0x1f);
          uVar6 = uVar6 + 1;
          local_14 = iVar5;
        } while (uVar6 < param_2);
      }
      local_24 = local_24 + 1;
      uVar6 = local_1c;
    } while (local_24 < param_3);
  }
  *param_7 = param_6 << 0x10 | param_5;
  param_7[1] = uVar6;
  return;
}

