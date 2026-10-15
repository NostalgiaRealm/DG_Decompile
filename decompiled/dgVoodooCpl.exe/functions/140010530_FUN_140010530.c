/*
 * FUN_140010530 at 140010530
 * ulonglong __fastcall FUN_140010530(longlong param_1)
 * Address ranges: 140010530-1400105a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140010530(longlong param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  if ((DAT_14002c2c8 != 0) && (DAT_14002c2c8 != param_1)) {
    return (ulonglong)*(byte *)(param_1 + 0x22);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x21) = uVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if ((*(char *)(param_1 + 0x22) == '\0') && (*(char *)(param_1 + 0x21) != '\0')) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    *(char *)(param_1 + 0x22) = (char)uVar2;
    if ((char)uVar2 != '\0') {
      DAT_14002c2c8 = param_1;
      *(undefined1 *)(param_1 + 0x23) = 1;
      return uVar2;
    }
  }
  else {
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x22);
  }
  return uVar2;
}

