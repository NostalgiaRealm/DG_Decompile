/*
 * FUN_180047da8 at 180047da8
 * undefined FUN_180047da8(void)
 * Address ranges: 180047da8-180047edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047da8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar1 = param_2[8];
  lVar13 = param_2[1];
  lVar11 = *param_2;
  lVar9 = param_2[3];
  lVar7 = param_2[2];
  lVar6 = *(longlong *)(param_1 + 0xf6e0);
  lVar14 = param_2[5];
  lVar12 = param_2[4];
  lVar10 = param_2[7];
  lVar8 = param_2[6];
  FUN_180101630(lVar6 + 0x12c0);
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    puVar3 = (undefined8 *)FUN_180101500(lVar6 + 0x12c0,0x50);
    pcVar2 = __imp_KERNEL32_dll_Sleep;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar6 + 0x14c0);
      puVar3[1] = 0x50;
      puVar3[2] = param_1;
      puVar3[4] = lVar13;
      puVar3[3] = lVar11;
      puVar3[6] = lVar9;
      puVar3[5] = lVar7;
      puVar3[8] = lVar14;
      puVar3[7] = lVar12;
      puVar3[10] = lVar10;
      puVar3[9] = lVar8;
      *(int *)(puVar3 + 0xb) = (int)lVar1;
      puVar5 = (undefined8 *)((longlong)puVar3 + 99U & 0xfffffffffffffff8);
      *puVar5 = 0;
      *puVar3 = FUN_180047ee0;
      *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) = puVar5;
      pcVar2 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar6 + 0x12c0) = 0;
        (*pcVar2)(*(undefined8 *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_180047ec8;
    }
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
    (*pcVar2)(100);
    FUN_180101630(lVar6 + 0x12c0);
  }
  plVar4 = *(longlong **)(lVar6 + 0x14a0);
  *plVar4 = param_1;
  plVar4[2] = lVar13;
  plVar4[1] = lVar11;
  plVar4[4] = lVar9;
  plVar4[3] = lVar7;
  plVar4[6] = lVar14;
  plVar4[5] = lVar12;
  plVar4[8] = lVar10;
  plVar4[7] = lVar8;
  *(int *)(plVar4 + 9) = (int)lVar1;
  FUN_180047ee0();
LAB_180047ec8:
  *(undefined4 *)(lVar6 + 0x12c0) = 0;
  return;
}

