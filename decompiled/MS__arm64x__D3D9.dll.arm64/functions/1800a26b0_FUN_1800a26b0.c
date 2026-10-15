/*
 * FUN_1800a26b0 at 1800a26b0
 * undefined FUN_1800a26b0(void)
 * Address ranges: 1800a26b0-1800a274f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800a26b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  uVar1 = 0;
  puVar2 = (undefined8 *)func_0x0001801b91a0();
  if ((puVar2 != (undefined8 *)0x0) &&
     (lVar3 = FUN_1800e62a0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)*puVar2),
     lVar3 == 0 || lVar3 == param_1)) {
    uVar1 = FUN_1800e63a0(*(undefined8 *)(param_1 + 0x20),*puVar2,0,0);
    FUN_1800a1058(param_1,*(undefined4 *)((longlong)puVar2 + 0x1c),0);
    thunk_FUN_180001218(param_1 + (ulonglong)*(uint *)((longlong)puVar2 + 0x1c) * 0xc18 + 0x100c0,
                        param_1 + 0x1c240,0xc00);
  }
  return uVar1;
}

