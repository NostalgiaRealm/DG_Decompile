/*
 * FUN_18020dc08 at 18020dc08
 * undefined FUN_18020dc08(void)
 * Address ranges: 18020dc08-18020deab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18020dc08(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  ulonglong local_60;
  longlong *local_58;
  ulonglong uStack_50;
  
  cVar6 = '\x01';
  local_60 = param_2;
  thunk_FUN_1802236f8(param_1 + 5);
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar3 != 0) {
    uVar14 = 0;
    uVar10 = uVar3;
    do {
      uVar4 = uVar10 + uVar14 >> 1;
      uVar11 = (ulonglong)uVar4;
      uVar12 = *(ulonglong *)(*param_1 + uVar11 * 0x18);
      if (uVar12 <= param_2) {
        if (param_2 <= uVar12) break;
        uVar14 = uVar4 + 1;
        uVar11 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar10;
      }
      uVar10 = uVar4;
    } while (uVar10 != uVar14);
    if ((((uint)uVar11 != uVar3) && (*(ulonglong *)(*param_1 + uVar11 * 0x18) == param_2)) &&
       (lVar7 = FUN_18020ec30(param_1,&local_60), puVar5 = __hybrid_os_arm64x_dispatch_icall,
       lVar7 != 0)) {
      if ((param_3 & 1) != 0) {
        cVar6 = '\x01';
        uVar11 = 0;
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_60 = CONCAT44(local_60._4_4_,*(int *)(lVar7 + 0x18));
          local_58 = param_1;
          uStack_50 = param_2;
          do {
            if ((uint)uVar11 < *(uint *)(lVar7 + 0x18)) {
              lVar9 = *(longlong *)(lVar7 + 0x10) + uVar11 * 0x30;
              plVar13 = (longlong *)(lVar9 + 0x10);
              puVar15 = (ulonglong *)(lVar9 + 0x28);
              plVar16 = (longlong *)(lVar9 + 0x18);
            }
            else {
              plVar13 = (longlong *)&DAT_00000008;
              puVar15 = (ulonglong *)&DAT_00000020;
              plVar16 = (longlong *)&DAT_00000010;
            }
            cVar6 = '\x01';
            (*(code *)puVar5)(0x180224000);
            uVar12 = (*extraout_x11)();
            if (uVar12 < *puVar15) {
              if (*plVar16 != -1) {
                cVar6 = FUN_180207560(*plVar16 + 8,0);
                if (cVar6 == '\0') goto LAB_18020dd98;
              }
              lVar9 = *plVar13;
              uVar8 = (*(code *)puVar5)(0x180224000);
              (*extraout_x11_00)(uVar8,*puVar15,*(undefined8 *)(lVar9 + 0x20));
              thunk_FUN_1802238ec(*(undefined8 *)(*plVar13 + 0x20),0xffffffff);
            }
LAB_18020dd98:
            uVar3 = (uint)uVar11 + 1;
            uVar11 = (ulonglong)uVar3;
            param_1 = local_58;
            param_2 = uStack_50;
          } while (uVar3 < (uint)local_60);
        }
        if (cVar6 == '\0') goto LAB_18020de88;
      }
      uVar3 = *(uint *)((longlong)param_1 + 0xc);
      if (uVar3 != 0) {
        uVar14 = 0;
        uVar10 = uVar3;
        do {
          uVar4 = uVar10 + uVar14 >> 1;
          uVar12 = (ulonglong)uVar4;
          uVar11 = *(ulonglong *)(*param_1 + uVar12 * 0x18);
          if (uVar11 <= param_2) {
            if (param_2 <= uVar11) break;
            uVar14 = uVar4 + 1;
            uVar12 = (ulonglong)(uVar4 + 1);
            uVar4 = uVar10;
          }
          uVar10 = uVar4;
        } while (uVar10 != uVar14);
        uVar14 = (uint)uVar12;
        if ((uVar14 != uVar3) &&
           (puVar15 = (ulonglong *)(*param_1 + uVar12 * 0x18), *puVar15 == param_2)) {
          uVar11 = puVar15[2];
          if (uVar11 != 0) {
            FUN_1802229d8(*(undefined8 *)(uVar11 + 8));
            *(undefined8 *)(uVar11 + 8) = 0;
            *(undefined8 *)(uVar11 + 0x10) = 0;
            *(undefined8 *)(uVar11 + 0x18) = 0;
            FUN_1802229d8(uVar11,0x20);
          }
          while( true ) {
            uVar3 = uVar14 + 1;
            if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) break;
            puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar14 * 0x18);
            puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar3 * 0x18);
            uVar8 = *puVar2;
            puVar1[1] = puVar2[1];
            *puVar1 = uVar8;
            puVar1[2] = puVar2[2];
            uVar14 = uVar3;
          }
          *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
        }
      }
    }
  }
LAB_18020de88:
  thunk_FUN_18022370c(param_1 + 5);
  return cVar6;
}

