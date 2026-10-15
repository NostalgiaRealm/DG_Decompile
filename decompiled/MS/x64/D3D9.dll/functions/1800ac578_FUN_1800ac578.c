/*
 * FUN_1800ac578 at 1800ac578
 * uint * __fastcall FUN_1800ac578(uint * param_1, longlong param_2, uint param_3)
 * Address ranges: 1800ac578-1800ac6a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800ac578(uint *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  
  *param_1 = 0;
  uVar6 = *(uint *)(&DAT_1800ff000 + (ulonglong)param_3 * 4);
  *(char *)param_1 = (char)(uVar6 >> 3);
  if (uVar6 == 0x20) {
    lVar5 = (ulonglong)param_3 * 0x2c;
    bVar1 = (&DAT_18010ff22)[lVar5];
    bVar2 = (&DAT_18010ff26)[lVar5];
    bVar3 = (&DAT_18010ff24)[lVar5];
    bVar4 = (&DAT_18010ff20)[lVar5];
    *(byte *)((longlong)param_1 + 1) =
         ((char)bVar1 >> 1 | (bVar3 & 0xf9) * '\x02') & 0xfc | (char)bVar4 >> 3 |
         (bVar2 & 0xf8) << 3;
    *param_1 = *param_1 & 0xfff0ffff;
    *param_1 = *param_1 |
               -(uint)((bVar2 & 7) != 0) & 0x80000 | -(uint)((bVar3 & 7) != 0) & 0x40000 |
               -(uint)((bVar1 & 7) != 0) & 0x20000 | -(uint)((bVar4 & 7) != 0) & 0x10000;
    uVar6 = *param_1;
  }
  else {
    uVar6 = *param_1;
  }
  lVar5 = 0x48;
  if (param_3 != 0x15) {
    lVar5 = 0x38;
  }
  if (*(int *)(lVar5 + param_2) == 9) {
    uVar6 = uVar6 & 0xffefffff | 0x200000;
  }
  else if (*(int *)(lVar5 + param_2) == 0x17) {
    uVar6 = uVar6 & 0xffdfffff | 0x100000;
  }
  else {
    uVar6 = uVar6 & 0xffcfffff;
  }
  *param_1 = -(uint)((&DAT_1800ff0a8)[param_3] != '\0') & 0x400000 | uVar6 & 0xffbfffff;
  return param_1;
}

