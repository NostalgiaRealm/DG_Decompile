/*
 * FUN_1800f2c34 at 1800f2c34
 * undefined __fastcall FUN_1800f2c34(longlong param_1, ulonglong param_2, int * param_3)
 * Address ranges: 1800f2c34-1800f2cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f2c34(longlong param_1,ulonglong param_2,int *param_3)

{
  char cVar1;
  longlong *plVar2;
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
  plVar2 = FUN_1800f3050(param_1 + 0x21b8 + (param_2 & 0xffffffff) * 0x1ac0,&local_28,0,param_3);
  if (plVar2 == (longlong *)0x0) {
    FUN_1800f3338(param_1,param_2 & 0xffffffff,&local_28,0,param_3,in_stack_ffffffffffffffc0,0);
  }
  return;
}

