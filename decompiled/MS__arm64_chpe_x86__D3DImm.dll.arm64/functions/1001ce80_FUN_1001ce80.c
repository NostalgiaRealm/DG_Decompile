/*
 * FUN_1001ce80 at 1001ce80
 * undefined FUN_1001ce80(void)
 * Address ranges: 1001ce80-1001cf37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001ce80(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081cb0(0xdc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1009c788;
    *(undefined8 *)(puVar1 + 0x32) = 0xffffffff;
    puVar1[0x34] = param_1;
    *(undefined8 *)(puVar1 + 0x35) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 1) = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 5) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    *(undefined8 *)(puVar1 + 9) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *(undefined8 *)(puVar1 + 0xd) = 0;
    *(undefined8 *)(puVar1 + 0x13) = 0;
    *(undefined8 *)(puVar1 + 0x11) = 0;
    *(undefined8 *)(puVar1 + 0x17) = 0;
    *(undefined8 *)(puVar1 + 0x15) = 0;
    *(undefined8 *)(puVar1 + 0x1b) = 0;
    *(undefined8 *)(puVar1 + 0x19) = 0;
    *(undefined8 *)(puVar1 + 0x1d) = 0;
    *(undefined8 *)(puVar1 + 0x21) = 0;
    *(undefined8 *)(puVar1 + 0x1f) = 0;
    *(undefined8 *)(puVar1 + 0x25) = 0;
    *(undefined8 *)(puVar1 + 0x23) = 0;
    *(undefined8 *)(puVar1 + 0x29) = 0;
    *(undefined8 *)(puVar1 + 0x27) = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2d] = 0;
    *(undefined8 *)(puVar1 + 0x2f) = 0;
    puVar1[0x31] = 0;
  }
  return puVar1;
}

