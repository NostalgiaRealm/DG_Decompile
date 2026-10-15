/*
 * FUN_1004c1f7 at 1004c1f7
 * undefined __fastcall FUN_1004c1f7(undefined4 * param_1)
 * Address ranges: 1004c1f7-1004c254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c1f7(undefined4 *param_1)

{
  uint uVar1;
  
  if (*(void **)(param_1[0x20] + 0xc) != (void *)0x0) {
    FUN_1004948f(*(void **)(param_1[0x20] + 0xc),(int)param_1);
  }
  FUN_1004bf77((int)param_1);
  uVar1 = 0;
  do {
    if ((undefined4 *)param_1[uVar1 * 7 + 9] != (undefined4 *)0x0) {
      FUN_1004c083((int)(param_1 + uVar1 * 7 + 3),(undefined4 *)param_1[uVar1 * 7 + 9]);
      param_1[uVar1 * 7 + 9] = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  FUN_1004bf54(param_1);
  FUN_1005c76c(param_1);
  return;
}

