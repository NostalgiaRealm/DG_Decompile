/*
 * FUN_180093dac at 180093dac
 * undefined __fastcall FUN_180093dac(undefined8 * param_1)
 * Address ranges: 180093dac-180093e32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180093dac(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar1 = *(uint *)(param_1 + 4);
    uVar5 = 0;
    lVar2 = param_1[3];
    if (*(int *)(param_1 + 2) == 0) {
      plVar3 = (longlong *)&DAT_00000008;
      goto LAB_180093dea;
    }
    do {
      plVar3 = (longlong *)(param_1[1] + uVar5 * 0x18 + 0x10);
LAB_180093dea:
      FUN_1800e7600((longlong *)((ulonglong)uVar1 * 0x1ac0 + lVar2 + 0x22d8),*plVar3);
      (**(code **)(*(longlong *)*plVar3 + 0x10))();
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 2));
  }
  FUN_1800fbcf0((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

