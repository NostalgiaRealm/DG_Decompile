/*
 * _grTexMaxAddress@4 at 180003368
 * int __cdecl _grTexMaxAddress@4(int param_1)
 * Address ranges: 180003368-1800033f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grTexMaxAddress_4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x3368  95  _grTexMaxAddress@4
                       0x3368  252  grTexMaxAddress */
  lVar2 = FUN_180016878();
  bVar1 = FUN_180016a28(lVar2);
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
        FUN_1800608b0((uint *)(lVar2 + 0x60));
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 0x4e8 + 700);
        FUN_1800608a0((uint *)(lVar2 + 0x60));
      }
    }
    iVar3 = iVar3 + -0x10;
  }
  return iVar3;
}

