/*
 * FUN_10005fcf at 10005fcf
 * int __fastcall FUN_10005fcf(undefined4 * param_1)
 * Address ranges: 10005fcf-10006079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10005fcf(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[0x33] + -1;
  param_1[0x33] = iVar1;
  if (iVar1 == 0) {
    if (param_1[0x16] != 0) {
      uVar2 = 0;
      do {
        (**(code **)(**(int **)(param_1[0x15] + uVar2 * 4) + 0x10))();
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0x16]);
    }
    thunk_FUN_10060be1((LPVOID)param_1[0x15]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (((uint)param_1[0xd] >> 3 & 1) == 0) {
      FUN_100065ae(param_1);
    }
    FUN_10005a15((int)(param_1 + 0x13));
    if (((param_1[0x1b] == 0) && (param_1[0x1c] == 0)) && ((int *)param_1[0x14] != (int *)0x0)) {
      (**(code **)(*(int *)param_1[0x14] + 0x10))();
    }
    FUN_1000650e((int)param_1);
    FUN_10005fa9(param_1);
    FUN_10060be1(param_1);
  }
  return iVar1;
}

