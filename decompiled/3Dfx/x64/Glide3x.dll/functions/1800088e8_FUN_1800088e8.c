/*
 * FUN_1800088e8 at 1800088e8
 * undefined __fastcall FUN_1800088e8(longlong param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, char param_7)
 * Address ranges: 1800088e8-180008b64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800088e8(longlong param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
                  char param_7)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint local_c8 [36];
  
  if (((((int)param_4 < 9) && (param_3 < 9)) && (uVar14 = (ulonglong)(int)param_6, param_6 < 0x10))
     && (param_5 + 3U < 7)) {
    lVar15 = (longlong)param_2 * 0x55 + *(longlong *)(param_1 + 0x18);
    FUN_180060f94((undefined1 *)local_c8,0,0x90);
    uVar10 = 8 - param_4;
    if (param_3 <= (int)param_4) {
      cVar1 = *(char *)(lVar15 + 0x1f2);
      bVar2 = (&DAT_180063963)[param_5];
      iVar12 = 0;
      cVar3 = *(char *)(lVar15 + 499);
      iVar13 = -1;
      uVar9 = uVar10;
      do {
        lVar5 = 1;
        if (cVar3 == '\0') {
LAB_180008a08:
          lVar5 = 0;
        }
        else if ((((param_4 == 0) || (param_4 == 1)) ||
                 ((param_4 == 2 || ((param_4 == 3 || (param_4 == 4)))))) || (param_4 == 5)) {
          lVar5 = 3;
        }
        else if (param_4 == 6) {
          lVar5 = 2;
        }
        else if (param_4 != 7) goto LAB_180008a08;
        iVar6 = *(int *)(lVar15 + 0x1d2 + lVar5 * 4);
        uVar11 = (ulonglong)uVar9;
        uVar4 = *(int *)((longlong)param_2 * 0x4e8 + 0x330 + *(longlong *)(param_1 + 0x18)) + iVar6;
        if (iVar6 == iVar13) {
          uVar4 = uVar4 + iVar12;
        }
        else {
          iVar12 = 0;
          iVar13 = iVar6;
        }
        local_c8[uVar11 * 4] = uVar4;
        uVar4 = *(uint *)(&DAT_180063968 + (longlong)(int)param_4 * 4);
        uVar7 = uVar4 >> (bVar2 & 0x1f);
        if (uVar4 >> (bVar2 & 0x1f) == 0) {
          uVar7 = 1;
        }
        uVar8 = uVar7;
        if (-1 < param_5) {
          uVar8 = uVar4;
          uVar4 = uVar7;
        }
        uVar7 = (uVar8 << 0x10 | uVar4) >> 0x10;
        local_c8[uVar11 * 4 + 1] = uVar7;
        uVar7 = uVar7 * (byte)(&DAT_180063998)[uVar14];
        local_c8[uVar11 * 4 + 2] = uVar4 & 0xffff;
        local_c8[uVar11 * 4 + 3] = uVar7;
        if ((cVar1 == '\x03') || ((param_4 & 1) == (uint)(cVar1 != '\x01'))) {
          iVar6 = (uVar4 & 0xffff) * uVar7;
        }
        else {
          iVar6 = 0;
        }
        iVar12 = iVar12 + iVar6;
        uVar9 = uVar9 + 1;
        param_4 = param_4 - 1;
      } while (param_3 <= (int)param_4);
      uVar14 = (ulonglong)param_6;
    }
    if (param_7 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x298))
                (*(longlong **)(param_1 + 0x18),param_2,uVar14 & 0xffffffff,uVar10,8 - param_3,
                 local_c8,*(undefined1 *)(lVar15 + 0x1f2));
    }
  }
  return;
}

