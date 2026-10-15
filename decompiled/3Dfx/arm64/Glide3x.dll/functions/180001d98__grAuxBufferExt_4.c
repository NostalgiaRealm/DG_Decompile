/*
 * _grAuxBufferExt@4 at 180001d98
 * undefined __cdecl _grAuxBufferExt@4(undefined4 param_1)
 * Address ranges: 180001d98-180001e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAuxBufferExt_4(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  
                    /* 0x1d98  7  _grAuxBufferExt@4
                       0x1d98  107  grAuxBufferExt */
  lVar3 = FUN_180008ce0();
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar3 + 0x60));
    bVar1 = FUN_180009768(lVar3);
    if (((bVar1 & 1) != 0) &&
       (uVar2 = FUN_18000a930(lVar3), (&DAT_18006f279)[(ulonglong)uVar2 * 0x20] != '\0')) {
      (**(code **)(**(longlong **)(lVar3 + 0x18) + 0xc0))(*(longlong **)(lVar3 + 0x18),param_1);
      *(char *)(*(longlong *)(lVar3 + 0x18) + 0xf1) = (char)param_1;
    }
    FUN_1800643d0((uint *)(lVar3 + 0x60));
  }
  return;
}

