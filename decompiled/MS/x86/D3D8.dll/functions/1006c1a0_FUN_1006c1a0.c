/*
 * FUN_1006c1a0 at 1006c1a0
 * undefined __fastcall FUN_1006c1a0(int * param_1)
 * Address ranges: 1006c1a0-1006c1e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1006c1a0(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 5;
  if (param_1[0xd] == 0) {
    uVar2 = 7;
  }
  if (((uVar2 < *(uint *)(&DAT_100b04f0 + param_1[7] * 4)) || (param_1[10] != 0)) &&
     (cVar1 = FUN_100306bf(param_1[0xd]), cVar1 == '\0')) {
    FUN_1006e325(param_1);
    return;
  }
  FUN_1006e27c(param_1);
  return;
}

