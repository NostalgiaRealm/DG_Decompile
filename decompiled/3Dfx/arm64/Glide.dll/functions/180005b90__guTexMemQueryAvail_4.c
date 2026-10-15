/*
 * _guTexMemQueryAvail@4 at 180005b90
 * int __cdecl _guTexMemQueryAvail@4(int param_1)
 * Address ranges: 180005b90-180005c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _guTexMemQueryAvail_4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x5b90  139  _guTexMemQueryAvail@4
                       0x5b90  300  guTexMemQueryAvail */
  lVar2 = FUN_180017788();
  iVar3 = 0;
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      bVar1 = FUN_180017938(lVar2);
      if ((bVar1 & 1) == 0) {
        iVar3 = 0;
      }
      else {
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
      iVar3 = iVar3 - *(int *)(lVar2 + (longlong)param_1 * 4 + 0xac);
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return iVar3;
}

