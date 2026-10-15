/*
 * FUN_1801baa50 at 1801baa50
 * undefined FUN_1801baa50(void)
 * Address ranges: 1801baa50-1801baaef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801baa50(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_1801b91a0();
  if ((puVar1 != (undefined8 *)0x0) &&
     (lVar2 = FUN_1802036a0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)*puVar1),
     lVar2 == 0 || lVar2 == param_1)) {
    FUN_180203780(*(undefined8 *)(param_1 + 0x20),*puVar1,0,0);
    FUN_1801b91f0(param_1,*(undefined4 *)((longlong)puVar1 + 0x1c),0);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(param_1 + (ulonglong)*(uint *)((longlong)puVar1 + 0x1c) * 0xc18 + 0x100c0,
                        param_1 + 0x1c240,0xc00);
  }
  return 0;
}

