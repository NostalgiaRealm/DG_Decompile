/*
 * FUN_1800982c0 at 1800982c0
 * undefined FUN_1800982c0(void)
 * Address ranges: 1800982c0-18009836b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800982c0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_180092510(param_1,uVar3);
  }
  else {
    uVar2 = uVar3 << 5 | 0x10;
    (*__imp_USER32_dll_UnionRect)
              (uVar2 + *(longlong *)(param_1 + 0x84),uVar2 + *(longlong *)(param_1 + 0x84));
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

