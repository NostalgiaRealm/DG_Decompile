/*
 * FUN_14001623c at 14001623c
 * undefined4 * __fastcall FUN_14001623c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 14001623c-140016327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_14001623c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  FUN_140024260(*(LPVOID *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    uVar1 = SUB168(ZEXT416(4) * ZEXT416((uint)param_2[5]),0);
    if (SUB168(ZEXT416(4) * ZEXT416((uint)param_2[5]),8) != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    puVar2 = (undefined8 *)thunk_FUN_14002423c(uVar1);
    *(undefined8 **)(param_1 + 2) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140024620(puVar2,*(undefined8 **)(param_2 + 2),(ulonglong)(uint)param_2[4] << 2);
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
    }
  }
  FUN_140024260(*(LPVOID *)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2[8] != 0) {
    uVar1 = SUB168(ZEXT816(8) * ZEXT416((uint)param_2[9]),0);
    if (SUB168(ZEXT816(8) * ZEXT416((uint)param_2[9]),8) != 0) {
      uVar1 = 0xffffffffffffffff;
    }
    puVar2 = (undefined8 *)thunk_FUN_14002423c(uVar1);
    *(undefined8 **)(param_1 + 6) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140024620(puVar2,*(undefined8 **)(param_2 + 6),(ulonglong)(uint)param_2[8] << 3);
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
    }
  }
  return param_1;
}

