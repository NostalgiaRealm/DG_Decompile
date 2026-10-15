/*
 * FUN_1800f15b4 at 1800f15b4
 * undefined __fastcall FUN_1800f15b4(longlong param_1, uint param_2)
 * Address ranges: 1800f15b4-1800f16bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f15b4(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)param_2 * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar2 + 0x2250 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800429f0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2248 + param_1);
  *(undefined8 *)(lVar2 + 0x2250 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800e1330(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2240 + param_1);
  *(undefined8 *)(lVar2 + 0x2248 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800e1330(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2238 + param_1);
  *(undefined8 *)(lVar2 + 0x2240 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800e1330(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2230 + param_1);
  *(undefined8 *)(lVar2 + 0x2238 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800e1330(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  *(undefined8 *)(lVar2 + 0x2230 + param_1) = 0;
  FUN_1800f6ccc(param_1,(ulonglong)param_2);
  FUN_1800eeac8(param_1,(ulonglong)param_2);
  return;
}

