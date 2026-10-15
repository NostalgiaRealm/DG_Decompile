/*
 * FUN_1800d9db0 at 1800d9db0
 * undefined8 __fastcall FUN_1800d9db0(longlong param_1, longlong param_2)
 * Address ranges: 1800d9db0-1800d9efa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800d9db0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  *(uint *)(param_2 + 0x28) =
       (uint)(*(longlong *)(param_2 + 0x20) == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xda8))
  ;
  FUN_1800dbbbc(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_1801001b0,(int *)0x0,-1,'\0');
  FUN_1800dbc90(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (int *)&DAT_180100350,0);
  FUN_1800dbe08(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),
                (uint *)&DAT_180100328);
  lVar1 = *(longlong *)(param_2 + 8);
  FUN_1800dc3ec(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),5,
                *(longlong *)(lVar1 + 0x7d8),*(longlong *)(lVar1 + 0x7c8),
                *(longlong *)(lVar1 + 0x678),0);
  FUN_1800dc148(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),1,1,
                *(longlong *)(param_2 + 8) + 0x7e0);
  local_res18[0] = 0x10;
  local_res10[0] = 0;
  FUN_1800dc288(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),local_res18,1,
                *(longlong *)(param_2 + 8) + 0x7e8,(longlong)local_res18,(longlong)local_res10);
  uVar2 = FUN_1800dc380(param_1,(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x10),0,0);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}

