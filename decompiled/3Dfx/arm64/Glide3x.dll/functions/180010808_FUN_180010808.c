/*
 * FUN_180010808 at 180010808
 * undefined __cdecl FUN_180010808(longlong param_1, int param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 180010808-180010897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010808(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int local_20 [4];
  
  FUN_1800543b8(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),param_2,
                param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x44dc) == '\0') {
    local_20[0] = 0;
    local_20[1] = 0x50;
    FUN_1800542d8(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  *(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),0,param_3,
                  (longlong *)(param_1 + 0x4520),local_20 + 1,local_20);
    FUN_180054360(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  *(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),
                  *(longlong *)(param_1 + 0x4528),0x2a);
    *(undefined1 *)(param_1 + 0x44dc) = 1;
  }
  return;
}

