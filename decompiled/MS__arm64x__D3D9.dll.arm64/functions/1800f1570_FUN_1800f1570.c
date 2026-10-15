/*
 * FUN_1800f1570 at 1800f1570
 * undefined FUN_1800f1570(void)
 * Address ranges: 1800f1570-1800f17ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800f1570(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  ulonglong local_60 [2];
  
  cVar6 = '\x01';
  local_60[0] = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 5);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar4 != 0) {
    uVar11 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar11 >> 1;
      uVar9 = (ulonglong)uVar5;
      uVar10 = *(ulonglong *)(*param_1 + uVar9 * 0x18);
      if (uVar10 <= param_2) {
        if (param_2 <= uVar10) break;
        uVar11 = uVar5 + 1;
        uVar9 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar11);
    if ((((uint)uVar9 != uVar4) && (*(ulonglong *)(*param_1 + uVar9 * 0x18) == param_2)) &&
       (lVar7 = FUN_1800f2540(param_1,local_60), lVar7 != 0)) {
      if ((param_3 & 1) != 0) {
        uVar4 = *(uint *)(lVar7 + 0x18);
        cVar6 = '\x01';
        uVar9 = 0;
        if (uVar4 != 0) {
          do {
            if ((uint)uVar9 < *(uint *)(lVar7 + 0x18)) {
              lVar1 = *(longlong *)(lVar7 + 0x10) + uVar9 * 0x30;
              plVar12 = (longlong *)(lVar1 + 0x10);
              puVar13 = (ulonglong *)(lVar1 + 0x28);
              plVar14 = (longlong *)(lVar1 + 0x18);
            }
            else {
              plVar12 = (longlong *)&DAT_00000008;
              puVar13 = (ulonglong *)&DAT_00000020;
              plVar14 = (longlong *)&DAT_00000010;
            }
            cVar6 = '\x01';
            uVar10 = (**(code **)(**(longlong **)(*plVar12 + 0x18) + 0x40))();
            if (uVar10 < *puVar13) {
              if (*plVar14 != -1) {
                cVar6 = FUN_1800e8548(*plVar14 + 8,0);
                if (cVar6 == '\0') goto LAB_1800f16e8;
              }
              plVar14 = *(longlong **)(*plVar12 + 0x18);
              (**(code **)(*plVar14 + 0x48))(plVar14,*puVar13,*(undefined8 *)(*plVar12 + 0x20));
              (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(*plVar12 + 0x20),0xffffffff)
              ;
            }
LAB_1800f16e8:
            uVar11 = (uint)uVar9 + 1;
            uVar9 = (ulonglong)uVar11;
          } while (uVar11 < uVar4);
        }
        if (cVar6 == '\0') goto LAB_1800f17d0;
      }
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      if (uVar4 != 0) {
        uVar11 = 0;
        uVar8 = uVar4;
        do {
          uVar5 = uVar8 + uVar11 >> 1;
          uVar10 = (ulonglong)uVar5;
          uVar9 = *(ulonglong *)(*param_1 + uVar10 * 0x18);
          if (uVar9 <= param_2) {
            if (param_2 <= uVar9) break;
            uVar11 = uVar5 + 1;
            uVar10 = (ulonglong)(uVar5 + 1);
            uVar5 = uVar8;
          }
          uVar8 = uVar5;
        } while (uVar8 != uVar11);
        uVar11 = (uint)uVar10;
        if ((uVar11 != uVar4) &&
           (puVar13 = (ulonglong *)(*param_1 + uVar10 * 0x18), *puVar13 == param_2)) {
          uVar9 = puVar13[2];
          if (uVar9 != 0) {
            thunk_FUN_180102fc0(*(undefined8 *)(uVar9 + 8));
            *(undefined8 *)(uVar9 + 8) = 0;
            *(undefined8 *)(uVar9 + 0x10) = 0;
            *(undefined8 *)(uVar9 + 0x18) = 0;
            FUN_180102fc0(uVar9,0x20);
          }
          while( true ) {
            uVar4 = uVar11 + 1;
            if (*(uint *)((longlong)param_1 + 0xc) <= uVar4) break;
            puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar11 * 0x18);
            puVar3 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 0x18);
            uVar15 = *puVar3;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar15;
            puVar2[2] = puVar3[2];
            uVar11 = uVar4;
          }
          *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
        }
      }
    }
  }
LAB_1800f17d0:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 5);
  return cVar6;
}

