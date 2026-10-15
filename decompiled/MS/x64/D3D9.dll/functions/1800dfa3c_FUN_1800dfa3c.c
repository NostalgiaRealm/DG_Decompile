/*
 * FUN_1800dfa3c at 1800dfa3c
 * undefined __fastcall FUN_1800dfa3c(undefined8 param_1, longlong param_2)
 * Address ranges: 1800dfa3c-1800dfa8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dfa3c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *local_res8 [4];
  
  if (*(int *)(param_2 + 0x34) == 2) {
    local_res8[0] = (longlong *)0x0;
    iVar1 = (**(code **)**(undefined8 **)(param_2 + 8))
                      (*(undefined8 **)(param_2 + 8),&DAT_1800fd7c0,local_res8);
    if (-1 < iVar1) {
      (**(code **)(*local_res8[0] + 0x130))(local_res8[0],0xc);
      (**(code **)(*local_res8[0] + 0x10))();
    }
  }
  return;
}

