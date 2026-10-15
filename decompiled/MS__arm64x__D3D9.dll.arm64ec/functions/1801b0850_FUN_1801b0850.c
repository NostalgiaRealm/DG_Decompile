/*
 * FUN_1801b0850 at 1801b0850
 * undefined FUN_1801b0850(void)
 * Address ranges: 1801b0850-1801b091f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1801b0850(undefined8 *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1801baed8();
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022d478;
  lVar2 = *(longlong *)(param_2 + 0x1cf10);
  param_1[10] = lVar2;
  lVar1 = *(longlong *)(param_2 + 0x1cf10);
  *(uint *)(param_1 + 0xd) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffffffffffff;
  param_1[0xc] = lVar1;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(ulonglong *)((longlong)param_1 + 0x6c) = lVar1 + (ulonglong)param_3 * 0x1ac0 + 0x900;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  lVar1 = *(longlong *)(param_2 + 0x1cf10);
  *(uint *)(param_1 + 0x17) = param_3;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffffffffffff;
  param_1[0x16] = lVar1;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(ulonglong *)((longlong)param_1 + 0xbc) = lVar1 + (ulonglong)param_3 * 0x1ac0 + 0x900;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0xb] = lVar2 + (ulonglong)param_3 * 0x1ac0 + 0x900;
  return param_1;
}

