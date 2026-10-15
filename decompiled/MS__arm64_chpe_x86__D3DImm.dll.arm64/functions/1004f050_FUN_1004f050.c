/*
 * FUN_1004f050 at 1004f050
 * undefined FUN_1004f050(void)
 * Address ranges: 1004f050-1004f11b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1004f050(undefined4 param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  
  puVar1 = (undefined4 *)FUN_10081cb0(0x9c);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 9) = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 0xd) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR_FUN_1009c994;
    puVar1[0x11] = param_1;
    *(undefined8 *)(puVar1 + 0x23) = 0;
    puVar1[0x25] = 0;
    *(undefined2 *)(puVar1 + 0x26) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    puVar1[0x16] = 0;
    *(undefined8 *)(puVar1 + 0x19) = 0;
    *(undefined8 *)(puVar1 + 0x17) = 0;
    *(undefined8 *)(puVar1 + 0x1d) = 0;
    *(undefined8 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)(puVar1 + 0x21) = 0;
    *(undefined8 *)(puVar1 + 0x1f) = 0;
    FUN_100618b0(puVar1 + 1,&DAT_1009c5d0);
    FUN_100618b0(extraout_x13 & 0xffffffff,&DAT_1009c520);
    uVar2 = extraout_x12 & 0xffffffff;
  }
  return uVar2;
}

