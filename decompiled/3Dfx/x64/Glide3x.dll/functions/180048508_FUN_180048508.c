/*
 * FUN_180048508 at 180048508
 * undefined8 __fastcall FUN_180048508(longlong param_1, ulonglong param_2, undefined8 param_3)
 * Address ranges: 180048508-18004858c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180048508(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  int local_28;
  uint local_24;
  uint local_20;
  undefined8 local_1c;
  
  cVar1 = *(char *)((param_2 & 0xffffffff) * 0x20 + 0x18 + param_1);
  local_28 = (-(uint)(cVar1 != '\0') & 3) + 1;
  local_24 = -(uint)(cVar1 != '\0') & 2;
  local_1c = 0;
  local_res8[0] = 0;
  local_20 = (uint)(cVar1 != '\0');
  FUN_1800483a8(param_1,param_2,&local_28,0,param_3,0,in_stack_ffffffffffffffb8,
                in_stack_ffffffffffffffc0,local_res8);
  return local_res8[0];
}

