/*
 * FUN_100d3a00 at 100d3a00
 * undefined FUN_100d3a00(void)
 * Address ranges: 100d3a00-100d3a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d3a00(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_1 + (param_3 + param_2 * 0xe) * 4;
  if (param_2 < 0x100) {
    if (*(int *)(iVar1 + 0x68e8) != param_4) {
      FUN_100d3aa0(param_1,param_2,param_3,param_4);
      *(int *)(iVar1 + 0x68e8) = param_4;
    }
  }
  else if ((*(int *)(iVar1 + 0x3468) != param_4) && ((param_4 != 3 || (2 < param_3 - 5U)))) {
    FUN_100d3aa0(param_1,param_2,param_3,param_4);
    *(int *)(iVar1 + 0x3468) = param_4;
  }
  return;
}

