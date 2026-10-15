/*
 * FUN_1003407f at 1003407f
 * undefined __cdecl FUN_1003407f(int param_1, int param_2, uint param_3, int param_4, int param_5, char param_6, uint * param_7, uint param_8, undefined4 param_9, undefined4 param_10, undefined1 * param_11)
 * Address ranges: 1003407f-10034287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_1003407f(int param_1,int param_2,uint param_3,int param_4,int param_5,char param_6,uint *param_7
            ,uint param_8,undefined4 param_9,undefined4 param_10,undefined1 *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  longlong lVar17;
  undefined1 local_c0 [148];
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined8 local_18;
  
  *param_11 = (char)((uint)param_9 >> 0x18);
  param_11[1] = (char)((uint)param_10 >> 0x18);
  local_2c = (uint)(byte)(&DAT_10062d40)[param_5];
  FUN_100338fc(param_8,(int)local_c0);
  local_18 = 0;
  local_18._0_4_ = 0;
  local_24 = 0;
  local_18._4_4_ = 0;
  uVar7 = (uint)local_18;
  uVar9 = local_18._4_4_;
  if (param_4 != 0) {
    local_20 = 0;
    local_1c = 0;
    do {
      local_28 = 0;
      if (param_3 != 0) {
        puVar6 = &DAT_100647b8;
        if (param_8 != 6) {
          puVar6 = (undefined4 *)&DAT_10064798;
        }
        local_18 = CONCAT44(puVar6,(uint)local_18);
        do {
          uVar7 = *(uint *)(param_1 + local_28 * 4);
          uVar8 = uVar7 & *(uint *)(&DAT_10062d44 + param_5 * 4);
          if ((param_7 == (uint *)0x0) || ((uVar7 & param_7[1]) != *param_7)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (((param_6 != '\0') && (uVar8 == 0)) || (bVar1)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (((param_6 != '\0') &&
              (uVar9 = local_20, uVar8 != *(uint *)(&DAT_10062d44 + param_5 * 4))) ||
             (bVar2 = false, bVar1)) {
            bVar2 = true;
          }
          if ((param_8 != 6) || ((!bVar3 && (bVar2)))) {
            fVar12 = 3.4028235e+38;
            uVar8 = uVar8 >> ((byte)local_2c & 0x1f);
            uVar13 = 0;
            uVar14 = 0;
            uVar15 = 0;
            fVar16 = (float)(int)uVar8;
            if (param_8 != 0) {
              do {
                auVar10._4_4_ = uVar14;
                auVar10._0_4_ = uVar13;
                auVar10._8_4_ = uVar15;
                auVar10._12_4_ = fVar16;
                FUN_100338ba((float *)0x0);
                auVar11._4_12_ = auVar10._4_12_;
                auVar11._0_4_ = -(uint)(auVar10._0_4_ < fVar12);
                uVar8 = movmskps(uVar8,auVar11);
                uVar8 = uVar8 & 1;
                fVar5 = auVar10._0_4_;
                if (uVar8 == 0) {
                  fVar5 = fVar12;
                }
                fVar12 = fVar5;
              } while (extraout_ECX + 1U < param_8);
            }
          }
          iVar4 = local_24;
          lVar17 = __allshl((byte)local_24,0);
          uVar9 = uVar9 | (uint)((ulonglong)lVar17 >> 0x20);
          uVar7 = local_1c | (uint)lVar17;
          local_24 = iVar4 + 3;
          local_28 = local_28 + 1;
          local_20 = uVar9;
          local_1c = uVar7;
        } while (local_28 < param_3);
      }
      param_1 = param_1 + param_2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *(short *)(param_11 + 6) = (short)uVar9;
  *(uint *)(param_11 + 2) = uVar7;
  return;
}

