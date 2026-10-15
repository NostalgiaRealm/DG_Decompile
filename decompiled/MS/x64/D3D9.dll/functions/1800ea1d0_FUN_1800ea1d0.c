/*
 * FUN_1800ea1d0 at 1800ea1d0
 * char __fastcall FUN_1800ea1d0(longlong * param_1, ulonglong param_2, char param_3)
 * Address ranges: 1800ea1d0-1800ea353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800ea1d0(longlong *param_1,ulonglong param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong local_res10;
  
  cVar7 = '\x01';
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  uVar12 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar12 != 0) {
    uVar11 = 0;
    uVar13 = uVar12;
    do {
      uVar8 = uVar13 + uVar11 >> 1;
      uVar3 = *(ulonglong *)(*param_1 + (ulonglong)uVar8 * 0x18);
      uVar6 = uVar8;
      if (uVar3 <= param_2) {
        if (param_2 <= uVar3) break;
        uVar11 = uVar8 + 1;
        uVar6 = uVar13;
        uVar8 = uVar11;
      }
      uVar13 = uVar6;
    } while (uVar13 != uVar11);
    if (((((uVar8 != uVar12) && (*(ulonglong *)(*param_1 + (ulonglong)uVar8 * 0x18) == param_2)) &&
         (plVar10 = param_1, lVar9 = FUN_1800eae18(param_1,&local_res10), lVar9 != 0)) &&
        ((param_3 == '\0' ||
         (cVar7 = FUN_1800e9df8((longlong)plVar10,lVar9,0xffffffff), cVar7 != '\0')))) &&
       (uVar12 = *(uint *)((longlong)param_1 + 0xc), uVar12 != 0)) {
      lVar9 = *param_1;
      uVar11 = 0;
      uVar13 = uVar12;
      do {
        uVar8 = uVar13 + uVar11 >> 1;
        uVar3 = *(ulonglong *)(lVar9 + (ulonglong)uVar8 * 0x18);
        uVar6 = uVar8;
        if (uVar3 <= param_2) {
          if (param_2 <= uVar3) break;
          uVar11 = uVar8 + 1;
          uVar6 = uVar13;
          uVar8 = uVar11;
        }
        uVar13 = uVar6;
      } while (uVar13 != uVar11);
      if ((uVar8 != uVar12) && (*(ulonglong *)(lVar9 + (ulonglong)uVar8 * 0x18) == param_2)) {
        pvVar4 = *(LPVOID *)(lVar9 + 0x10 + (ulonglong)uVar8 * 0x18);
        if (pvVar4 != (LPVOID)0x0) {
          FUN_1800fbcf0(*(LPVOID *)((longlong)pvVar4 + 8));
          *(undefined8 *)((longlong)pvVar4 + 8) = 0;
          *(undefined8 *)((longlong)pvVar4 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar4 + 0x18) = 0;
          FUN_1800fbcf0(pvVar4);
        }
        while( true ) {
          uVar12 = uVar8 + 1;
          if (*(uint *)((longlong)param_1 + 0xc) <= uVar12) break;
          lVar9 = *param_1;
          puVar1 = (undefined8 *)(lVar9 + (ulonglong)uVar12 * 0x18);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar9 + (ulonglong)uVar8 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar9 + 0x10 + (ulonglong)uVar8 * 0x18) =
               *(undefined8 *)(lVar9 + 0x10 + (ulonglong)uVar12 * 0x18);
          uVar8 = uVar12;
        }
        *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return cVar7;
}

