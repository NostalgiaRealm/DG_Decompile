/*
 * FUN_1005e310 at 1005e310
 * undefined FUN_1005e310(void)
 * Address ranges: 1005e310-1005e417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1005e310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_10079f50(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_10095174;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    *(undefined8 *)(puVar1 + 4) = 0x400;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 0xd) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *(undefined8 *)(puVar1 + 0x11) = 0;
    puVar1[0x13] = 0;
    *(undefined8 *)(puVar1 + 9) = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    if (puVar1[4] != 0) {
      uVar2 = FUN_1005d468(puVar1[1],puVar1[2],puVar1[3]);
      puVar1[6] = uVar2;
      (*(code *)PTR_FUN_1009d08c)(puVar1 + 7);
      return puVar1;
    }
    FUN_1005e050(puVar1);
    FUN_10079ff0(puVar1,0x50);
  }
  return (undefined4 *)0x0;
}

