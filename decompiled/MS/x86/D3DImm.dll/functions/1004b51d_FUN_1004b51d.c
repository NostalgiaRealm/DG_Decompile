/*
 * FUN_1004b51d at 1004b51d
 * undefined __fastcall FUN_1004b51d(undefined4 * param_1)
 * Address ranges: 1004b51d-1004b593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004b51d(undefined4 *param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 0x14) = 0;
    (**(code **)(*(int *)param_1[0x18] + 0x30))();
  }
  uVar2 = 0;
  do {
    if ((undefined4 *)param_1[uVar2 * 7 + 9] != (undefined4 *)0x0) {
      FUN_1004b3d7((int)(param_1 + uVar2 * 7 + 3),(undefined4 *)param_1[uVar2 * 7 + 9]);
      param_1[uVar2 * 7 + 9] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  *param_1 = &PTR_FUN_1005f584;
  FUN_1005c76c(param_1);
  LeaveCriticalSection(DAT_1006bbd0);
  return;
}

