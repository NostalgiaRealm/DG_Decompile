/*
 * FUN_10024190 at 10024190
 * undefined __thiscall FUN_10024190(void * this, int param_1)
 * Address ranges: 10024190-100243f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10024190(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  
  piVar1 = *(int **)((int)this + 0xc);
  iVar2 = piVar1[5];
  pvVar3 = *(LPVOID *)(param_1 * 0x158 + 0x150 + *(int *)this);
  do {
    if (iVar2 == 0) {
      FUN_1005c76c(pvVar3);
      return;
    }
    iVar2 = iVar2 + -1;
    iVar4 = piVar1[3];
    piVar5 = *(int **)(iVar4 + 0x10 + iVar2 * 0x18);
    for (uVar16 = piVar5[1]; uVar16 != 0; uVar16 = uVar16 - 1) {
      if (*(LPVOID *)(*piVar5 + -0x58 + uVar16 * 0x74) == pvVar3) {
        iVar17 = *piVar1;
        piVar6 = *(int **)(*piVar5 + -4 + uVar16 * 0x74);
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar17 + 0x1c));
        uVar15 = (int)piVar6 >> 0x1f;
        uVar12 = FUN_10056245((void *)(iVar17 + 0xc),(uint)piVar6,uVar15);
        if (uVar12 != *(uint *)(iVar17 + 0x14)) {
          iVar7 = *(int *)(iVar17 + 0x10);
          iVar13 = uVar12 * 0x20;
          if (((*(int **)(iVar13 + iVar7) == piVar6) && (*(uint *)(iVar13 + 4 + iVar7) == uVar15))
             && (piVar19 = (int *)(iVar7 + 0x10 + iVar13), piVar19 != (int *)0x0)) {
            uVar21 = (**(code **)(**(int **)(*piVar19 + 0xc) + 0x20))(*(int **)(*piVar19 + 0xc));
            uVar12 = (uint)((ulonglong)uVar21 >> 0x20);
            if ((uVar12 <= (uint)piVar19[3]) &&
               ((uVar12 < (uint)piVar19[3] || ((uint)uVar21 < (uint)piVar19[2])))) {
              if ((piVar19[1] != -1) &&
                 (uVar12 = FUN_10052215((void *)(piVar19[1] + 4),'\0'), (char)uVar12 == '\0')) {
                iVar7 = piVar19[1];
                if (*(int *)(iVar7 + 0x8e0) != 0) {
                  *(int **)(iVar7 + 0x7e0 + *(int *)(iVar7 + 0x918) * 8) = piVar6;
                  *(code **)(iVar7 + 0x7e4 + *(int *)(iVar7 + 0x918) * 8) = FUN_10053f7f;
                  *(int *)(iVar7 + 0x918) = *(int *)(iVar7 + 0x918) + 1;
                }
                goto LAB_10024364;
              }
              piVar8 = *(int **)(*piVar19 + 0xc);
              (**(code **)(*piVar8 + 0x24))
                        (piVar8,piVar19[2],piVar19[3],*(undefined4 *)(*piVar19 + 0x10));
              WaitForSingleObject(*(HANDLE *)(*piVar19 + 0x10),0xffffffff);
            }
            uVar14 = FUN_10056245((void *)(iVar17 + 0xc),(uint)piVar6,uVar15);
            uVar12 = *(uint *)(iVar17 + 0x14);
            if (uVar14 != uVar12) {
              if ((*(int **)(uVar14 * 0x20 + *(int *)(iVar17 + 0x10)) == piVar6) &&
                 (*(uint *)(uVar14 * 0x20 + 4 + *(int *)(iVar17 + 0x10)) == uVar15)) {
                uVar14 = uVar14 + 1;
                if (uVar14 < uVar12) {
                  do {
                    iVar7 = *(int *)(iVar17 + 0x10);
                    iVar13 = uVar14 * 0x20;
                    uVar14 = uVar14 + 1;
                    puVar18 = (undefined4 *)(iVar13 + iVar7);
                    uVar9 = puVar18[1];
                    uVar10 = puVar18[2];
                    uVar11 = puVar18[3];
                    puVar20 = (undefined4 *)(iVar13 + -0x20 + iVar7);
                    *puVar20 = *puVar18;
                    puVar20[1] = uVar9;
                    puVar20[2] = uVar10;
                    puVar20[3] = uVar11;
                    puVar18 = (undefined4 *)(iVar13 + 0x10 + iVar7);
                    uVar9 = puVar18[1];
                    uVar10 = puVar18[2];
                    uVar11 = puVar18[3];
                    puVar20 = (undefined4 *)(iVar13 + -0x10 + iVar7);
                    *puVar20 = *puVar18;
                    puVar20[1] = uVar9;
                    puVar20[2] = uVar10;
                    puVar20[3] = uVar11;
                    uVar12 = *(uint *)(iVar17 + 0x14);
                  } while (uVar14 < uVar12);
                }
                *(uint *)(iVar17 + 0x14) = uVar12 - 1;
              }
            }
            FUN_10053f7f(piVar6);
          }
        }
LAB_10024364:
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar17 + 0x1c));
        uVar12 = piVar5[1];
        if (uVar16 - 1 < uVar12) {
          uVar15 = uVar16;
          if (uVar16 < uVar12) {
            do {
              iVar17 = uVar15 * 0x74;
              uVar15 = uVar15 + 1;
              puVar18 = (undefined4 *)(iVar17 + *piVar5);
              puVar20 = puVar18 + -0x1d;
              for (iVar17 = 0x1d; iVar17 != 0; iVar17 = iVar17 + -1) {
                *puVar20 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar20 = puVar20 + 1;
              }
              uVar12 = piVar5[1];
            } while (uVar15 < uVar12);
          }
          piVar5[1] = uVar12 - 1;
        }
        piVar1[6] = piVar1[6] + -1;
      }
    }
    if (piVar5[1] == 0) {
      FUN_10054377(piVar1 + 3,(uint *)(iVar4 + (iVar2 * 3 + 1) * 8));
    }
  } while( true );
}

