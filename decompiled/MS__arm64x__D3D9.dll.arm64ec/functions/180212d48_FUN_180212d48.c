/*
 * FUN_180212d48 at 180212d48
 * undefined FUN_180212d48(void)
 * Address ranges: 180212d48-180212da3;180212dd0-180212df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180212d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1802392b0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    lVar2 = FUN_1802229a8(param_2);
    puVar1[2] = lVar2;
    if (lVar2 != 0) {
      puVar1[1] = param_2;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar2,param_3,param_2);
    }
    *puVar1 = &PTR_FUN_1802392b0;
    FUN_1802229d8();
    FUN_1802229d8(puVar1,0x20);
  }
  return 0;
}

