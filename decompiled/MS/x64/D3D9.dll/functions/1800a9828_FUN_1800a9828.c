/*
 * FUN_1800a9828 at 1800a9828
 * uint __fastcall FUN_1800a9828(undefined8 param_1, int param_2, longlong param_3, uint param_4)
 * Address ranges: 1800a9828-1800a99d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a9828(undefined8 param_1,int param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  
  if (param_2 == 0) {
    uStack_4c = 0;
    if (param_3 != 0) {
      uVar3 = *(uint *)(param_3 + (ulonglong)param_4 * 4);
      uStack_4c = uVar3 >> 0x18 | uVar3 << 8;
    }
  }
  else {
    lVar5 = (longlong)param_2 * 0x2c;
    uStack_4c = 0;
    uStack_50 = 0;
    lVar6 = 0;
    uStack_54 = 0;
    local_58 = 0;
    do {
      bVar1 = (&DAT_180103ad0)[lVar6];
      uVar3 = 0xff << (bVar1 & 0x1f) & param_4;
      if (param_2 == 8) {
        if (bVar1 == 0) {
          uStack_50 = 0;
          uStack_54 = 0;
          local_58 = 0;
        }
      }
      else {
        uVar8 = *(uint *)(&DAT_18010ff10 + lVar5) & uVar3;
        uVar7 = *(uint *)(&DAT_18010ff18 + lVar5) & uVar3;
        bVar2 = (&DAT_18010ff20)[lVar5];
        if ((char)bVar2 < '\0') {
          uVar4 = uVar8 << (-bVar2 & 0x1f);
        }
        else {
          uVar4 = uVar8 >> (bVar2 & 0x1f);
        }
        local_58 = local_58 + (uVar8 >> ((&DAT_18010ff21)[lVar5] & 0x1f) | uVar4);
        uStack_54 = uStack_54 +
                    ((*(uint *)(&DAT_18010ff14 + lVar5) & uVar3) >> ((&DAT_18010ff23)[lVar5] & 0x1f)
                    | (*(uint *)(&DAT_18010ff14 + lVar5) & uVar3) >>
                      ((&DAT_18010ff22)[lVar5] & 0x1f));
        bVar2 = (&DAT_18010ff24)[lVar5];
        if ((char)bVar2 < '\0') {
          uVar8 = uVar7 << (-bVar2 & 0x1f);
        }
        else {
          uVar8 = uVar7 >> (bVar2 & 0x1f);
        }
        uStack_50 = uStack_50 + (uVar7 >> ((&DAT_18010ff25)[lVar5] & 0x1f) | uVar8);
      }
      uStack_4c = uStack_4c +
                  ((*(uint *)(&DAT_18010ff1c + lVar5) & uVar3) >> ((&DAT_18010ff27)[lVar5] & 0x1f) |
                  (*(uint *)(&DAT_18010ff1c + lVar5) & uVar3) >> ((&DAT_18010ff26)[lVar5] & 0x1f)) *
                  (uint)(byte)(&DAT_18010ff28)[lVar5];
      if ((bVar1 == 0) && ((&DAT_18010ff28)[lVar5] == 0)) {
        uStack_4c = 0xff;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 4);
    uStack_4c = ((local_58 << 8 | uStack_54) << 8 | uStack_50) << 8 | uStack_4c;
  }
  return uStack_4c;
}

