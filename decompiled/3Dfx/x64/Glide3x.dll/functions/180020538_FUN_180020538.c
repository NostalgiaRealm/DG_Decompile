/*
 * FUN_180020538 at 180020538
 * undefined __fastcall FUN_180020538(longlong param_1, longlong * param_2)
 * Address ranges: 180020538-180020646
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020538(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_1800192c4(param_1 + 0x3668);
  lVar2 = *(longlong *)(param_1 + 0x3340);
  lVar4 = *param_2;
  lVar5 = param_2[1];
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005fc20(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar6 = (undefined8 *)FUN_18005fc40((longlong)piVar1,0x18);
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar6[1] = 0x18;
      puVar6[2] = param_1;
      puVar7 = (undefined8 *)((longlong)puVar6 + 0x2fU & 0xfffffffffffffff8);
      puVar6[3] = lVar4;
      puVar6[4] = lVar5;
      *puVar7 = 0;
      *puVar6 = FUN_180020648;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar7;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005fd70(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18002062a;
    }
    FUN_18005fd70(piVar1);
    Sleep(100);
    FUN_18005fc20(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  plVar3[1] = lVar4;
  plVar3[2] = lVar5;
  FUN_180020648(plVar3);
LAB_18002062a:
  FUN_18005fd70(piVar1);
  return;
}

