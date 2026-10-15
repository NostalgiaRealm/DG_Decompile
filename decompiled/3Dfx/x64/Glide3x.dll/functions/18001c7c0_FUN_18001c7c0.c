/*
 * FUN_18001c7c0 at 18001c7c0
 * undefined __fastcall FUN_18001c7c0(longlong param_1, longlong * param_2)
 * Address ranges: 18001c7c0-18001c96e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c7c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
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
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  lVar2 = *(longlong *)(param_1 + 0x3340);
  lVar4 = *param_2;
  lVar5 = param_2[1];
  piVar1 = (int *)(lVar2 + 0x12c0);
  lVar6 = param_2[2];
  lVar7 = param_2[3];
  lVar8 = param_2[4];
  lVar9 = param_2[5];
  lVar10 = param_2[6];
  lVar11 = param_2[7];
  lVar12 = param_2[8];
  lVar13 = param_2[9];
  lVar14 = param_2[10];
  lVar15 = param_2[0xb];
  lVar16 = param_2[0xc];
  lVar17 = param_2[0xd];
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18001c8ef:
    plVar3 = *(longlong **)(lVar2 + 0x14a0);
    *plVar3 = param_1;
    plVar3[1] = lVar4;
    plVar3[2] = lVar5;
    plVar3[3] = lVar6;
    plVar3[4] = lVar7;
    plVar3[5] = lVar8;
    plVar3[6] = lVar9;
    plVar3[7] = lVar10;
    plVar3[8] = lVar11;
    plVar3[9] = lVar12;
    plVar3[10] = lVar13;
    plVar3[0xb] = lVar14;
    plVar3[0xc] = lVar15;
    plVar3[0xd] = lVar16;
    plVar3[0xe] = lVar17;
    FUN_18001c970(plVar3);
  }
  else {
    puVar18 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x78);
    if (puVar18 == (undefined8 *)0x0) {
      FUN_18005fd70(piVar1);
      Sleep(100);
      FUN_18005fc20(piVar1);
      goto LAB_18001c8ef;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar18[1] = 0x78;
    puVar18[2] = param_1;
    puVar19 = (undefined8 *)((longlong)puVar18 + 0x8fU & 0xfffffffffffffff8);
    puVar18[3] = lVar4;
    puVar18[4] = lVar5;
    puVar18[5] = lVar6;
    puVar18[6] = lVar7;
    puVar18[7] = lVar8;
    puVar18[8] = lVar9;
    puVar18[9] = lVar10;
    puVar18[10] = lVar11;
    puVar18[0xb] = lVar12;
    puVar18[0xc] = lVar13;
    puVar18[0xd] = lVar14;
    puVar18[0xe] = lVar15;
    puVar18[0xf] = lVar16;
    puVar18[0x10] = lVar17;
    *puVar19 = 0;
    *puVar18 = FUN_18001c970;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar19;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005fd70(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18001c927;
    }
  }
  FUN_18005fd70(piVar1);
LAB_18001c927:
  FUN_180009420(param_1 + 0x42a0,(undefined8 *)(param_1 + 0x45c0),(longlong)param_2);
  return;
}

