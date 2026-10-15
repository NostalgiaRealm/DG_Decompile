/*
 * FUN_180057d9c at 180057d9c
 * undefined __fastcall FUN_180057d9c(undefined8 * param_1)
 * Address ranges: 180057d9c-180057e5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057d9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  FUN_1800fb1f0(param_1[3] + 0x1bc0 + (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0);
  if (*(int *)(param_1 + 2) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      plVar3 = (longlong *)&DAT_00000008;
      goto LAB_180057df0;
    }
    do {
      plVar3 = (longlong *)(((ulonglong)uVar2 * 0x2e0 | 0x10) + param_1[1]);
LAB_180057df0:
      FUN_180058b2c(*plVar3,param_1[3],*(uint *)(param_1 + 4));
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_18003eb90(puVar1);
        FUN_1800fbcf0(puVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 2));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_1800fbcf0((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

