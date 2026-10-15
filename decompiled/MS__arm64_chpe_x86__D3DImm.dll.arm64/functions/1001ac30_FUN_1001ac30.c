/*
 * FUN_1001ac30 at 1001ac30
 * undefined FUN_1001ac30(void)
 * Address ranges: 1001ac30-1001b10f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ac30(int param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined4 param_6
                 ,uint param_7)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  unkbyte9 Var8;
  int iVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  int iVar14;
  uint uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ushort *puVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar20;
  int iVar21;
  
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + 0x1e58) != 0) {
    puVar13 = (undefined4 *)(param_1 + 0x1e7c);
    uVar12 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar12,*extraout_w8,*puVar13,0);
  }
  if (*(int *)(param_1 + 0x1e68) != 0) {
    puVar13 = (undefined4 *)(param_1 + 0x1e90);
    uVar12 = (*pcVar10)();
    (*extraout_w11_00)(uVar12,*extraout_w8_00,*puVar13,0);
  }
  FUN_10017a70(param_1,0,0,0);
  uVar12 = *(undefined4 *)(param_4 + 0xc);
  if (param_2 == 6) {
    if (2 < param_7) {
      param_7 = param_7 - 2;
      uVar3 = *(undefined4 *)(param_3 + 0xc);
      iVar21 = 0;
      if (param_7 != 0) {
        piVar1 = (int *)(param_1 + 0x6c);
        do {
          iVar14 = *piVar1 + *(int *)(param_1 + 0x68);
          if (0x1000U - iVar14 < 0x10) {
            FUN_10017a70(param_1,0,1,0);
            iVar14 = 0;
          }
          uVar20 = (0x1000U - iVar14) / 3;
          if (param_7 < (0x1000U - iVar14) / 3) {
            uVar20 = param_7;
          }
          FUN_10017c98(param_1,4,param_3,uVar12,*(undefined4 *)(param_1 + 0x1d70),0,uVar3,0,
                       uVar20 * 3);
          uVar15 = 0;
          if (uVar20 != 0) {
            piVar2 = (int *)(param_1 + 100);
            do {
              iVar14 = uVar15 + 1;
              iVar9 = uVar15 + 2;
              uVar6 = *param_5;
              uVar15 = uVar15 + 1;
              uVar7 = param_5[iVar21 + iVar9];
              *(uint *)*piVar2 = (uint)param_5[iVar21 + iVar14];
              *(uint *)(*piVar2 + 4) = (uint)uVar7;
              *(uint *)(*piVar2 + 8) = (uint)uVar6;
              *piVar2 = *piVar2 + 0xc;
            } while (uVar15 < uVar20);
          }
          param_7 = param_7 - uVar20;
          iVar21 = uVar20 + iVar21;
          *piVar1 = uVar20 * 3 + *piVar1;
          *(undefined4 *)(param_1 + 0x70) = param_6;
        } while (param_7 != 0);
      }
      FUN_10017a70(param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  else {
    iVar21 = param_2 * 3;
    bVar4 = *(byte *)(iVar21 + 0x1009d530);
    bVar5 = *(byte *)(iVar21 + 0x1009d532);
    if (bVar4 <= param_7) {
      piVar1 = (int *)(param_1 + 0x6c);
      piVar2 = (int *)(param_1 + 100);
      iVar14 = 0;
      uVar20 = (uint)*(byte *)(iVar21 + 0x1009d531);
      do {
        iVar21 = *piVar1 + *(int *)(param_1 + 0x68);
        if (0x1000U - iVar21 < 0x10) {
          FUN_10017a70(param_1,0,1,0);
          iVar21 = 0;
        }
        if (uVar20 == 0) {
                    /* WARNING: Does not return */
          uVar11 = SoftwareBreakpoint(0xf004,0x1001afa0);
          (*(code *)uVar11)();
        }
        uVar15 = 0;
        if (uVar20 != 0) {
          uVar15 = (0x1000U - iVar21) / uVar20;
        }
        uVar15 = (0x1000 - ((0x1000U - iVar21) - uVar15 * uVar20)) - iVar21;
        if (param_7 < uVar15) {
          uVar15 = param_7;
        }
        FUN_10017c98(param_1,param_2,param_3,uVar12,*(undefined4 *)(param_1 + 0x1d70),0,
                     *(undefined4 *)(param_3 + 0xc),0,uVar15);
        puVar18 = param_5 + iVar14;
        uVar19 = 0;
        puVar17 = (ulonglong *)*piVar2;
        puVar16 = puVar17;
        if (uVar15 >> 3 != 0) {
          do {
            uVar11 = *(undefined8 *)(puVar18 + 4);
            Var8 = *(unkbyte9 *)puVar18;
            uVar19 = uVar19 + 1;
            puVar18 = puVar18 + 8;
            puVar16[1] = (ulonglong)
                         CONCAT15((char)((unkuint9)Var8 >> 0x38),
                                  CONCAT14((char)((unkuint9)Var8 >> 0x30),
                                           (uint)(ushort)((unkuint9)Var8 >> 0x20)));
            *puVar16 = (ulonglong)
                       CONCAT15((char)((unkuint9)Var8 >> 0x18),
                                CONCAT14((char)((unkuint9)Var8 >> 0x10),(uint)(ushort)Var8));
            puVar17 = puVar16 + 4;
            puVar16[3] = (ulonglong)
                         CONCAT15((char)((ulonglong)uVar11 >> 0x38),
                                  CONCAT14((char)((ulonglong)uVar11 >> 0x30),
                                           (uint)(ushort)((ulonglong)uVar11 >> 0x20)));
            puVar16[2] = (ulonglong)
                         CONCAT15((char)((ulonglong)uVar11 >> 0x18),
                                  CONCAT14((char)((ulonglong)uVar11 >> 0x10),(uint)(ushort)uVar11));
            puVar16 = puVar17;
          } while (uVar19 < uVar15 >> 3);
        }
        uVar19 = 0;
        if ((uVar15 & 7) != 0) {
          do {
            uVar6 = *puVar18;
            uVar19 = uVar19 + 1;
            puVar18 = puVar18 + 1;
            *(uint *)puVar17 = (uint)uVar6;
            puVar17 = (ulonglong *)((int)puVar17 + 4);
          } while (uVar19 < (uVar15 & 7));
        }
        param_7 = (bVar5 - uVar15) + param_7;
        iVar14 = (uVar15 - bVar5) + iVar14;
        *piVar2 = *piVar2 + uVar15 * 4;
        *piVar1 = uVar15 + *piVar1;
        *(undefined4 *)(param_1 + 0x70) = param_6;
      } while (bVar4 <= param_7);
    }
    FUN_10017a70(param_1,0,0,0);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}

