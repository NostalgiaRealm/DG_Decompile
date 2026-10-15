/*
 * FUN_180051ae4 at 180051ae4
 * undefined __fastcall FUN_180051ae4(undefined8 param_1, longlong param_2)
 * Address ranges: 180051ae4-180051b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051ae4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *local_res8 [4];
  
  if (*(int *)(param_2 + 0x34) == 2) {
    local_res8[0] = (longlong *)0x0;
    iVar1 = (**(code **)**(undefined8 **)(param_2 + 8))
                      (*(undefined8 **)(param_2 + 8),&DAT_180062570,local_res8);
    if (-1 < iVar1) {
      (**(code **)(*local_res8[0] + 0x130))(local_res8[0],0xc);
      (**(code **)(*local_res8[0] + 0x10))();
    }
  }
  return;
}

