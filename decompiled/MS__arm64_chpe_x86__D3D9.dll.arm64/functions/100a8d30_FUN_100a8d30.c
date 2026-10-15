/*
 * FUN_100a8d30 at 100a8d30
 * undefined FUN_100a8d30(void)
 * Address ranges: 100a8d30-100a8e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100a8d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined4 *)FUN_101321c0(0x40);
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
    *puVar1 = &PTR_FUN_1015f1f4;
    puVar1[7] = &PTR_FUN_1015f20c;
    puVar1[0xc] = param_1;
    *(undefined8 *)(puVar1 + 0xd) = 0;
    puVar1[0xf] = 0;
    uVar2 = FUN_100b2690(puVar1);
    if ((uVar2 & 1) != 0) {
      if (puVar1 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      return puVar1 + 7;
    }
    FUN_100b25f0(puVar1);
    FUN_10132260(puVar1,0x40);
  }
  return (undefined4 *)0x0;
}

