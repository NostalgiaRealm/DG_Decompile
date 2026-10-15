/*
 * FUN_10048c4a at 10048c4a
 * undefined __fastcall FUN_10048c4a(undefined4 * param_1)
 * Address ranges: 10048c4a-10048cd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048c4a(undefined4 *param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  if ((int *)param_1[0x24] == (int *)0x0) {
    *(undefined1 *)(param_1 + 0x7bf) = 0;
    FUN_100483bd(param_1);
    FUN_10048871((int)param_1);
    uVar2 = 0;
    do {
      if ((undefined4 *)param_1[uVar2 * 7 + 9] != (undefined4 *)0x0) {
        FUN_10048aac((int)(param_1 + uVar2 * 7 + 3),(undefined4 *)param_1[uVar2 * 7 + 9]);
        param_1[uVar2 * 7 + 9] = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    FUN_1004836d(param_1);
    FUN_1005c76c(param_1);
  }
  else {
    (**(code **)(*(int *)param_1[0x24] + 0x1c))();
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return;
}

