/*
 * FUN_1009c94a at 1009c94a
 * undefined __fastcall FUN_1009c94a(undefined4 * param_1)
 * Address ranges: 1009c94a-1009c9c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009c94a(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[4] + 0xdd0) >> 2) & 1);
  iVar1 = param_1[4];
  local_c = param_1;
  puVar2 = (uint *)FUN_1009c076((void *)(iVar1 + 0x6764),(uint *)&local_c);
  if (puVar2 != (uint *)0x0) {
    FUN_1009bd61((void *)(iVar1 + 0x6750),puVar2);
  }
  thunk_FUN_100cfd6c((LPVOID)param_1[7]);
  param_1[7] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_100d7028;
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

