/*
 * FUN_1801af5b0 at 1801af5b0
 * undefined FUN_1801af5b0(void)
 * Address ranges: 1801af5b0-1801af653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801af5b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_1801a92b8(param_1,uVar3);
  }
  else {
    uVar2 = uVar3 << 5 | 0x10;
    thunk_FUN_180223c70(uVar2 + *(longlong *)(param_1 + 0x84),uVar2 + *(longlong *)(param_1 + 0x84))
    ;
    param_1 = param_1 + (uVar3 >> 6) * 8;
    lVar1 = param_1 + 0x250;
    uVar2 = uVar3 >> 3 & 7;
    *(byte *)(lVar1 + uVar2) = *(byte *)(lVar1 + uVar2) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
    param_1 = param_1 + 0x280;
    uVar3 = uVar3 >> 3 & 7;
    *(byte *)(param_1 + uVar3) = *(byte *)(param_1 + uVar3) & ((byte)(1 << (param_2 & 7)) ^ 0xff);
  }
  return;
}

