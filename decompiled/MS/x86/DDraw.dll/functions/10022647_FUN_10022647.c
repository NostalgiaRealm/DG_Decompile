/*
 * FUN_10022647 at 10022647
 * undefined4 * __fastcall FUN_10022647(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 10022647-100226a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10022647(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10060bca(0x414);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_10064620;
    puVar1[1] = param_1;
    puVar1[2] = 1;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
    FUN_10029761((uint)puVar1,0,0,0x100,param_4);
  }
  return puVar1;
}

