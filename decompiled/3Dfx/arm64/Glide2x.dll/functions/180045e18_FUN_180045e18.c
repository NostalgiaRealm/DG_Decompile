/*
 * FUN_180045e18 at 180045e18
 * char __cdecl FUN_180045e18(longlong * param_1, ulonglong param_2, ulonglong param_3)
 * Address ranges: 180045e18-1800460a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180045e18(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  LPVOID pvVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong local_60 [2];
  
  cVar10 = '\x01';
  local_60[0] = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar4 != 0) {
    uVar11 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = uVar7 + uVar11 >> 1;
      uVar8 = (ulonglong)uVar5;
      uVar9 = *(ulonglong *)(*param_1 + uVar8 * 0x18);
      if (uVar9 <= param_2) {
        if (param_2 <= uVar9) break;
        uVar11 = uVar5 + 1;
        uVar8 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar11);
    if ((((uint)uVar8 != uVar4) && (*(ulonglong *)(*param_1 + uVar8 * 0x18) == param_2)) &&
       (lVar6 = FUN_1800468c8(param_1,local_60), lVar6 != 0)) {
      cVar10 = '\x01';
      if ((param_3 & 1) != 0) {
        uVar4 = *(uint *)(lVar6 + 0x18);
        uVar11 = 1;
        uVar8 = 0;
        if (uVar4 != 0) {
          do {
            if ((uint)uVar8 < *(uint *)(lVar6 + 0x18)) {
              lVar1 = *(longlong *)(lVar6 + 0x10) + uVar8 * 0x30;
              plVar13 = (longlong *)(lVar1 + 0x10);
              puVar14 = (ulonglong *)(lVar1 + 0x28);
              plVar15 = (longlong *)(lVar1 + 0x18);
            }
            else {
              plVar13 = (longlong *)&DAT_00000008;
              puVar14 = (ulonglong *)&DAT_00000020;
              plVar15 = (longlong *)0x10;
            }
            uVar11 = 1;
            uVar9 = (**(code **)(**(longlong **)(*plVar13 + 0x18) + 0x40))();
            if (uVar9 < *puVar14) {
              if (*plVar15 != -1) {
                uVar9 = FUN_18004aca0(*plVar15 + 8,0);
                uVar11 = (uint)uVar9 & 0xff;
                if ((uVar9 & 0xff) == 0) goto LAB_180045f90;
              }
              plVar15 = *(longlong **)(*plVar13 + 0x18);
              (**(code **)(*plVar15 + 0x48))(plVar15,*puVar14,*(undefined8 *)(*plVar13 + 0x20));
              WaitForSingleObject(*(HANDLE *)(*plVar13 + 0x20),0xffffffff);
            }
LAB_180045f90:
            uVar7 = (uint)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 < uVar4);
        }
        cVar10 = (char)uVar11;
        if (uVar11 == 0) goto LAB_180046078;
      }
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      if (uVar4 != 0) {
        uVar11 = 0;
        uVar7 = uVar4;
        do {
          uVar5 = uVar7 + uVar11 >> 1;
          uVar9 = (ulonglong)uVar5;
          uVar8 = *(ulonglong *)(*param_1 + uVar9 * 0x18);
          if (uVar8 <= param_2) {
            if (param_2 <= uVar8) break;
            uVar11 = uVar5 + 1;
            uVar9 = (ulonglong)(uVar5 + 1);
            uVar5 = uVar7;
          }
          uVar7 = uVar5;
        } while (uVar7 != uVar11);
        uVar11 = (uint)uVar9;
        if ((uVar11 != uVar4) &&
           (puVar14 = (ulonglong *)(*param_1 + uVar9 * 0x18), *puVar14 == param_2)) {
          pvVar12 = (LPVOID)puVar14[2];
          if (pvVar12 != (LPVOID)0x0) {
            thunk_FUN_18005fbc8(*(LPVOID *)((longlong)pvVar12 + 8));
            *(undefined8 *)((longlong)pvVar12 + 8) = 0;
            *(undefined8 *)((longlong)pvVar12 + 0x10) = 0;
            *(undefined8 *)((longlong)pvVar12 + 0x18) = 0;
            FUN_18005fbc8(pvVar12);
          }
          while( true ) {
            uVar4 = uVar11 + 1;
            if (*(uint *)((longlong)param_1 + 0xc) <= uVar4) break;
            puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar11 * 0x18);
            puVar3 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 0x18);
            uVar16 = *puVar3;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar16;
            puVar2[2] = puVar3[2];
            uVar11 = uVar4;
          }
          *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
        }
      }
    }
  }
LAB_180046078:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return cVar10;
}

