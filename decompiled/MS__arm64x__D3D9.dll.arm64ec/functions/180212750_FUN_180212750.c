/*
 * FUN_180212750 at 180212750
 * undefined FUN_180212750(void)
 * Address ranges: 180212750-180212807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180212750(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 5) = 0x400;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    lVar2 = thunk_FUN_1802239c8(0,0,0,0);
    puVar1[6] = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      *(undefined4 *)(puVar1 + 1) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x24) = param_3;
      uVar3 = FUN_1802124a0(puVar1);
      if ((uVar3 & 1) != 0) {
        return puVar1;
      }
      thunk_FUN_180223824(puVar1[6]);
      puVar1[6] = 0;
    }
    FUN_180212360(puVar1);
    FUN_1802229d8(puVar1,0x38);
  }
  return (undefined8 *)0x0;
}

