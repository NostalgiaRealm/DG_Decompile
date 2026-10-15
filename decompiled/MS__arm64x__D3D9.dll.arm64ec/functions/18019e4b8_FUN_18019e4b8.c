/*
 * FUN_18019e4b8 at 18019e4b8
 * undefined FUN_18019e4b8(void)
 * Address ranges: 18019e4b8-18019e54f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019e4b8(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_1801999f0(param_1,param_2,param_3);
  }
  else {
    uVar1 = FUN_18019ce88();
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x16b) = 0;
      uVar1 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      param_1 = param_1 + ((ulonglong)(uVar1 >> 6) + 0x2b) * 8;
      uVar2 = (ulonglong)(uVar1 >> 3) & 7;
      *(byte *)(param_1 + uVar2) =
           *(byte *)(param_1 + uVar2) & ((byte)(1 << ((ulonglong)uVar1 & 7)) ^ 0xff);
    }
  }
  return;
}

