/*
 * FUN_180050574 at 180050574
 * undefined __fastcall FUN_180050574(longlong param_1, undefined4 param_2, undefined4 param_3, longlong * param_4, longlong * param_5)
 * Address ranges: 180050574-1800506f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050574(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

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
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  lVar4 = param_4[6];
  lVar5 = param_4[7];
  piVar1 = (int *)(lVar2 + 0x12c0);
  lVar6 = param_4[4];
  lVar7 = param_4[5];
  lVar8 = param_4[2];
  lVar9 = param_4[3];
  lVar10 = *param_4;
  lVar11 = param_4[1];
  lVar12 = *param_5;
  lVar13 = param_5[1];
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar14 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x60);
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar14[1] = 0x60;
      puVar14[2] = param_1;
      puVar15 = (undefined8 *)((longlong)puVar14 + 0x77U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar14 + 3) = param_2;
      *(undefined4 *)((longlong)puVar14 + 0x1c) = param_3;
      puVar14[4] = lVar10;
      puVar14[5] = lVar11;
      puVar14[6] = lVar8;
      puVar14[7] = lVar9;
      puVar14[8] = lVar6;
      puVar14[9] = lVar7;
      puVar14[10] = lVar4;
      puVar14[0xb] = lVar5;
      puVar14[0xc] = lVar12;
      puVar14[0xd] = lVar13;
      *puVar15 = 0;
      *puVar14 = FUN_1800506f8;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar15;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_1800506c8;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  plVar3[2] = lVar10;
  plVar3[3] = lVar11;
  plVar3[4] = lVar8;
  plVar3[5] = lVar9;
  plVar3[6] = lVar6;
  plVar3[7] = lVar7;
  plVar3[8] = lVar4;
  plVar3[9] = lVar5;
  plVar3[10] = lVar12;
  plVar3[0xb] = lVar13;
  FUN_1800506f8(plVar3);
LAB_1800506c8:
  FUN_1800facb0(piVar1);
  return;
}

