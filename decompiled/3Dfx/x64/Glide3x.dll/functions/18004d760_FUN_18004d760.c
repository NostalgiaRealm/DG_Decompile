/*
 * FUN_18004d760 at 18004d760
 * undefined8 __fastcall FUN_18004d760(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18004d760-18004d893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004d760(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_res10 [2];
  int local_res18 [4];
  
  *(uint *)(param_2 + 0x28) =
       (uint)(*(longlong *)(param_2 + 0x20) == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xda8))
  ;
  FUN_18004f248(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180062e50,param_4,-1);
  FUN_18004f2bc(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180062fb8,0);
  FUN_18004f434(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (uint *)&DAT_180062f90);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(lVar1 + 0x7d8);
  FUN_18004f908(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),5,lVar3,
                *(longlong *)(lVar1 + 0x7c8),*(longlong *)(lVar1 + 0x678));
  FUN_18004f6f8(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),1,lVar3,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e0));
  local_res18[0] = 0x10;
  local_res10[0] = 0;
  FUN_18004f7ec(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,lVar3,
                (longlong *)(*(longlong *)(param_2 + 8) + 0x7e8),local_res18,local_res10);
  uVar2 = FUN_18004f89c(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,0);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

