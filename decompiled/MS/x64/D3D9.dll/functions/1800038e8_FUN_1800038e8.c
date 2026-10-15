/*
 * FUN_1800038e8 at 1800038e8
 * bool __fastcall FUN_1800038e8(longlong param_1, int param_2, int param_3, uint param_4, uint param_5, uint param_6)
 * Address ranges: 1800038e8-1800039cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800038e8(longlong param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  
  bVar7 = false;
  if (param_2 == 2) {
    puVar8 = &DAT_18010e1a8;
    puVar2 = &DAT_18010e1ac;
    puVar4 = &DAT_18010e1a8;
    puVar9 = &DAT_18010e1ac;
    puVar6 = &DAT_18010e1b0;
    puVar3 = &DAT_18010e1a8;
    puVar5 = &DAT_18010e1ac;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0;
    puVar8 = (uint *)(&DAT_18010e358 + lVar1);
    puVar2 = (uint *)(&DAT_18010e35c + lVar1);
    puVar4 = (uint *)(&DAT_18010e358 + lVar1);
    puVar9 = (uint *)(&DAT_18010e35c + lVar1);
    puVar6 = (uint *)(&DAT_18010e360 + lVar1);
    puVar3 = (uint *)(&DAT_18010e358 + lVar1);
    puVar5 = (uint *)(&DAT_18010e35c + lVar1);
  }
  if (param_3 == 1) {
    if (*puVar3 < param_4) {
      return false;
    }
    return param_5 <= *puVar5;
  }
  if (param_3 == 2) {
LAB_18000398b:
    if (((param_4 <= *puVar4) && (param_5 <= *puVar9)) && (param_6 <= *puVar6)) {
      bVar7 = true;
    }
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) goto LAB_18000398b;
      if (param_3 != 5) {
        return false;
      }
    }
    if (param_4 <= *puVar8) {
      bVar7 = param_5 <= *puVar2;
    }
  }
  return bVar7;
}

