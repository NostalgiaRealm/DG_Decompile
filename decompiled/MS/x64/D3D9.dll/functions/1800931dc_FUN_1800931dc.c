/*
 * FUN_1800931dc at 1800931dc
 * undefined8 * __fastcall FUN_1800931dc(undefined8 * param_1, longlong param_2, uint param_3, undefined4 param_4, undefined4 param_5, uint param_6, uint param_7, int param_8, uint param_9, undefined1 param_10)
 * Address ranges: 1800931dc-1800932fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800931dc(undefined8 *param_1,longlong param_2,uint param_3,undefined4 param_4,
             undefined4 param_5,uint param_6,uint param_7,int param_8,uint param_9,
             undefined1 param_10)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 in_stack_fffffffffffffff0;
  
  FUN_1800ac434(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                CONCAT31((int3)((uint)in_stack_fffffffffffffff0 >> 8),param_10));
  lVar3 = (ulonglong)param_3 * 0x18c0;
  *param_1 = &PTR_D3DPERF_GetStatus_180103070;
  lVar1 = *(longlong *)(param_2 + 0x1cf10);
  param_1[10] = lVar1;
  lVar2 = *(longlong *)(param_2 + 0x1cf10);
  param_1[0xc] = lVar2;
  *(uint *)(param_1 + 0xd) = param_3;
  param_1[0xf] = 0;
  param_1[0xe] = lVar2 + 0x6b0 + lVar3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar2 = *(longlong *)(param_2 + 0x1cf10);
  param_1[0x14] = lVar2;
  *(uint *)(param_1 + 0x15) = param_3;
  param_1[0x16] = lVar2 + 0x6b0 + lVar3;
  param_1[0x17] = 0;
  param_1[0xb] = lVar1 + 0x6b0 + lVar3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}

