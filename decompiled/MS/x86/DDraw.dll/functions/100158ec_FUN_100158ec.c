/*
 * FUN_100158ec at 100158ec
 * undefined __fastcall FUN_100158ec(int * param_1)
 * Address ranges: 100158ec-1001592e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100158ec(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 5;
  if (param_1[0xd] == 0) {
    uVar2 = 7;
  }
  if (((uVar2 < *(uint *)(&DAT_10062820 + param_1[7] * 4)) || (param_1[10] != 0)) &&
     (cVar1 = FUN_10006992(param_1[0xd]), cVar1 == '\0')) {
    FUN_10017a6f(param_1);
    return;
  }
  FUN_100179c6(param_1);
  return;
}

