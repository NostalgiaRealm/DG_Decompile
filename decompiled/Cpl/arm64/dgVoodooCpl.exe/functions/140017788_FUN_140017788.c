/*
 * FUN_140017788 at 140017788
 * undefined4 * __cdecl FUN_140017788(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 140017788-140017863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_140017788(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  SIZE_T SVar4;
  
  *param_1 = *param_2;
  thunk_FUN_140024830(*(LPVOID *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = CONCAT44(0,param_2[5]);
    SVar4 = CONCAT44(0,param_2[5]) << 2;
    if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
      SVar4 = 0xffffffffffffffff;
    }
    puVar3 = (undefined8 *)thunk_FUN_1400247f0(SVar4);
    *(undefined8 **)(param_1 + 2) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      thunk_FUN_140001000(puVar3,*(undefined8 **)(param_2 + 2),(ulonglong)(uint)param_2[4] << 2);
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
    }
  }
  thunk_FUN_140024830(*(LPVOID *)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2[8] != 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,param_2[9]);
    SVar4 = CONCAT44(0,param_2[9]) << 3;
    if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
      SVar4 = 0xffffffffffffffff;
    }
    puVar3 = (undefined8 *)thunk_FUN_1400247f0(SVar4);
    *(undefined8 **)(param_1 + 6) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      thunk_FUN_140001000(puVar3,*(undefined8 **)(param_2 + 6),(ulonglong)(uint)param_2[8] << 3);
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
    }
  }
  return param_1;
}

