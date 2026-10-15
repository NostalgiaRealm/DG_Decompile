/*
 * FUN_1000b188 at 1000b188
 * undefined __fastcall FUN_1000b188(int * param_1)
 * Address ranges: 1000b188-1000b1cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b188(int *param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  
  uVar2 = 5;
  if (param_1[0xd] == 0) {
    uVar2 = 7;
  }
  if (((uVar2 < *(uint *)(&DAT_10062820 + param_1[7] * 4)) || (param_1[10] != 0)) &&
     (cVar1 = FUN_10006992(param_1[0xd]), cVar1 == '\0')) {
    FUN_1000b84c(extraout_ECX);
    return;
  }
  FUN_1000b79f(param_1);
  return;
}

