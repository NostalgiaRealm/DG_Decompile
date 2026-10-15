/*
 * FUN_18019e558 at 18019e558
 * undefined FUN_18019e558(void)
 * Address ranges: 18019e558-18019e61b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019e558(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_180199aa8(param_1);
  }
  else {
    uVar3 = param_2 & 0xffffffff;
    lVar1 = *(longlong *)(param_1 + 0x90) + uVar3 * 0x28;
    thunk_FUN_180223c70(lVar1 + 0x18,lVar1 + 0x18);
    lVar1 = param_1 + (uVar3 >> 6) * 8;
    uVar2 = uVar3 >> 3 & 7;
    *(byte *)(lVar1 + 0x250 + uVar2) =
         *(byte *)(lVar1 + 0x250 + uVar2) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
    uVar2 = uVar3 >> 3 & 7;
    *(byte *)(lVar1 + 0x280 + uVar2) =
         *(byte *)(lVar1 + 0x280 + uVar2) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
    *(undefined1 *)(param_1 + 0x16b) = 0;
    uVar3 = uVar3 >> 3 & 7;
    *(byte *)(lVar1 + 0x158 + uVar3) =
         *(byte *)(lVar1 + 0x158 + uVar3) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  }
  return;
}

