/*
 * FUN_10061ff4 at 10061ff4
 * undefined __fastcall FUN_10061ff4(int * param_1)
 * Address ranges: 10061ff4-10062038
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10061ff4(int *param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  
  uVar2 = 5;
  if (param_1[0xd] == 0) {
    uVar2 = 7;
  }
  if (((uVar2 < *(uint *)(&DAT_100b04f0 + param_1[7] * 4)) || (param_1[10] != 0)) &&
     (cVar1 = FUN_100306bf(param_1[0xd]), cVar1 == '\0')) {
    FUN_100626b8(extraout_ECX);
    return;
  }
  FUN_1006260b(param_1);
  return;
}

