/*
 * FUN_18002bde0 at 18002bde0
 * undefined __cdecl FUN_18002bde0(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 18002bde0-18002bfa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002bde0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  
  FUN_180028498(param_1 + 0x34e8);
  uVar19 = param_3[1];
  uVar17 = *param_3;
  uVar13 = param_3[3];
  uVar9 = param_3[2];
  uVar5 = param_3[6];
  lVar8 = *(longlong *)(param_1 + 0x31c0);
  uVar14 = param_3[5];
  uVar10 = param_3[4];
  uVar1 = *(undefined4 *)(param_3 + 7);
  lVar20 = param_2[1];
  lVar18 = *param_2;
  lVar15 = param_2[3];
  lVar11 = param_2[2];
  lVar6 = param_2[6];
  lVar16 = param_2[5];
  lVar12 = param_2[4];
  lVar2 = param_2[7];
  FUN_180042980((uint *)(lVar8 + 0x12c0));
  if (*(char *)(lVar8 + 0x14c4) != '\0') {
    puVar3 = (undefined8 *)FUN_180042850(lVar8 + 0x12c0,0x80);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1800608b0((uint *)(lVar8 + 0x14c0));
      puVar3[1] = 0x80;
      puVar3[2] = param_1;
      puVar3[4] = lVar20;
      puVar3[3] = lVar18;
      puVar3[6] = lVar15;
      puVar3[5] = lVar11;
      puVar3[8] = lVar16;
      puVar3[7] = lVar12;
      puVar3[9] = lVar6;
      *(int *)(puVar3 + 10) = (int)lVar2;
      *(undefined8 *)((longlong)puVar3 + 0x5c) = uVar19;
      *(undefined8 *)((longlong)puVar3 + 0x54) = uVar17;
      *(undefined8 *)((longlong)puVar3 + 0x6c) = uVar13;
      *(undefined8 *)((longlong)puVar3 + 100) = uVar9;
      *(undefined8 *)((longlong)puVar3 + 0x7c) = uVar14;
      *(undefined8 *)((longlong)puVar3 + 0x74) = uVar10;
      *(undefined8 *)((longlong)puVar3 + 0x84) = uVar5;
      *(undefined4 *)((longlong)puVar3 + 0x8c) = uVar1;
      puVar7 = (undefined8 *)((longlong)puVar3 + 0x97U & 0xfffffffffffffff8);
      *puVar7 = 0;
      *puVar3 = FUN_18002bfa8;
      *(undefined8 **)(lVar8 + (ulonglong)*(uint *)(lVar8 + 0x14bc) * 0x28 + 0x1350) = puVar7;
      if (*(char *)(lVar8 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar8 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar8 + 0x1340));
        return;
      }
      goto LAB_18002bf90;
    }
    *(undefined4 *)(lVar8 + 0x12c0) = 0;
    Sleep(100);
    FUN_180042980((uint *)(lVar8 + 0x12c0));
  }
  plVar4 = *(longlong **)(lVar8 + 0x14a0);
  *plVar4 = param_1;
  plVar4[2] = lVar20;
  plVar4[1] = lVar18;
  plVar4[4] = lVar15;
  plVar4[3] = lVar11;
  plVar4[6] = lVar16;
  plVar4[5] = lVar12;
  plVar4[7] = lVar6;
  *(int *)(plVar4 + 8) = (int)lVar2;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = uVar19;
  *(undefined8 *)((longlong)plVar4 + 0x44) = uVar17;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = uVar13;
  *(undefined8 *)((longlong)plVar4 + 0x54) = uVar9;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = uVar14;
  *(undefined8 *)((longlong)plVar4 + 100) = uVar10;
  *(undefined8 *)((longlong)plVar4 + 0x74) = uVar5;
  *(undefined4 *)((longlong)plVar4 + 0x7c) = uVar1;
  FUN_18002bfa8(plVar4);
LAB_18002bf90:
  *(undefined4 *)(lVar8 + 0x12c0) = 0;
  return;
}

