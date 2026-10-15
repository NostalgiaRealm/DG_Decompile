/*
 * FUN_1800f3338 at 1800f3338
 * undefined8 __fastcall FUN_1800f3338(longlong param_1, ulonglong param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7)
 * Address ranges: 1800f3338-1800f3384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800f3338(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_res8 [4];
  undefined8 in_stack_ffffffffffffffe0;
  
  local_res8[0] = 0;
  FUN_1800e1fc8(param_1 + 0x6d0,param_2,param_3,param_4,param_5,0,param_7,in_stack_ffffffffffffffe0,
                local_res8);
  return local_res8[0];
}

