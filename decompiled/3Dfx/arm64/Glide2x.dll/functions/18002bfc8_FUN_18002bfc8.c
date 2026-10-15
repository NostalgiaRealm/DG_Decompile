/*
 * FUN_18002bfc8 at 18002bfc8
 * undefined __cdecl FUN_18002bfc8(longlong param_1, longlong * param_2, undefined8 * param_3, longlong * param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 18002bfc8-18002c20f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002bfc8(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 uVar27;
  longlong lVar28;
  
  FUN_180028498(param_1 + 0x34e8);
  lVar26 = param_4[1];
  lVar23 = *param_4;
  lVar17 = param_4[3];
  lVar11 = param_4[2];
  lVar6 = param_4[6];
  lVar10 = *(longlong *)(param_1 + 0x31c0);
  lVar18 = param_4[5];
  lVar12 = param_4[4];
  lVar2 = param_4[7];
  uVar27 = param_3[1];
  uVar24 = *param_3;
  uVar19 = param_3[3];
  uVar13 = param_3[2];
  uVar7 = param_3[6];
  uVar20 = param_3[5];
  uVar14 = param_3[4];
  uVar1 = *(undefined4 *)(param_3 + 7);
  lVar28 = param_2[1];
  lVar25 = *param_2;
  lVar21 = param_2[3];
  lVar15 = param_2[2];
  lVar8 = param_2[6];
  lVar22 = param_2[5];
  lVar16 = param_2[4];
  lVar3 = param_2[7];
  FUN_180042980((uint *)(lVar10 + 0x12c0));
  if (*(char *)(lVar10 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_180042850(lVar10 + 0x12c0,200);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800608b0((uint *)(lVar10 + 0x14c0));
      puVar4[1] = 200;
      puVar4[2] = param_1;
      puVar4[4] = lVar28;
      puVar4[3] = lVar25;
      puVar4[6] = lVar21;
      puVar4[5] = lVar15;
      puVar4[8] = lVar22;
      puVar4[7] = lVar16;
      puVar4[9] = lVar8;
      *(int *)(puVar4 + 10) = (int)lVar3;
      *(undefined8 *)((longlong)puVar4 + 0x5c) = uVar27;
      *(undefined8 *)((longlong)puVar4 + 0x54) = uVar24;
      *(undefined8 *)((longlong)puVar4 + 0x6c) = uVar19;
      *(undefined8 *)((longlong)puVar4 + 100) = uVar13;
      *(undefined8 *)((longlong)puVar4 + 0x7c) = uVar20;
      *(undefined8 *)((longlong)puVar4 + 0x74) = uVar14;
      *(undefined8 *)((longlong)puVar4 + 0x84) = uVar7;
      *(undefined4 *)((longlong)puVar4 + 0x8c) = uVar1;
      puVar4[0x13] = lVar26;
      puVar4[0x12] = lVar23;
      puVar4[0x15] = lVar17;
      puVar4[0x14] = lVar11;
      puVar4[0x17] = lVar18;
      puVar4[0x16] = lVar12;
      puVar4[0x18] = lVar6;
      *(int *)(puVar4 + 0x19) = (int)lVar2;
      *(undefined4 *)((longlong)puVar4 + 0xcc) = param_5;
      puVar9 = (undefined8 *)((longlong)puVar4 + 0xdfU & 0xfffffffffffffff8);
      *(undefined4 *)(puVar4 + 0x1a) = param_6;
      *(undefined4 *)((longlong)puVar4 + 0xd4) = param_7;
      *puVar9 = 0;
      *puVar4 = FUN_18002c210;
      *(undefined8 **)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0x14bc) * 0x28 + 0x1350) = puVar9;
      if (*(char *)(lVar10 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar10 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar10 + 0x1340));
        return;
      }
      goto LAB_18002c1f4;
    }
    *(undefined4 *)(lVar10 + 0x12c0) = 0;
    Sleep(100);
    FUN_180042980((uint *)(lVar10 + 0x12c0));
  }
  plVar5 = *(longlong **)(lVar10 + 0x14a0);
  *plVar5 = param_1;
  plVar5[2] = lVar28;
  plVar5[1] = lVar25;
  plVar5[4] = lVar21;
  plVar5[3] = lVar15;
  plVar5[6] = lVar22;
  plVar5[5] = lVar16;
  plVar5[7] = lVar8;
  *(int *)(plVar5 + 8) = (int)lVar3;
  *(undefined8 *)((longlong)plVar5 + 0x4c) = uVar27;
  *(undefined8 *)((longlong)plVar5 + 0x44) = uVar24;
  *(undefined8 *)((longlong)plVar5 + 0x5c) = uVar19;
  *(undefined8 *)((longlong)plVar5 + 0x54) = uVar13;
  *(undefined8 *)((longlong)plVar5 + 0x6c) = uVar20;
  *(undefined8 *)((longlong)plVar5 + 100) = uVar14;
  *(undefined8 *)((longlong)plVar5 + 0x74) = uVar7;
  *(undefined4 *)((longlong)plVar5 + 0x7c) = uVar1;
  plVar5[0x11] = lVar26;
  plVar5[0x10] = lVar23;
  plVar5[0x13] = lVar17;
  plVar5[0x12] = lVar11;
  plVar5[0x15] = lVar18;
  plVar5[0x14] = lVar12;
  plVar5[0x16] = lVar6;
  *(int *)(plVar5 + 0x17) = (int)lVar2;
  *(undefined4 *)((longlong)plVar5 + 0xbc) = param_5;
  *(undefined4 *)(plVar5 + 0x18) = param_6;
  *(undefined4 *)((longlong)plVar5 + 0xc4) = param_7;
  FUN_18002c210(plVar5);
LAB_18002c1f4:
  *(undefined4 *)(lVar10 + 0x12c0) = 0;
  return;
}

