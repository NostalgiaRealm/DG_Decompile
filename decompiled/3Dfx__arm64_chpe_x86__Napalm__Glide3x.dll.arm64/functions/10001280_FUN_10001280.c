/*
 * FUN_10001280 at 10001280
 * undefined FUN_10001280(void)
 * Address ranges: 10001280-100012b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001280(void)

{
  ulonglong uVar1;
  longlong in_x15;
  ulonglong uVar2;
  
  uVar2 = ZEXT48(&stack0x00000000);
  uVar1 = 0;
  if ((ulonglong)(in_x15 * 0x10) <= uVar2) {
    uVar1 = uVar2 + in_x15 * -0x10;
  }
  uVar2 = uVar2 & 0xfffffffffffff000;
  if (uVar2 <= uVar1) {
    return;
  }
  do {
    uVar2 = uVar2 - 0x1000;
  } while (uVar2 != (uVar1 & 0xfffffffffffff000));
  return;
}

