/*
 * FUN_10029850 at 10029850
 * undefined FUN_10029850(void)
 * Address ranges: 10029850-10029dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029850(int param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5,
                 undefined4 param_6,uint param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  unkbyte9 Var8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *local_a8;
  
  FUN_10024940(param_1);
  if ((param_2 == 6) && (*(char *)(*(int *)(param_1 + 0x1d58) + 0x13) == '\0')) {
    if (2 < param_7) {
      param_7 = param_7 - 2;
      puVar1 = (undefined4 *)(param_1 + 0x70);
      iVar18 = 0;
      if (param_7 != 0) {
        piVar2 = (int *)(param_1 + 0x6c);
        while( true ) {
          iVar11 = *piVar2 + *(int *)(param_1 + 0x68);
          if (0x1000U - iVar11 < 0x10) {
            FUN_10026090(param_1,0,1,0);
            iVar11 = 0;
          }
          uVar17 = (0x1000U - iVar11) / 3;
          if (param_7 < (0x1000U - iVar11) / 3) {
            uVar17 = param_7;
          }
          FUN_10024a08(param_1,4,param_3,*(undefined4 *)(param_1 + 0x201c),
                       *(undefined4 *)(param_1 + 0x1d6c),*(undefined4 *)(param_1 + 0x534),
                       *(undefined4 *)(param_1 + 0x4f0),0,uVar17 * 3);
          *(byte *)(param_1 + 0x1d3f) =
               (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0x21c8) ^ 0xffffffff)) != 0 |
               *(byte *)(param_1 + 0x1d3f);
          *(uint *)(param_1 + 0x21c8) = *(uint *)(param_3 + 0x10);
          *(undefined1 *)(param_1 + 0x21cc) = 1;
          uVar12 = 0;
          if (uVar17 != 0) {
            piVar3 = (int *)(param_1 + 100);
            do {
              iVar11 = uVar12 + 1;
              iVar9 = uVar12 + 2;
              uVar6 = *param_5;
              uVar12 = uVar12 + 1;
              uVar7 = param_5[iVar18 + iVar9];
              *(uint *)*piVar3 = (uint)param_5[iVar18 + iVar11];
              *(uint *)(*piVar3 + 4) = (uint)uVar7;
              *(uint *)(*piVar3 + 8) = (uint)uVar6;
              *piVar3 = *piVar3 + 0xc;
            } while (uVar12 < uVar17);
          }
          param_7 = param_7 - uVar17;
          *piVar2 = uVar17 * 3 + *piVar2;
          if (param_7 == 0) break;
          iVar18 = uVar17 + iVar18;
          FUN_10026600(param_1,param_3);
          *puVar1 = param_6;
        }
        *puVar1 = param_6;
      }
      FUN_10026090(param_1,0,0,0);
      *puVar1 = 0;
    }
  }
  else {
    iVar18 = 0;
    iVar11 = param_2 * 3;
    bVar4 = *(byte *)(iVar11 + 0x1009dea8);
    bVar5 = *(byte *)(iVar11 + 0x1009deaa);
    if (bVar4 <= param_7) {
      piVar2 = (int *)(param_1 + 100);
      uVar17 = (uint)*(byte *)(iVar11 + 0x1009dea9);
      piVar3 = (int *)(param_1 + 0x6c);
      do {
        iVar11 = *piVar3 + *(int *)(param_1 + 0x68);
        if (0x1000U - iVar11 < 0x10) {
          FUN_10026090(param_1,0,1,0);
          iVar11 = 0;
        }
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          uVar10 = SoftwareBreakpoint(0xf004,0x10029bec);
          (*(code *)uVar10)();
        }
        uVar12 = 0;
        if (uVar17 != 0) {
          uVar12 = (0x1000U - iVar11) / uVar17;
        }
        uVar12 = (0x1000 - ((0x1000U - iVar11) - uVar12 * uVar17)) - iVar11;
        if (param_7 < uVar12) {
          uVar12 = param_7;
        }
        FUN_10024a08(param_1,param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x1d6c),0,
                     *(undefined4 *)(param_3 + 0xc),0,uVar12);
        puVar15 = param_5 + iVar18;
        uVar16 = 0;
        puVar14 = (ulonglong *)*piVar2;
        puVar13 = puVar14;
        if (uVar12 >> 3 != 0) {
          do {
            uVar10 = *(undefined8 *)(puVar15 + 4);
            Var8 = *(unkbyte9 *)puVar15;
            uVar16 = uVar16 + 1;
            puVar15 = puVar15 + 8;
            puVar13[1] = (ulonglong)
                         CONCAT15((char)((unkuint9)Var8 >> 0x38),
                                  CONCAT14((char)((unkuint9)Var8 >> 0x30),
                                           (uint)(ushort)((unkuint9)Var8 >> 0x20)));
            *puVar13 = (ulonglong)
                       CONCAT15((char)((unkuint9)Var8 >> 0x18),
                                CONCAT14((char)((unkuint9)Var8 >> 0x10),(uint)(ushort)Var8));
            puVar14 = puVar13 + 4;
            puVar13[3] = (ulonglong)
                         CONCAT15((char)((ulonglong)uVar10 >> 0x38),
                                  CONCAT14((char)((ulonglong)uVar10 >> 0x30),
                                           (uint)(ushort)((ulonglong)uVar10 >> 0x20)));
            puVar13[2] = (ulonglong)
                         CONCAT15((char)((ulonglong)uVar10 >> 0x18),
                                  CONCAT14((char)((ulonglong)uVar10 >> 0x10),(uint)(ushort)uVar10));
            puVar13 = puVar14;
          } while (uVar16 < uVar12 >> 3);
        }
        uVar16 = 0;
        if ((uVar12 & 7) != 0) {
          do {
            uVar6 = *puVar15;
            uVar16 = uVar16 + 1;
            puVar15 = puVar15 + 1;
            *(uint *)puVar14 = (uint)uVar6;
            puVar14 = (ulonglong *)((int)puVar14 + 4);
          } while (uVar16 < (uVar12 & 7));
        }
        if (param_2 == 6) {
          *(uint *)*piVar2 = (uint)*param_5;
        }
        param_7 = (bVar5 - uVar12) + param_7;
        iVar18 = (uVar12 - bVar5) + iVar18;
        *piVar2 = *piVar2 + uVar12 * 4;
        *piVar3 = uVar12 + *piVar3;
        *(byte *)(param_1 + 0x1d3f) =
             (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0x21c8) ^ 0xffffffff)) != 0 |
             *(byte *)(param_1 + 0x1d3f);
        *(uint *)(param_1 + 0x21c8) = *(uint *)(param_3 + 0x10);
        *(undefined1 *)(param_1 + 0x21cc) = 1;
        FUN_10026600(param_1,param_3);
        *(undefined4 *)(param_1 + 0x70) = param_6;
      } while (bVar4 <= param_7);
    }
    local_a8 = (undefined4 *)(param_1 + 0x70);
    FUN_10026090(param_1,0,0,0);
    *local_a8 = 0;
  }
  return;
}

