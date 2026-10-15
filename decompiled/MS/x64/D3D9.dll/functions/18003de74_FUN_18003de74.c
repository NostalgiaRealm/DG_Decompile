/*
 * FUN_18003de74 at 18003de74
 * undefined __fastcall FUN_18003de74(undefined8 * param_1)
 * Address ranges: 18003de74-18003df8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003de74(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      lVar8 = 0x20;
      lVar6 = 0x28;
      puVar5 = (undefined8 *)&DAT_00000010;
      plVar7 = (longlong *)&DAT_00000008;
      goto LAB_18003ded6;
    }
    do {
      lVar2 = (ulonglong)uVar4 * 0x2f0;
      lVar3 = param_1[1];
      lVar8 = lVar3 + 0x28 + lVar2;
      lVar6 = lVar3 + 0x30 + lVar2;
      puVar5 = (undefined8 *)(lVar3 + 0x18 + lVar2);
      plVar7 = (longlong *)(lVar3 + 0x10 + lVar2);
LAB_18003ded6:
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(lVar8 + lVar3 * 0x50);
        if (plVar1 != (longlong *)0x0) {
          FUN_1800dbb60(param_1[3],(ulonglong)*(uint *)(param_1 + 4),plVar1);
          FUN_1800dbb60(param_1[3],(ulonglong)*(uint *)(param_1 + 4),
                        *(longlong **)(lVar6 + lVar3 * 0x50));
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 8);
      FUN_1800fbcf0((LPVOID)*puVar5);
      FUN_18003ebb4(*plVar7,param_1[3],*(uint *)(param_1 + 4));
      puVar5 = (undefined8 *)*plVar7;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_18003eb90(puVar5);
        FUN_1800fbcf0(puVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 2));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_1800fbcf0((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

