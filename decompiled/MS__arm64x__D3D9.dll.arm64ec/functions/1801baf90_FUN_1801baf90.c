/*
 * FUN_1801baf90 at 1801baf90
 * undefined FUN_1801baf90(void)
 * Address ranges: 1801baf90-1801bb09f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801baf90(uint *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  *param_1 = 0;
  uVar7 = *(uint *)(&DAT_18022e050 + (ulonglong)param_3 * 4);
  *(char *)param_1 = (char)(uVar7 >> 3);
  if (uVar7 == 0x20) {
    lVar5 = (ulonglong)param_3 * 0x2c;
    cVar1 = (&DAT_180248456)[lVar5];
    cVar2 = (&DAT_180248454)[lVar5];
    cVar3 = (&DAT_180248450)[lVar5];
    cVar4 = (&DAT_180248452)[lVar5];
    *(byte *)((longlong)param_1 + 1) =
         (byte)(((((((int)cVar1 >> 3 & 0x3fU) << 2 | (uint)(int)cVar2 >> 3 & 0xff) & 0x3f) << 2 |
                 (uint)(int)cVar4 >> 3 & 0xff) & 0x3f) << 2) | (byte)((uint)(int)cVar3 >> 3);
    uVar7 = 0x80000;
    if (((int)cVar1 & 7U) == 0) {
      uVar7 = 0;
    }
    *param_1 = uVar7 | (uint)(((int)cVar2 & 7U) != 0) << 0x12 |
               (uint)(((int)cVar4 & 7U) != 0) << 0x11 | (uint)(((int)cVar3 & 7U) != 0) << 0x10 |
               *param_1 & 0xfff0ffff;
  }
  lVar5 = 0x38;
  if (param_3 == 0x15) {
    lVar5 = 0x48;
  }
  uVar7 = *param_1;
  if (*(int *)(param_2 + lVar5) == 9) {
    iVar6 = 2;
  }
  else {
    if (*(int *)(param_2 + lVar5) != 0x17) {
      uVar7 = uVar7 & 0xffcfffff;
      goto LAB_1801bb07c;
    }
    iVar6 = 1;
  }
  uVar7 = uVar7 & 0xffc00000 | uVar7 & 0xfffff | iVar6 << 0x14;
LAB_1801bb07c:
  *param_1 = uVar7 & 0xffbfffff | (uint)((&DAT_18022da48)[param_3] != '\0') << 0x16;
  return;
}

