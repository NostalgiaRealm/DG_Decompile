/*
 * FUN_1003067f at 1003067f
 * undefined __fastcall FUN_1003067f(undefined4 * param_1)
 * Address ranges: 1003067f-100306be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003067f(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      puVar1 = (undefined4 *)&DAT_00000004;
      goto LAB_100306a0;
    }
    do {
      puVar1 = (undefined4 *)((uVar2 << 4 | 0xc) + param_1[1]);
LAB_100306a0:
      FUN_100ad48c((LPVOID)*puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[2]);
  }
  FUN_100388b0(param_1);
  return;
}

