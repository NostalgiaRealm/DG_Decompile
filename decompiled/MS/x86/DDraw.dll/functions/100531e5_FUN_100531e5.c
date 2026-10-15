/*
 * FUN_100531e5 at 100531e5
 * undefined __stdcall FUN_100531e5(int param_1, int param_2)
 * Address ranges: 100531e5-1005322b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100531e5(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x78))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_10060d45((int *)(param_1 + 0x38),0,0x100);
  }
  return;
}

