/*
 * FUN_100083b8 at 100083b8
 * int * __fastcall FUN_100083b8(int * param_1)
 * Address ranges: 100083b8-10008458
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_100083b8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0xe;
  local_8 = 0xe;
  piVar1 = param_1;
  do {
    FUN_10013705(piVar1);
    piVar1 = piVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = param_1 + 0xe0;
  do {
    FUN_10013705(piVar1);
    piVar1 = piVar1 + 0x10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_10013705(param_1 + 0x1c0);
  FUN_10013705(param_1 + 0x1d0);
  FUN_10013705(param_1 + 0x1e0);
  FUN_10013705(param_1 + 0x1f0);
  FUN_10013705(param_1 + 0x200);
  FUN_10013705(param_1 + 0x210);
  FUN_10013705(param_1 + 0x220);
  FUN_10013705(param_1 + 0x230);
  FUN_10013705(param_1 + 0x240);
  return param_1;
}

