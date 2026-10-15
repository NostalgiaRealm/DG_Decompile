/*
 * FUN_10041880 at 10041880
 * undefined FUN_10041880(void)
 * Address ranges: 10041880-100418cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10041880(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x14c) * 0x1510 + 0x520);
  *(bool *)param_2 = 0xafff < iVar1;
  *(bool *)(param_2 + 1) = 0xa0ff < iVar1;
  return param_2;
}

