/*
 * FUN_180040824 at 180040824
 * undefined __fastcall FUN_180040824(longlong param_1)
 * Address ranges: 180040824-180040962
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040824(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar7 = 0;
    lVar8 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0 + *(longlong *)(param_1 + 0x10);
    piVar1 = (int *)(lVar8 + 0x1bc0);
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar7 * 0x10);
      FUN_1800fab60(piVar1);
      if (*(char *)(lVar8 + 0x1dc4) == '\0') {
LAB_18004090f:
        plVar3 = *(longlong **)(lVar8 + 0x1da0);
        *plVar3 = lVar8 + 0x2140;
        plVar3[1] = lVar2;
        FUN_180040964(plVar3);
LAB_180040922:
        FUN_1800facb0(piVar1);
      }
      else {
        puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x10);
        if (puVar4 == (undefined8 *)0x0) {
          FUN_1800facb0(piVar1);
          Sleep(100);
          FUN_1800fab60(piVar1);
          goto LAB_18004090f;
        }
        LOCK();
        *(int *)(lVar8 + 0x1dc0) = *(int *)(lVar8 + 0x1dc0) + 1;
        UNLOCK();
        puVar4[1] = 0x10;
        puVar4[2] = lVar8 + 0x2140;
        puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
        puVar4[3] = lVar2;
        *puVar5 = 0;
        *puVar4 = FUN_180040964;
        *(undefined8 **)(lVar8 + 0x1c50 + (ulonglong)*(uint *)(lVar8 + 0x1dbc) * 0x28) = puVar5;
        if (*(char *)(lVar8 + 0x1dc5) == '\0') goto LAB_180040922;
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar8 + 0x1c40));
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x40));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

