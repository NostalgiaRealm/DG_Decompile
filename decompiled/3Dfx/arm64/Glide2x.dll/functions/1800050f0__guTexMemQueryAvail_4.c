/*
 * _guTexMemQueryAvail@4 at 1800050f0
 * int __cdecl _guTexMemQueryAvail@4(int param_1)
 * Address ranges: 1800050f0-1800051bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _guTexMemQueryAvail_4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x50f0  135  _guTexMemQueryAvail@4
                       0x50f0  292  guTexMemQueryAvail */
  lVar2 = FUN_180016878();
  iVar3 = 0;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      bVar1 = FUN_180016a28(lVar2);
      if ((bVar1 & 1) == 0) {
        iVar3 = 0;
      }
      else {
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
      iVar3 = iVar3 - *(int *)(lVar2 + (longlong)param_1 * 4 + 0xac);
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return iVar3;
}

