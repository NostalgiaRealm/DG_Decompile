/*
 * FUN_180216d50 at 180216d50
 * undefined FUN_180216d50(void)
 * Address ranges: 180216d50-180216dab;180216dd8-180216dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180216d50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1802392b0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    lVar2 = FUN_1802229a8(param_1);
    puVar1[2] = lVar2;
    if (lVar2 != 0) {
      puVar1[1] = param_1;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar2,param_2,param_1);
    }
    *puVar1 = &PTR_FUN_1802392b0;
    FUN_1802229d8();
    FUN_1802229d8(puVar1,0x20);
  }
  return 0;
}

