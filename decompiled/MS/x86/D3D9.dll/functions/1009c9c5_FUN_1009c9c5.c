/*
 * FUN_1009c9c5 at 1009c9c5
 * undefined __fastcall FUN_1009c9c5(undefined4 * param_1)
 * Address ranges: 1009c9c5-1009c9d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009c9c5(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  
  LOCK();
  piVar1 = param_1 + 2;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1[1] + iVar2 + -1 != 0) {
    return;
  }
  puStack_c = param_1;
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[4] + 0xdd0) >> 2) & 1);
  iVar2 = param_1[4];
  puStack_c = param_1;
  puVar3 = (uint *)FUN_1009c076((void *)(iVar2 + 0x6764),(uint *)&puStack_c);
  if (puVar3 != (uint *)0x0) {
    FUN_1009bd61((void *)(iVar2 + 0x6750),puVar3);
  }
  thunk_FUN_100cfd6c((LPVOID)param_1[7]);
  param_1[7] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_100d7028;
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

