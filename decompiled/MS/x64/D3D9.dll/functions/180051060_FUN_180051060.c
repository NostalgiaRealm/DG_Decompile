/*
 * FUN_180051060 at 180051060
 * undefined __fastcall FUN_180051060(longlong param_1, longlong * param_2)
 * Address ranges: 180051060-1800511a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051060(longlong param_1,longlong *param_2)

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
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  lVar12 = param_2[8];
  lVar4 = *param_2;
  lVar5 = param_2[1];
  piVar1 = (int *)(lVar2 + 0x12c0);
  lVar6 = param_2[2];
  lVar7 = param_2[3];
  lVar8 = param_2[4];
  lVar9 = param_2[5];
  lVar10 = param_2[6];
  lVar11 = param_2[7];
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar13 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x50);
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar13[1] = 0x50;
      puVar13[2] = param_1;
      puVar14 = (undefined8 *)((longlong)puVar13 + 99U & 0xfffffffffffffff8);
      puVar13[3] = lVar4;
      puVar13[4] = lVar5;
      puVar13[5] = lVar6;
      puVar13[6] = lVar7;
      puVar13[7] = lVar8;
      puVar13[8] = lVar9;
      puVar13[9] = lVar10;
      puVar13[10] = lVar11;
      *(int *)(puVar13 + 0xb) = (int)lVar12;
      *puVar14 = 0;
      *puVar13 = FUN_1800511a4;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar14;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18005117d;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
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
  *(int *)(plVar3 + 9) = (int)lVar12;
  FUN_1800511a4(plVar3);
LAB_18005117d:
  FUN_1800facb0(piVar1);
  return;
}

