/*
 * FUN_180057114 at 180057114
 * bool __fastcall FUN_180057114(longlong * param_1, uint param_2, longlong * param_3)
 * Address ranges: 180057114-18005735f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180057114(longlong *param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ulonglong *puVar13;
  bool bVar14;
  float fVar15;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if ((int)param_1[9] == 0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)((double)*(uint *)(param_1 + 10) / (double)*(uint *)(param_1 + 9));
  }
  iVar6 = 3;
  if (0.9 <= fVar15) {
    iVar6 = -1;
  }
  FUN_180056db0((longlong)param_1,iVar6,param_2,param_3);
  bVar14 = false;
  if (param_3[1] == 0) {
    if ((int)param_1[0xd] != 0) {
      uVar8 = 0;
      if ((int)param_1[0xd] == 0) goto LAB_180057203;
      do {
        lVar4 = param_1[0xc];
        if ((lVar4 + 8 + uVar8 * 0x48 != 0) &&
           ((ulonglong)param_2 <= *(ulonglong *)(lVar4 + 0x20 + uVar8 * 0x48))) {
          plVar7 = (longlong *)(lVar4 + 0x10 + uVar8 * 0x48);
          iVar6 = FUN_180056b9c((longlong)param_1,(longlong)plVar7,param_2);
          if (iVar6 == -1) {
            FUN_180056db0((longlong)param_1,-1,0,(longlong *)0x0);
            iVar6 = FUN_180056b9c((longlong)param_1,(longlong)plVar7,param_2);
            if (iVar6 == -1) goto LAB_180057203;
          }
          FUN_1800570bc((longlong)param_1,param_3,plVar7,iVar6);
          break;
        }
LAB_180057203:
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_1 + 0xd));
    }
    bVar14 = false;
    if (param_3[1] == 0) {
      FUN_180056db0((longlong)param_1,-1,0,(longlong *)0x0);
      do {
        plVar7 = (longlong *)FUN_1800568a4(param_1,param_2);
        if (plVar7 != (longlong *)0x0) {
          iVar6 = FUN_180056b9c((longlong)param_1,(longlong)plVar7,param_2);
          if (iVar6 != -1) {
            FUN_1800570bc((longlong)param_1,param_3,plVar7,iVar6);
          }
          break;
        }
        uVar10 = *(uint *)(param_1 + 0xd);
        if (uVar10 == 0) break;
        bVar14 = false;
        uVar11 = uVar10;
        do {
          uVar1 = uVar11 - 1;
          if (uVar1 < uVar10) {
            piVar12 = (int *)(param_1[0xc] + 0x40 + (ulonglong)uVar1 * 0x48);
            puVar13 = (ulonglong *)(param_1[0xc] + 0x10 + (ulonglong)uVar1 * 0x48);
          }
          else {
            piVar12 = (int *)&DAT_00000038;
            puVar13 = (ulonglong *)&DAT_00000008;
          }
          if (*piVar12 == 0) {
            FUN_180056b5c((longlong)param_1,puVar13);
            for (; uVar11 < *(uint *)(param_1 + 0xd); uVar11 = uVar11 + 1) {
              lVar4 = param_1[0xc];
              uVar8 = (ulonglong)(uVar11 - 1);
              uVar9 = (ulonglong)uVar11;
              puVar2 = (undefined8 *)(lVar4 + uVar9 * 0x48);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(lVar4 + uVar8 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar9 * 0x48);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(lVar4 + 0x10 + uVar8 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              puVar2 = (undefined8 *)(lVar4 + 0x20 + uVar9 * 0x48);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(lVar4 + 0x20 + uVar8 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              puVar2 = (undefined8 *)(lVar4 + 0x30 + uVar9 * 0x48);
              uVar5 = puVar2[1];
              puVar3 = (undefined8 *)(lVar4 + 0x30 + uVar8 * 0x48);
              *puVar3 = *puVar2;
              puVar3[1] = uVar5;
              *(undefined8 *)(lVar4 + 0x40 + uVar8 * 0x48) =
                   *(undefined8 *)(lVar4 + 0x40 + uVar9 * 0x48);
            }
            uVar10 = *(uint *)(param_1 + 0xd) - 1;
            bVar14 = true;
            *(uint *)(param_1 + 0xd) = uVar10;
          }
          uVar11 = uVar1;
        } while (uVar1 != 0);
      } while (bVar14);
      bVar14 = param_3[1] == 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return !bVar14;
}

