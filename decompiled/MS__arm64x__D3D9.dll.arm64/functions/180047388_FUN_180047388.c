/*
 * FUN_180047388 at 180047388
 * undefined FUN_180047388(void)
 * Address ranges: 180047388-1800474cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047388(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
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
  
  lVar9 = param_5[1];
  lVar6 = *param_5;
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  lVar10 = param_4[5];
  lVar7 = param_4[4];
  lVar14 = param_4[7];
  lVar12 = param_4[6];
  lVar11 = param_4[1];
  lVar8 = *param_4;
  lVar15 = param_4[3];
  lVar13 = param_4[2];
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    puVar2 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x60);
    pcVar1 = __imp_KERNEL32_dll_Sleep;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar5 + 0x14c0);
      puVar2[1] = 0x60;
      puVar2[2] = param_1;
      *(undefined4 *)(puVar2 + 3) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = param_3;
      puVar4 = (undefined8 *)((longlong)puVar2 + 0x77U & 0xfffffffffffffff8);
      puVar2[5] = lVar11;
      puVar2[4] = lVar8;
      puVar2[7] = lVar15;
      puVar2[6] = lVar13;
      puVar2[9] = lVar10;
      puVar2[8] = lVar7;
      puVar2[0xb] = lVar14;
      puVar2[10] = lVar12;
      puVar2[0xd] = lVar9;
      puVar2[0xc] = lVar6;
      *puVar4 = 0;
      *puVar2 = FUN_1800474d0;
      *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar4;
      pcVar1 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar5 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar5 + 0x12c0) = 0;
        (*pcVar1)(*(undefined8 *)(lVar5 + 0x1340));
        return;
      }
      goto LAB_1800474b4;
    }
    *(undefined4 *)(lVar5 + 0x12c0) = 0;
    (*pcVar1)(100);
    FUN_180101630(lVar5 + 0x12c0);
  }
  plVar3 = *(longlong **)(lVar5 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  plVar3[3] = lVar11;
  plVar3[2] = lVar8;
  plVar3[5] = lVar15;
  plVar3[4] = lVar13;
  plVar3[7] = lVar10;
  plVar3[6] = lVar7;
  plVar3[9] = lVar14;
  plVar3[8] = lVar12;
  plVar3[0xb] = lVar9;
  plVar3[10] = lVar6;
  FUN_1800474d0();
LAB_1800474b4:
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
  return;
}

