/*
 * guAlphaSource at 100021a3
 * undefined __stdcall guAlphaSource(int param_1)
 * Address ranges: 100021a3-100021ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guAlphaSource,4
 */

/* __stdcall guAlphaSource,4 */

void guAlphaSource(int param_1)

{
  undefined *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
                    /* 0x21a3  105  _guAlphaSource@4 */
  if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        uVar3 = 1;
        uVar2 = 8;
      }
      else {
        if (param_1 != 3) {
          return;
        }
        uVar3 = 0;
        uVar2 = 1;
      }
      uVar4 = 1;
      uVar1 = 3;
      goto LAB_100021df;
    }
    uVar3 = 0;
  }
  uVar4 = 2;
  uVar2 = 0;
  uVar1 = 2;
LAB_100021df:
  iVar5 = 0;
  this = FUN_10012760();
  FUN_10013cb2(this,uVar1,uVar2,uVar3,uVar4,iVar5);
  return;
}

