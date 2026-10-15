/*
 * FUN_180047b38 at 180047b38
 * undefined8 __fastcall FUN_180047b38(longlong param_1)
 * Address ranges: 180047b38-180047bf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180047b38(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0xb50) == -1) {
    uVar3 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xb48) = *(longlong *)(param_1 + 0xb48) + 1;
    uVar3 = *(undefined8 *)(param_1 + 0xb48);
    FUN_180047208(param_1);
    FUN_180047348(param_1);
    uVar2 = *(uint *)(param_1 + 0xb50);
    local_18 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb40) + 0x10) + 0x58))();
    uVar1 = (ulonglong)uVar2 * 8;
    local_20 = (undefined4)uVar3;
    local_28 = local_18 + uVar1;
    local_18 = (uVar1 | 4) + local_18;
    local_10 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_res8 = 2;
    local_resc = 2;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x210))
              (*(longlong **)(param_1 + 0x688),2,&local_28,&local_res8);
  }
  return uVar3;
}

