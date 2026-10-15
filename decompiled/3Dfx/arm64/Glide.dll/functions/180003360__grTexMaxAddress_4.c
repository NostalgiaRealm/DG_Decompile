/*
 * _grTexMaxAddress@4 at 180003360
 * int __cdecl _grTexMaxAddress@4(int param_1)
 * Address ranges: 180003360-1800033eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grTexMaxAddress_4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x3360  99  _grTexMaxAddress@4
                       0x3360  260  grTexMaxAddress */
  lVar2 = FUN_180017788();
  bVar1 = FUN_180017938(lVar2);
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
        FUN_180061700((uint *)(lVar2 + 0x60));
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 0x4e8 + 700);
        FUN_1800616f0((uint *)(lVar2 + 0x60));
      }
    }
    iVar3 = iVar3 + -0x10;
  }
  return iVar3;
}

