/*
 * FUN_18001231c at 18001231c
 * undefined4 * __fastcall FUN_18001231c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 18001231c-1800123a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18001231c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    uVar1 = SUB168(ZEXT816(4) * ZEXT416((uint)param_2[5]),0);
    if (SUB168(ZEXT816(4) * ZEXT416((uint)param_2[5]),8) != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    puVar2 = (undefined8 *)thunk_FUN_1800fbccc(uVar1);
    *(undefined8 **)(param_1 + 2) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1800fbec0(puVar2,*(undefined8 **)(param_2 + 2),(ulonglong)(uint)param_2[4] << 2);
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
    }
  }
  return param_1;
}

