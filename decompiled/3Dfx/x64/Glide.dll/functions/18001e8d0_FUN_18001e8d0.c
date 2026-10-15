/*
 * FUN_18001e8d0 at 18001e8d0
 * uint * __fastcall FUN_18001e8d0(longlong param_1, uint * param_2, uint param_3, longlong param_4)
 * Address ranges: 18001e8d0-18001e922
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18001e8d0(longlong param_1,uint *param_2,uint param_3,longlong param_4)

{
  uint local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 in_stack_ffffffffffffffe8;
  
  local_res8 = *(uint *)(param_1 + 0xa8);
  local_resc = *(undefined4 *)(param_1 + 0xac);
  local_res10 = *(undefined4 *)(param_1 + 0x20 + (ulonglong)param_3 * 8);
  local_res14 = *(undefined4 *)(param_1 + 0x24 + (ulonglong)param_3 * 8);
  FUN_180040190((longlong *)(param_1 + 8),param_2,(undefined8 *)&local_res10,&local_res8,
                in_stack_ffffffffffffffe8,param_4);
  return param_2;
}

