/*
 * FUN_100df2d0 at 100df2d0
 * undefined FUN_100df2d0(void)
 * Address ranges: 100df2d0-100df3d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100df2d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_100febf0(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_1012a988;
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
      uVar2 = FUN_100dff98(puVar1[1],puVar1[2],puVar1[3]);
      puVar1[6] = uVar2;
      (*(code *)PTR_FUN_101340b8)(puVar1 + 7);
      return puVar1;
    }
    FUN_100df010(puVar1);
    FUN_100fec90(puVar1,0x50);
  }
  return (undefined4 *)0x0;
}

