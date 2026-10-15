/*
 * FUN_180052700 at 180052700
 * undefined8 __cdecl FUN_180052700(ulonglong param_1, longlong param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180052700-180052803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180052700(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int local_30 [4];
  
  *(uint *)(param_2 + 0x28) =
       (uint)(*(longlong *)(param_2 + 0x20) == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xda8))
  ;
  FUN_180053700(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180065db0,param_4,-1);
  FUN_1800539b0(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180065f20,0);
  FUN_180053c88(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (uint *)&DAT_180065ef8);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x7d8);
  FUN_1800543b8(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),5,lVar2,
                *(longlong *)(lVar1 + 0x7c8),*(longlong *)(lVar1 + 0x678));
  FUN_180054210(param_1,*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),1,lVar2,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e0));
  local_30[0] = 0;
  local_30[1] = 0x10;
  FUN_1800542d8(param_1,*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,lVar2,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e8),local_30 + 1,local_30);
  FUN_180054360(param_1,*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,0);
  return 1;
}

