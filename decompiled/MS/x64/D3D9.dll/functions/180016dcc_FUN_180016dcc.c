/*
 * FUN_180016dcc at 180016dcc
 * undefined8 __fastcall FUN_180016dcc(longlong param_1, uint * param_2)
 * Address ranges: 180016dcc-180016e56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180016dcc(longlong param_1,uint *param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_res10 [6];
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    FUN_180003b0c(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xe28),*(uint *)(param_1 + 0xe8),
                  &local_18);
    local_res10[0] = 0;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0xa8))
                      (*(longlong **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x10),local_18,
                       local_14,local_res10);
    *param_2 = (uint)(cVar1 != '\0');
    param_2[1] = -(uint)(*(char *)(param_1 + 0xfb) != '\0') & local_res10[0];
    uVar2 = 0;
  }
  return uVar2;
}

