/*
 * FUN_180047a38 at 180047a38
 * undefined FUN_180047a38(void)
 * Address ranges: 180047a38-180047c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047a38(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  if (param_2 == (longlong *)0x0) {
    FUN_180101630(lVar5 + 0x12c0);
    if (*(char *)(lVar5 + 0x14c4) != '\0') {
      puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,8);
      pcVar4 = __imp_KERNEL32_dll_Sleep;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar5 + 0x14c0);
        puVar2[1] = 8;
        puVar2[2] = param_1;
        uVar1 = (longlong)puVar2 + 0x1f;
        pcVar4 = FUN_180047c18;
        goto LAB_180047b90;
      }
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      (*pcVar4)(100);
      FUN_180101630(lVar5 + 0x12c0);
    }
    **(longlong **)(lVar5 + 0x14a0) = param_1;
    FUN_180047c18();
  }
  else {
    lVar18 = param_2[1];
    lVar14 = *param_2;
    lVar10 = param_2[3];
    lVar6 = param_2[2];
    lVar19 = param_2[5];
    lVar15 = param_2[4];
    lVar11 = param_2[7];
    lVar7 = param_2[6];
    lVar20 = param_2[9];
    lVar16 = param_2[8];
    lVar12 = param_2[0xb];
    lVar8 = param_2[10];
    lVar21 = param_2[0xd];
    lVar17 = param_2[0xc];
    lVar13 = param_2[0xf];
    lVar9 = param_2[0xe];
    FUN_180101630(lVar5 + 0x12c0);
    if (*(char *)(lVar5 + 0x14c4) != '\0') {
      puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x88);
      pcVar4 = __imp_KERNEL32_dll_Sleep;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_1800015a0(lVar5 + 0x14c0);
        puVar2[1] = 0x88;
        puVar2[2] = param_1;
        uVar1 = (longlong)puVar2 + 0x9f;
        puVar2[4] = lVar18;
        puVar2[3] = lVar14;
        puVar2[6] = lVar10;
        puVar2[5] = lVar6;
        puVar2[8] = lVar19;
        puVar2[7] = lVar15;
        puVar2[10] = lVar11;
        puVar2[9] = lVar7;
        puVar2[0xc] = lVar20;
        puVar2[0xb] = lVar16;
        puVar2[0xe] = lVar12;
        puVar2[0xd] = lVar8;
        puVar2[0x10] = lVar21;
        puVar2[0xf] = lVar17;
        puVar2[0x12] = lVar13;
        puVar2[0x11] = lVar9;
        pcVar4 = FUN_180047c08;
LAB_180047b90:
        *(undefined8 *)(uVar1 & 0xfffffffffffffff8) = 0;
        *puVar2 = pcVar4;
        *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) =
             (undefined8 *)(uVar1 & 0xfffffffffffffff8);
        pcVar4 = __imp_KERNEL32_dll_SetEvent;
        if (*(char *)(lVar5 + 0x14c5) != '\0') {
          *(undefined4 *)(lVar5 + 0x12c0) = 0;
          (*pcVar4)(*(undefined8 *)(lVar5 + 0x1340));
          return;
        }
        goto LAB_180047bf0;
      }
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      (*pcVar4)(100);
      FUN_180101630(lVar5 + 0x12c0);
    }
    plVar3 = *(longlong **)(lVar5 + 0x14a0);
    *plVar3 = param_1;
    plVar3[2] = lVar18;
    plVar3[1] = lVar14;
    plVar3[4] = lVar10;
    plVar3[3] = lVar6;
    plVar3[6] = lVar19;
    plVar3[5] = lVar15;
    plVar3[8] = lVar11;
    plVar3[7] = lVar7;
    plVar3[10] = lVar20;
    plVar3[9] = lVar16;
    plVar3[0xc] = lVar12;
    plVar3[0xb] = lVar8;
    plVar3[0xe] = lVar21;
    plVar3[0xd] = lVar17;
    plVar3[0x10] = lVar13;
    plVar3[0xf] = lVar9;
    FUN_180047c08();
  }
LAB_180047bf0:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

