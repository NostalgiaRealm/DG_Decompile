/*
 * FUN_18000ef08 at 18000ef08
 * undefined __fastcall FUN_18000ef08(longlong param_1, int param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 18000ef08-18000efc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ef08(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int local_res8 [8];
  int local_18 [4];
  
  FUN_18004f908(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),param_2,
                param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x44dc) == '\0') {
    local_18[0] = 0x50;
    local_res8[0] = 0;
    FUN_18004f7ec(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),0,param_3,
                  (longlong *)(param_1 + 0x4520),local_18,local_res8);
    FUN_18004f89c(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),
                  *(longlong *)(param_1 + 0x4528),0x2a);
    *(undefined1 *)(param_1 + 0x44dc) = 1;
  }
  return;
}

