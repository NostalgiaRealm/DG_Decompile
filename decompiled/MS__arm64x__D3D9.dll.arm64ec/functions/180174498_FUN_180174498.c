/*
 * FUN_180174498 at 180174498
 * undefined FUN_180174498(void)
 * Address ranges: 180174498-1801744cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180174498(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = param_2 + (param_3 & 0xffffffff) * 4;
  if (*(uint *)(lVar2 + 0x230) == 0) {
    uVar1 = FUN_180213760(param_2,4,1);
    *(int *)(lVar2 + 0x230) = (int)uVar1;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(lVar2 + 0x230);
  }
  return uVar1;
}

