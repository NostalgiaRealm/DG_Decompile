/*
 * FUN_10051e6a at 10051e6a
 * undefined __fastcall FUN_10051e6a(undefined4 * param_1)
 * Address ranges: 10051e6a-10051ecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10051e6a(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = param_1 + 3;
  *param_1 = &PTR_FUN_10066a64;
  if (param_1[4] != 0) {
    FUN_10051f7b(param_1,param_1[6]);
    uVar3 = 0;
    if (param_1[4] != 0) {
      do {
        piVar2 = *(int **)(*piVar1 + 0xc + uVar3 * 0x20);
        (**(code **)(*piVar2 + 8))(piVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[4]);
    }
    thunk_FUN_10060be1((LPVOID)*piVar1);
    *piVar1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    CloseHandle((HANDLE)param_1[0xb]);
    param_1[0xb] = 0;
  }
  thunk_FUN_10060be1((LPVOID)*piVar1);
  return;
}

