/*
 * FUN_10095a00 at 10095a00
 * undefined FUN_10095a00(void)
 * Address ranges: 10095a00-10095b0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10095a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined4 *)FUN_100febf0(0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    *(undefined1 *)(puVar1 + 6) = param_7;
    *(undefined2 *)((int)puVar1 + 0x19) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_FUN_1012a0a0;
    puVar1[7] = &PTR_FUN_1012a090;
    puVar1[0xc] = param_1;
    *(undefined8 *)(puVar1 + 0xd) = 0xffffffff00000000;
    uVar2 = FUN_100a4c00(puVar1);
    if ((uVar2 & 1) != 0) {
      if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      return puVar1 + 7;
    }
    FUN_100a4a10(puVar1);
    FUN_100fec90(puVar1,0x3c);
  }
  return (undefined4 *)0x0;
}

