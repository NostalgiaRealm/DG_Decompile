/*
 * FUN_1800a2624 at 1800a2624
 * undefined8 * __fastcall FUN_1800a2624(undefined8 * param_1, longlong param_2, uint param_3, undefined4 param_4, undefined4 param_5, uint param_6, uint param_7, int param_8, uint param_9, undefined1 param_10)
 * Address ranges: 1800a2624-1800a2791
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800a2624(undefined8 *param_1,longlong param_2,uint param_3,undefined4 param_4,
             undefined4 param_5,uint param_6,uint param_7,int param_8,uint param_9,
             undefined1 param_10)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_stack_fffffffffffffff0;
  
  FUN_1800ac434(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                CONCAT31((int3)((uint)in_stack_fffffffffffffff0 >> 8),param_10));
  *param_1 = &PTR_D3DPERF_GetStatus_180103858;
  lVar1 = *(longlong *)(param_2 + 0x1cf10);
  lVar3 = (ulonglong)param_3 * 0x1ac0;
  param_1[10] = lVar1;
  lVar2 = *(longlong *)(param_2 + 0x1cf10);
  param_1[0xc] = lVar2;
  *(uint *)(param_1 + 0xd) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(longlong *)((longlong)param_1 + 0x6c) = lVar2 + 0x900 + lVar3;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  lVar2 = *(longlong *)(param_2 + 0x1cf10);
  param_1[0x16] = lVar2;
  *(uint *)(param_1 + 0x17) = param_3;
  *(longlong *)((longlong)param_1 + 0xbc) = lVar2 + 0x900 + lVar3;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0xb] = lVar1 + 0x900 + lVar3;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}

