/*
 * FUN_1001b730 at 1001b730
 * undefined __fastcall FUN_1001b730(undefined4 * param_1)
 * Address ranges: 1001b730-1001b76f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001b730(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      puVar1 = (undefined4 *)&DAT_00000004;
      goto LAB_1001b751;
    }
    do {
      puVar1 = (undefined4 *)((uVar2 << 4 | 0xc) + param_1[1]);
LAB_1001b751:
      FUN_1005c76c((LPVOID)*puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[2]);
  }
  FUN_10023710(param_1);
  return;
}

