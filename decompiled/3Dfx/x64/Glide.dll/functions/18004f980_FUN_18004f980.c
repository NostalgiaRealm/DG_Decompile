/*
 * FUN_18004f980 at 18004f980
 * undefined __fastcall FUN_18004f980(undefined8 param_1, longlong param_2)
 * Address ranges: 18004f980-18004f9d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f980(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *local_res8 [4];
  
  if (*(int *)(param_2 + 0x34) == 2) {
    local_res8[0] = (longlong *)0x0;
    iVar1 = (**(code **)**(undefined8 **)(param_2 + 8))
                      (*(undefined8 **)(param_2 + 8),&DAT_180060570,local_res8);
    if (-1 < iVar1) {
      (**(code **)(*local_res8[0] + 0x130))(local_res8[0],0xc);
      (**(code **)(*local_res8[0] + 0x10))();
    }
  }
  return;
}

