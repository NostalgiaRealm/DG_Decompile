/*
 * FUN_1004fb47 at 1004fb47
 * int * __fastcall FUN_1004fb47(SIZE_T param_1, undefined4 * param_2)
 * Address ranges: 1004fb47-1004fbaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1004fb47(SIZE_T param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_10060bca(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_FUN_10066958;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    puVar2 = (undefined4 *)FUN_10060bfe(param_1);
    piVar1[2] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1[1] = param_1;
      FUN_10060d80(puVar2,param_2,param_1);
      (**(code **)(*piVar1 + 4))(piVar1);
      return piVar1;
    }
    *piVar1 = (int)&PTR_FUN_10066958;
    thunk_FUN_10060be1((LPVOID)0x0);
    FUN_10060be1(piVar1);
  }
  return (int *)0x0;
}

