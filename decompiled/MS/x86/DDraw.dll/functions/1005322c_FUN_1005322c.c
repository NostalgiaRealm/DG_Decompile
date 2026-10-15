/*
 * FUN_1005322c at 1005322c
 * undefined __stdcall FUN_1005322c(int param_1, int param_2)
 * Address ranges: 1005322c-1005326e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005322c(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x74))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x14) = param_2;
    FUN_10060d45((int *)(param_1 + 0x138),0,0x100);
  }
  return;
}

