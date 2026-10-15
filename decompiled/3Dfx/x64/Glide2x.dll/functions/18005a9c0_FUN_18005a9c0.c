/*
 * FUN_18005a9c0 at 18005a9c0
 * longlong * __fastcall FUN_18005a9c0(longlong param_1, ulonglong param_2, int * param_3)
 * Address ranges: 18005a9c0-18005aa91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18005a9c0(longlong param_1,ulonglong param_2,int *param_3)

{
  char cVar1;
  longlong *local_res8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  int local_28;
  uint local_24;
  uint local_20;
  undefined8 local_1c;
  
  cVar1 = *(char *)((param_2 & 0xffffffff) * 0x20 + 0x6e8 + param_1);
  local_28 = (-(uint)(cVar1 != '\0') & 3) + 1;
  local_24 = -(uint)(cVar1 != '\0') & 2;
  local_20 = (uint)(cVar1 != '\0');
  local_1c = 0;
  local_res8 = FUN_1800587c4(param_1 + 0x21b8 + (param_2 & 0xffffffff) * 0x1ac0,&local_28,0,param_3)
  ;
  if (local_res8 == (longlong *)0x0) {
    FUN_180045d9c(param_1 + 0x6d0,param_2 & 0xffffffff,&local_28,0,param_3,0,
                  in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,&local_res8);
  }
  return local_res8;
}

