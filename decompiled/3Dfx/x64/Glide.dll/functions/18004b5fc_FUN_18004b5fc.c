/*
 * FUN_18004b5fc at 18004b5fc
 * undefined8 __fastcall FUN_18004b5fc(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18004b5fc-18004b72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004b5fc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_res10 [2];
  int local_res18 [4];
  
  *(uint *)(param_2 + 0x28) =
       (uint)(*(longlong *)(param_2 + 0x20) == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xda8))
  ;
  FUN_18004d0e4(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180061010,param_4,-1);
  FUN_18004d158(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180061178,0);
  FUN_18004d2d0(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (uint *)&DAT_180061150);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(lVar1 + 0x7d8);
  FUN_18004d7a4(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),5,lVar3,
                *(longlong *)(lVar1 + 0x7c8),*(longlong *)(lVar1 + 0x678));
  FUN_18004d594(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),1,lVar3,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e0));
  local_res18[0] = 0x10;
  local_res10[0] = 0;
  FUN_18004d688(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,lVar3,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e8),local_res18,local_res10);
  uVar2 = FUN_18004d738(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,0);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

