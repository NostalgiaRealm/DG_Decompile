/*
 * FUN_100bb5d0 at 100bb5d0
 * undefined FUN_100bb5d0(void)
 * Address ranges: 100bb5d0-100bba7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bb5d0(int param_1,int param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint local_1b8;
  uint *local_1b4;
  uint local_1b0;
  code *local_1ac;
  ulonglong *local_1a8;
  undefined4 *local_1a4;
  ulonglong local_1a0;
  uint local_198;
  int iStack_194;
  int local_190;
  undefined2 local_18c [10];
  uint local_178;
  int iStack_174;
  ulonglong local_170;
  undefined1 auStack_168 [65];
  undefined1 auStack_127 [229];
  byte local_42;
  
  if ((param_2 != 0) && (param_3 != (undefined4 *)0x0)) {
    local_1a4 = param_3;
    if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar6 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar6 = true;
      iVar17 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar17 == 0) {
        FUN_10006560(0);
      }
    }
    local_1b0 = 0;
    cVar9 = FUN_1001d7c0(param_2,auStack_168,&local_1b0);
    uVar7 = local_1b0;
    if ((*(uint *)(*(int *)(param_1 + 0x14) + 0xcc) & 0xff) < (uint)local_42) {
      cVar9 = '\0';
    }
    if (cVar9 != '\0') {
      uVar20 = 1;
      uVar21 = (ulonglong)local_1b0;
      local_1b8 = 1;
      uVar13 = 0;
      if (*(uint *)(param_1 + 0x58) != 0) {
        do {
          uVar19 = *(uint *)(*(int *)(param_1 + 0x54) + uVar13 * 0x40 + 0x10);
          if (uVar19 == uVar20) {
            uVar20 = uVar20 + 1;
            local_1b8 = uVar20;
          }
          else if (uVar20 < uVar19) break;
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(param_1 + 0x58));
      }
      uVar22 = 0;
      uVar15 = 0;
      if (local_1b0 != 0) {
        do {
          iVar17 = (int)uVar15;
          uVar5 = uVar15 & 1;
          uVar13 = iVar17 + 1;
          uVar15 = (ulonglong)uVar13;
          uVar22 = ((ulonglong)*(uint *)(param_2 + iVar17 * 4) << (uVar5 << 5)) + uVar22;
        } while (uVar13 < local_1b0);
      }
      uVar13 = *(uint *)(param_1 + 0x44);
      local_1ac = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (uVar13 != 0) {
        uVar19 = 0;
        uVar14 = uVar13;
        do {
          uVar16 = uVar14 + uVar19 >> 1;
          uVar15 = *(ulonglong *)(*(int *)(param_1 + 0x40) + uVar16 * 0x18);
          uVar8 = uVar16;
          if (uVar15 <= uVar22) {
            if (uVar22 <= uVar15) break;
            uVar19 = uVar16 + 1;
            uVar16 = uVar19;
            uVar8 = uVar14;
          }
          uVar14 = uVar8;
        } while (uVar14 != uVar19);
        if (((uVar16 != uVar13) &&
            (puVar1 = (ulonglong *)(*(int *)(param_1 + 0x40) + uVar16 * 0x18), *puVar1 == uVar22))
           && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
          uVar13 = (*(int **)puVar1)[1];
          if (uVar13 != 0) {
            iVar17 = **(int **)puVar1;
            uVar19 = 0;
            local_1a8 = puVar1;
            local_1a0 = uVar22;
LAB_100bb7dc:
            if (*(uint *)(iVar17 + 0x20 + uVar19 * 0x30) != uVar7) goto LAB_100bb80c;
            puVar2 = (uint *)(iVar17 + uVar19 * 0x30);
            iVar10 = FUN_100ff610(param_2,puVar2[9],(uVar21 & 0x3fffffff) << 2);
            uVar22 = local_1a0;
            if (iVar10 != 0) goto LAB_100bb80c;
            local_1b4 = puVar2;
            uVar11 = (*local_1ac)();
            (*extraout_w11_00)(uVar11,uVar20);
            *local_1b4 = uVar20;
            iVar17 = FUN_100bd470(param_1 + 0x50,&local_1b8,local_1b4);
            puVar18 = (undefined4 *)(iVar17 + 8);
            piVar4 = *(int **)local_1a8;
            puVar2 = (uint *)(piVar4 + 1);
            uVar20 = *puVar2;
            if (uVar19 < uVar20) {
              uVar19 = uVar19 + 1;
              if (uVar19 < uVar20) {
                do {
                  uVar13 = uVar19 + 1;
                  puVar3 = (undefined8 *)(*piVar4 + uVar19 * 0x30);
                  puVar3[-5] = puVar3[1];
                  puVar3[-6] = *puVar3;
                  puVar3[-3] = puVar3[3];
                  puVar3[-4] = puVar3[2];
                  puVar3[-1] = puVar3[5];
                  puVar3[-2] = puVar3[4];
                  uVar20 = *puVar2;
                  uVar19 = uVar13;
                } while (uVar13 < uVar20);
              }
              *puVar2 = uVar20 - 1;
            }
            uVar20 = local_1b8;
            if (puVar18 != (undefined4 *)0x0) goto LAB_100bb90c;
          }
        }
      }
LAB_100bb828:
      iVar17 = uVar7 * 4;
      if (uVar7 >> 0x1e != 0) {
        iVar17 = -1;
      }
      iVar17 = FUN_100fece0(iVar17);
      iVar10 = 0;
      if ((iVar17 != 0) && (iVar10 = FUN_100febf0(0x128), iVar10 != 0)) {
        FUN_100ff660(iVar17,param_2,(uVar21 & 0x3fffffff) << 2);
        FUN_100ff660(iVar10,auStack_168,0x128);
        uVar11 = (*local_1ac)();
        iVar12 = (*extraout_w11)(uVar11,iVar17,iVar10,uVar20);
        if (iVar12 != 0) {
          local_178 = uVar7;
          local_18c[0] = 0xffff;
          local_198 = uVar20;
          iStack_194 = iVar12;
          local_190 = iVar10;
          iStack_174 = iVar17;
          local_170 = uVar22;
          FUN_1000af50(*(undefined4 *)(param_1 + 0x4c),auStack_127,local_18c,8);
          iVar12 = FUN_100bd470(param_1 + 0x50,&local_1b8,&local_198);
          puVar18 = (undefined4 *)(iVar12 + 8);
          if (puVar18 != (undefined4 *)0x0) {
LAB_100bb90c:
            *local_1a4 = *puVar18;
            if (bVar6) {
              (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
            }
            else {
              *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
            }
            return 0;
          }
        }
      }
      FUN_100fed00(iVar17);
      FUN_100fec90(iVar10,0x128);
    }
    if (bVar6) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return 0x8876086c;
LAB_100bb80c:
  uVar19 = uVar19 + 1;
  uVar22 = local_1a0;
  if (uVar13 <= uVar19) goto LAB_100bb828;
  goto LAB_100bb7dc;
}

