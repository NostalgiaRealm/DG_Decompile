/*
 * FUN_10019f55 at 10019f55
 * int * __fastcall FUN_10019f55(int * param_1)
 * Address ranges: 10019f55-10019ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_10019f55(int *param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0x10a;
  local_8 = 0x10a;
  piVar1 = param_1;
  do {
    FUN_100289c6(piVar1);
    piVar1 = piVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = param_1 + 0x10a0;
  do {
    FUN_100289c6(piVar1);
    piVar1 = piVar1 + 0x10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_100289c6(param_1 + 0x2140);
  FUN_100289c6(param_1 + 0x2150);
  FUN_100289c6(param_1 + 0x2160);
  FUN_100289c6(param_1 + 0x2170);
  FUN_100289c6(param_1 + 0x2180);
  FUN_100289c6(param_1 + 0x2190);
  FUN_100289c6(param_1 + 0x21a0);
  FUN_100289c6(param_1 + 0x21b0);
  FUN_100289c6(param_1 + 0x21c0);
  return param_1;
}

