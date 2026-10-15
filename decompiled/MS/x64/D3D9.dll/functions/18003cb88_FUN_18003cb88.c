/*
 * FUN_18003cb88 at 18003cb88
 * uint __fastcall FUN_18003cb88(longlong param_1, int param_2)
 * Address ranges: 18003cb88-18003cc11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003cb88(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar3 = (undefined8 *)
           (*(longlong *)(param_1 + 8) + 0x6b0 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0);
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  if (param_2 == 8) {
    local_res8 = 0;
  }
  else if (param_2 == 9) {
    local_res8 = 1;
  }
  else if (param_2 == 10) {
    local_res8 = 2;
  }
  else if ((param_2 == 0xb) || (param_2 == 0xc)) {
    local_res8 = 3;
  }
  local_resc = 0;
  plVar1 = (longlong *)*puVar3;
  uVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1,&local_res8,param_1 + 0x20);
  return uVar2 >> 0x1f ^ 1;
}

