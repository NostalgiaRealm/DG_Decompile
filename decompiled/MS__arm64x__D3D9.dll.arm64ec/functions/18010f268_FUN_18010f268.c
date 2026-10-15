/*
 * FUN_18010f268 at 18010f268
 * undefined FUN_18010f268(void)
 * Address ranges: 18010f268-18010f2bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010f268(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_3;
  if ((char)param_3[1] != '\0') {
    uVar2 = uVar1 >> 3 & 0x1f;
    *(byte *)(param_1 + 0x10 + (longlong)(int)uVar2) =
         *(byte *)(param_1 + 0x10 + (longlong)(int)uVar2) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    return;
  }
  FUN_1801060c0(param_2,0x8f0200000000,uVar1,0xffffffff,0,0);
  return;
}

