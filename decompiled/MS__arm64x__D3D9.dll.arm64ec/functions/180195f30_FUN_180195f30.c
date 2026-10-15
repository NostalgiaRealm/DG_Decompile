/*
 * FUN_180195f30 at 180195f30
 * undefined FUN_180195f30(void)
 * Address ranges: 180195f30-180195fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180195f30(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0xc) = param_3;
    *(undefined4 *)(puVar1 + 2) = param_4;
    *(undefined4 *)((longlong)puVar1 + 0x14) = param_5;
    *(undefined4 *)(puVar1 + 3) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x1c) = param_7;
    *(undefined2 *)((longlong)puVar1 + 0x1d) = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_18022cdf0;
    puVar1[7] = param_1;
    puVar1[8] = 0;
    puVar1[4] = &PTR_FUN_18022ce20;
    puVar1[9] = 0;
    puVar1[10] = 0;
    uVar2 = FUN_18019f980(puVar1);
    if ((uVar2 & 1) != 0) {
      if (puVar1 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar1 + 4;
    }
    FUN_18019f8f0(puVar1);
    FUN_1802229d8(puVar1,0x58);
  }
  return (undefined8 *)0x0;
}

