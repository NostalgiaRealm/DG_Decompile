/*
 * _grTexMaxAddress@4 at 180003e50
 * int __cdecl _grTexMaxAddress@4(int param_1)
 * Address ranges: 180003e50-180003edb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grTexMaxAddress_4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x3e50  82  _grTexMaxAddress@4
                       0x3e50  182  grTexMaxAddress */
  lVar2 = FUN_180008ce0();
  bVar1 = FUN_180009768(lVar2);
  if ((bVar1 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      if (*(char *)(lVar2 + 100) == '\0') {
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x30) + 0x82f);
      }
      else {
        FUN_1800643e0((uint *)(lVar2 + 0x60));
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 0x4e8 + 0x334);
        FUN_1800643d0((uint *)(lVar2 + 0x60));
      }
    }
    iVar3 = iVar3 + -0x10;
  }
  return iVar3;
}

