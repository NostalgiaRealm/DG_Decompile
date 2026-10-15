/*
 * FUN_1800adc18 at 1800adc18
 * undefined __fastcall FUN_1800adc18(longlong param_1)
 * Address ranges: 1800adc18-1800add93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800adc18(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar7;
  
  uVar9 = 0;
  uVar7 = uVar9;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x90) + uVar7 * 8);
      (**(code **)(*plVar3 + 8))(plVar3,-(ulonglong)(param_1 != 0) & param_1 + 0x88U);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x98));
  }
  uVar7 = uVar9;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar7 * 4);
      FUN_1800fbcf0((LPVOID)(&DAT_1801123d8)[uVar4 * 5]);
      (&DAT_1801123d8)[uVar4 * 5] = 0;
      (&DAT_1801123e0)[uVar4 * 5] = 0;
      FUN_1800fbcf0((LPVOID)(&DAT_1801123e8)[uVar4 * 5]);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      (&DAT_1801123e8)[uVar4 * 5] = 0;
      (&DAT_1801123f0)[uVar4 * 5] = 0;
    } while (uVar6 < *(uint *)(param_1 + 0x70));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x20));
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x18));
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x28));
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x30));
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  FUN_1800fbcf0(puVar5);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      if ((*(char *)(param_1 + 0x46 + uVar9) != '\0') &&
         (lVar8 = uVar9 * 600, *(int *)(&DAT_1801128f8 + lVar8) != 0)) {
        LOCK();
        piVar1 = (int *)(&DAT_1801128f8 + lVar8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(**(longlong **)(&DAT_1801128f0 + lVar8) + 0x10))();
          puVar5 = *(undefined8 **)(&DAT_1801128f0 + lVar8);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          *(undefined8 *)(&DAT_1801128f0 + lVar8) = 0;
        }
      }
      FUN_18002e2b4(puVar5,(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + uVar9 * 4));
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x70));
  }
  FUN_18002f81c();
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

