/*
 * FUN_18001c07c at 18001c07c
 * undefined __fastcall FUN_18001c07c(longlong param_1, int param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 18001c07c-18001c136
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c07c(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int local_res8 [8];
  int local_18 [4];
  
  FUN_18004d2fc(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),param_2,
                param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x3b3c) == '\0') {
    local_18[0] = 0x3c;
    local_res8[0] = 0;
    FUN_18004d1e0(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),0,param_3,
                  (longlong *)(param_1 + 0x3b70),local_18,local_res8);
    FUN_18004d290(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),
                  *(longlong *)(param_1 + 0x3b78),0x2a);
    *(undefined1 *)(param_1 + 0x3b3c) = 1;
  }
  return;
}

