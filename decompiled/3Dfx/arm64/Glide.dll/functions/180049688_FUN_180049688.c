/*
 * FUN_180049688 at 180049688
 * undefined __cdecl FUN_180049688(undefined8 * param_1)
 * Address ranges: 180049688-180049767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049688(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_180066020;
  param_1[0xd5] = &PTR_FUN_1800661d8;
  param_1[0xd6] = &PTR_LAB_1800660b0;
  if (*(int *)(param_1 + 0xd9) != 0) {
    do {
      plVar2 = *(longlong **)(param_1[0xd8] + uVar3 * 8);
      (**(code **)(*plVar2 + 8))(plVar2,param_1 + 0xd6);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xd9));
  }
  puVar4 = DAT_18006c8d8;
  if (DAT_18006c8d8 != (undefined8 *)0x0) {
    FUN_180046548(DAT_18006c8d8);
    FUN_180060a18(puVar4);
  }
  DAT_18006c8d8 = (undefined8 *)0x0;
  param_1[0x11a] = 0;
  FUN_180051e30((longlong)param_1);
  lVar5 = 0x10;
  puVar4 = param_1 + 0x36a0;
  do {
    puVar4 = puVar4 + -0x358;
    lVar5 = lVar5 + -1;
    FUN_180049570((longlong)puVar4);
  } while (lVar5 != 0);
  FUN_180059fa0(param_1 + 0xd6);
  FUN_180051968(param_1);
  return;
}

