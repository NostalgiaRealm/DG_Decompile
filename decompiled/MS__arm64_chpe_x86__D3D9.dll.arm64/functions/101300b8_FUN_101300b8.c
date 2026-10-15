/*
 * FUN_101300b8 at 101300b8
 * undefined FUN_101300b8(void)
 * Address ranges: 101300b8-1013044f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_101300b8(int *param_1,undefined8 param_2,char *param_3,undefined4 param_4,undefined4 param_5
                )

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  char local_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 local_e0;
  undefined2 uStack_df;
  undefined1 uStack_dd;
  
  iVar11 = 0;
  iVar8 = (*(code *)PTR_FUN_1016c098)(s_user32_dll_101612c8);
  if (iVar8 != 0) {
    uVar15 = 0;
    iVar3 = *(int *)(*(int *)(iVar8 + 0x3c) + iVar8 + 0x78) + iVar8;
    iVar5 = *(int *)(iVar3 + 0x20);
    uVar16 = *(uint *)(iVar3 + 0x18);
    if (uVar16 != 0) {
      while (iVar9 = FUN_10132680(*(int *)(iVar5 + iVar8 + uVar15 * 4) + iVar8,param_3), iVar9 != 0)
      {
        uVar15 = uVar15 + 1;
        if (uVar16 <= uVar15) {
          return 0;
        }
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x1c) +
                       (uint)*(ushort *)(*(int *)(iVar3 + 0x24) + uVar15 * 2 + iVar8) * 4 + iVar8) +
              iVar8;
      if (iVar3 == 0) {
        return 0;
      }
      local_160 = *param_3;
      uStack_157 = 0;
      uStack_150 = 0;
      uStack_15f = 0;
      uStack_158 = 0;
      uStack_147 = 0;
      local_140 = 0;
      uStack_14f = 0;
      uStack_148 = 0;
      uStack_137 = 0;
      uStack_130 = 0;
      uStack_13f = 0;
      uStack_138 = 0;
      uStack_127 = 0;
      local_120 = 0;
      uStack_12f = 0;
      uStack_128 = 0;
      uStack_117 = 0;
      uStack_110 = 0;
      uStack_11f = 0;
      uStack_118 = 0;
      uStack_107 = 0;
      local_100 = 0;
      uStack_10f = 0;
      uStack_108 = 0;
      uStack_f7 = 0;
      uStack_f0 = 0;
      uStack_ff = 0;
      uStack_f8 = 0;
      uStack_e7 = 0;
      local_e0 = 0;
      uStack_ef = 0;
      uStack_e8 = 0;
      uStack_df = 0;
      uStack_dd = 0;
      pcVar14 = &local_160;
      pcVar13 = param_3;
      cVar7 = local_160;
      while (cVar7 != '\0') {
        pcVar13 = pcVar13 + 1;
        cVar7 = *pcVar13;
        pcVar14 = pcVar14 + 1;
        *pcVar14 = cVar7;
      }
      pcVar14 = s_user32_dll_101612c8;
      pcVar13 = &local_160;
      cVar7 = local_160;
      while (cVar7 != '\0') {
        pcVar13 = pcVar13 + 1;
        cVar7 = *pcVar13;
      }
      *pcVar13 = 'u';
      do {
        pcVar14 = pcVar14 + 1;
        cVar7 = *pcVar14;
        pcVar13 = pcVar13 + 1;
        *pcVar13 = cVar7;
      } while (cVar7 != '\0');
      puVar1 = (uint *)(param_1 + 1);
      uVar15 = *puVar1;
      if (uVar15 != 0) {
        iVar5 = *param_1;
        uVar16 = 0;
        do {
          iVar9 = iVar5 + uVar16 * 0x84;
          iVar10 = FUN_10132680(&local_160,iVar9);
          if (iVar10 == 0) {
            iVar5 = *(int *)(iVar9 + 0x80) + 1;
            if (iVar5 != 0) {
              iVar11 = param_1[6] + iVar5 * 0x120;
              uVar15 = 0;
              goto LAB_10130418;
            }
            break;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar15);
      }
      uVar16 = 0;
      do {
        if (*(char *)((int)param_1 + uVar16 + 0x1c) == '\0') break;
        uVar16 = uVar16 + 1;
      } while (uVar16 < 0x20);
      if (uVar16 < 0x20) {
        puVar2 = (uint *)(param_1 + 2);
        local_e0 = (undefined1)uVar16;
        uStack_df = (undefined2)(uVar16 >> 8);
        uStack_dd = (undefined1)(uVar16 >> 0x18);
        uVar6 = *puVar2;
        if (uVar15 == uVar6) {
          uVar15 = uVar6 << 1;
          if (uVar6 == 0) {
            uVar15 = 0x10;
          }
          uVar12 = (undefined4)((ulonglong)uVar15 * 0x84);
          if ((ulonglong)uVar15 * 0x84 >> 0x20 != 0) {
            uVar12 = 0xffffffff;
          }
          iVar11 = FUN_101322b0(uVar12);
          if (iVar11 == 0) {
            return 0;
          }
          FUN_101325a0(iVar11,*param_1,((ulonglong)(*puVar2 * 0x21) & 0x3fffffff) << 2);
          FUN_101322d0(*param_1);
          *param_1 = iVar11;
          *puVar2 = uVar15;
        }
        iVar11 = uVar16 + 1;
        puVar4 = (undefined8 *)(*param_1 + *puVar1 * 0x84);
        puVar4[1] = CONCAT71(uStack_157,uStack_158);
        *puVar4 = CONCAT71(uStack_15f,local_160);
        puVar4[3] = CONCAT71(uStack_147,uStack_148);
        puVar4[2] = CONCAT71(uStack_14f,uStack_150);
        puVar4[5] = CONCAT71(uStack_137,uStack_138);
        puVar4[4] = CONCAT71(uStack_13f,local_140);
        puVar4[7] = CONCAT71(uStack_127,uStack_128);
        puVar4[6] = CONCAT71(uStack_12f,uStack_130);
        puVar4[9] = CONCAT71(uStack_117,uStack_118);
        puVar4[8] = CONCAT71(uStack_11f,local_120);
        puVar4[0xb] = CONCAT71(uStack_107,uStack_108);
        puVar4[10] = CONCAT71(uStack_10f,uStack_110);
        puVar4[0xd] = CONCAT71(uStack_f7,uStack_f8);
        puVar4[0xc] = CONCAT71(uStack_ff,local_100);
        puVar4[0xf] = CONCAT71(uStack_e7,uStack_e8);
        puVar4[0xe] = CONCAT71(uStack_ef,uStack_f0);
        *(uint *)(puVar4 + 0x10) = CONCAT13(uStack_dd,CONCAT21(uStack_df,local_e0));
        *puVar1 = *puVar1 + 1;
        iVar5 = param_1[6] + uVar16 * 0x120;
        uVar12 = FUN_10130670(&local_160,param_5,iVar11,param_4);
        FUN_101325a0(iVar5,uVar12,0x120);
        FUN_10157e90(param_1,iVar3,iVar5,0);
        iVar8 = (*(code *)PTR_FUN_1016c0a0)(iVar8,param_3);
        if (iVar3 != iVar8) {
          FUN_10157e90(param_1,iVar8,iVar5,1);
        }
        *(undefined1 *)((int)param_1 + uVar16 + 0x1c) = 1;
      }
    }
  }
  return iVar11;
  while (uVar15 = uVar15 + 1, uVar15 < 4) {
LAB_10130418:
    if (*(int *)(iVar11 + -0x110 + uVar15 * 4) == 0) {
      *(undefined4 *)(iVar11 + uVar15 * 4 + -0x110) = param_5;
      break;
    }
  }
  if (uVar15 == 4) {
    return 0;
  }
  return iVar5;
}

