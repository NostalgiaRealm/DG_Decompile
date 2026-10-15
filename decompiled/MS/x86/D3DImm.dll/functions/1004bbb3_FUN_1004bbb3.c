/*
 * FUN_1004bbb3 at 1004bbb3
 * undefined __fastcall FUN_1004bbb3(undefined4 * param_1)
 * Address ranges: 1004bbb3-1004bc2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004bbb3(undefined4 *param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  if (*(void **)(param_1[0x1a] + 0xc) != (void *)0x0) {
    FUN_1004968d(*(void **)(param_1[0x1a] + 0xc),(int)param_1);
  }
  FUN_1004b87c((int)param_1);
  uVar2 = 0;
  do {
    if ((undefined4 *)param_1[uVar2 * 7 + 0x10] != (undefined4 *)0x0) {
      FUN_1004b9bd((int)(param_1 + uVar2 * 7 + 10),(undefined4 *)param_1[uVar2 * 7 + 0x10]);
      param_1[uVar2 * 7 + 0x10] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  FUN_1004b81c(param_1);
  FUN_1005c76c(param_1);
  LeaveCriticalSection(DAT_1006bbd0);
  return;
}

