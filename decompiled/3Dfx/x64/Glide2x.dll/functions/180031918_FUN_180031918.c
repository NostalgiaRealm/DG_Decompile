/*
 * FUN_180031918 at 180031918
 * undefined __fastcall FUN_180031918(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180031918-180031992
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031918(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_res8 [2];
  longlong local_res10 [3];
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    local_res10[0] = 0;
    local_res8[0] = 0;
    FUN_18004d1e0(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8),0,param_4,local_res10
                  ,local_res8,local_res8);
    FUN_18004d290(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8),0,0x2a);
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}

