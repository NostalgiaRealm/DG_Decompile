/*
 * FUN_18004f9c0 at 18004f9c0
 * undefined8 __cdecl FUN_18004f9c0(ulonglong param_1, longlong param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18004f9c0-18004fac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004f9c0(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int local_30 [4];
  
  *(uint *)(param_2 + 0x28) =
       (uint)(*(longlong *)(param_2 + 0x20) == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xda8))
  ;
  FUN_1800509c0(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180062fb0,param_4,-1);
  FUN_180050c70(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180063120,0);
  FUN_180050f48(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (uint *)&DAT_1800630f8);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x7d8);
  FUN_180051678(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),5,lVar2,
                *(longlong *)(lVar1 + 0x7c8),*(longlong *)(lVar1 + 0x678));
  FUN_1800514d0(param_1,*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),1,lVar2,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e0));
  local_30[0] = 0;
  local_30[1] = 0x10;
  FUN_180051598(param_1,*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,lVar2,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e8),local_30 + 1,local_30);
  FUN_180051620(param_1,*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,0);
  return 1;
}

