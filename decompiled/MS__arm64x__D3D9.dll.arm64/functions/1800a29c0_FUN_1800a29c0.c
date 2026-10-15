/*
 * FUN_1800a29c0 at 1800a29c0
 * undefined FUN_1800a29c0(void)
 * Address ranges: 1800a29c0-1800a2acf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a29c0(uint *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  *param_1 = 0;
  uVar6 = *(uint *)(&DAT_180231470 + (ulonglong)param_3 * 4);
  *(char *)param_1 = (char)(uVar6 >> 3);
  if (uVar6 == 0x20) {
    lVar5 = (ulonglong)param_3 * 0x2c;
    cVar1 = (&DAT_18024a966)[lVar5];
    cVar2 = (&DAT_18024a964)[lVar5];
    cVar3 = (&DAT_18024a960)[lVar5];
    cVar4 = (&DAT_18024a962)[lVar5];
    *(byte *)((longlong)param_1 + 1) =
         (byte)(((((((int)cVar1 >> 3 & 0x3fU) << 2 | (uint)(int)cVar2 >> 3 & 0xff) & 0x3f) << 2 |
                 (uint)(int)cVar4 >> 3 & 0xff) & 0x3f) << 2) | (byte)((uint)(int)cVar3 >> 3);
    uVar6 = 0x80000;
    if (((int)cVar1 & 7U) == 0) {
      uVar6 = 0;
    }
    *param_1 = uVar6 | (uint)(((int)cVar2 & 7U) != 0) << 0x12 |
               (uint)(((int)cVar4 & 7U) != 0) << 0x11 | (uint)(((int)cVar3 & 7U) != 0) << 0x10 |
               *param_1 & 0xfff0ffff;
  }
  lVar5 = 0x38;
  if (param_3 == 0x15) {
    lVar5 = 0x48;
  }
  uVar6 = *param_1;
  if (*(int *)(param_2 + lVar5) == 9) {
    iVar7 = 2;
  }
  else {
    if (*(int *)(param_2 + lVar5) != 0x17) {
      uVar6 = uVar6 & 0xffcfffff;
      goto LAB_1800a2aac;
    }
    iVar7 = 1;
  }
  uVar6 = uVar6 & 0xffc00000 | uVar6 & 0xfffff | iVar7 << 0x14;
LAB_1800a2aac:
  *param_1 = uVar6 & 0xffbfffff | (uint)((&DAT_180231518)[param_3] != '\0') << 0x16;
  return;
}

