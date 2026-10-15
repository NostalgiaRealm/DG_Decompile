/*
 * FUN_10013500 at 10013500
 * undefined FUN_10013500(void)
 * Address ranges: 10013500-100135e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10013500(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  ulonglong extraout_x12;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = FUN_10012968(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                          *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0);
  FUN_10012d90(param_1,local_28 & 0xffffffff);
  local_30 = FUN_10012968(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                          *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0);
  FUN_10012d90(param_1,local_30 & 0xffffffff);
  FUN_10013350(param_1,param_2,&local_28,&local_30,param_4);
  FUN_10012d60(param_1,local_30 & 0xffffffff);
  FUN_10012d60(param_1,local_28 & 0xffffffff);
  return extraout_x12 & 0xffffffff;
}

