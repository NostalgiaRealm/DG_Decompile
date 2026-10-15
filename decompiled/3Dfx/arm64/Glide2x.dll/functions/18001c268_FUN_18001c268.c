/*
 * FUN_18001c268 at 18001c268
 * undefined __cdecl FUN_18001c268(longlong param_1, int param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 18001c268-18001c2f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c268(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int local_20 [4];
  
  FUN_180050828(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),param_2,
                param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x3b3c) == '\0') {
    local_20[0] = 0;
    local_20[1] = 0x3c;
    FUN_180050748(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  *(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),0,param_3,
                  (longlong *)(param_1 + 0x3b70),local_20 + 1,local_20);
    FUN_1800507d0(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  *(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),
                  *(longlong *)(param_1 + 0x3b78),0x2a);
    *(undefined1 *)(param_1 + 0x3b3c) = 1;
  }
  return;
}

