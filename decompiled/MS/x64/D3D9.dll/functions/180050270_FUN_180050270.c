/*
 * FUN_180050270 at 180050270
 * undefined __fastcall FUN_180050270(longlong param_1, longlong * param_2)
 * Address ranges: 180050270-180050385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050270(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xf6e0);
  lVar5 = *param_2;
  lVar6 = param_2[1];
  piVar1 = (int *)(lVar3 + 0x12c0);
  lVar2 = param_2[2];
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar7 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x20);
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar7[1] = 0x20;
      puVar7[2] = param_1;
      puVar8 = (undefined8 *)((longlong)puVar7 + 0x37U & 0xfffffffffffffff8);
      puVar7[3] = lVar5;
      puVar7[4] = lVar6;
      puVar7[5] = lVar2;
      *puVar8 = 0;
      *puVar7 = FUN_180050388;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar8;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_180050364;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar4 = *(longlong **)(lVar3 + 0x14a0);
  *plVar4 = param_1;
  plVar4[1] = lVar5;
  plVar4[2] = lVar6;
  plVar4[3] = lVar2;
  FUN_180050388(plVar4);
LAB_180050364:
  FUN_1800facb0(piVar1);
  return;
}

