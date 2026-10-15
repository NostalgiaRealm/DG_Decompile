/*
 * FUN_1800869d8 at 1800869d8
 * undefined FUN_1800869d8(void)
 * Address ranges: 1800869d8-180086c5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800869d8(float param_1,float param_2,float param_3,float param_4,longlong param_5,
                  int param_6,int param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  cVar3 = *(char *)(*(longlong *)(*(longlong *)(param_5 + 0x110) + 8) + 0x84);
  uVar4 = param_6 + *(int *)(param_5 + 0x3c) * param_7;
  uVar12 = (ulonglong)uVar4;
  uVar11 = (ulonglong)(uVar4 >> 6);
  bVar5 = (*(byte *)(param_5 + (uVar11 + 0x4c) * 8 + ((ulonglong)(uVar4 >> 3) & 7)) >> (uVar12 & 7)
          & 1) != 0;
  if (*(int *)(param_5 + 0x2c) == 0) {
    FUN_180082250(*(longlong *)(param_5 + 0x110),1,*(undefined8 *)(param_5 + 0x10));
    bVar5 = (*(byte *)(param_5 + (uVar11 + 0x4e) * 8 + ((ulonglong)(uVar4 >> 3) & 7)) >>
             (uVar12 & 7) & 1) == 0 && bVar5;
  }
  uVar6 = (ulonglong)*(uint *)(param_5 + 0x2c);
  uVar1 = (param_8 & 0xff ^ 1) & (uint)bVar5;
  if (*(char *)(param_5 + 0x248) == '\0') {
    uVar9 = *(uint *)(&DAT_180231770 + uVar6 * 4);
  }
  else {
    uVar9 = 1;
  }
  uVar2 = 0xffe00010;
  if ((&DAT_180231518)[uVar6] != '\0') {
    uVar2 = 0xffe00000;
  }
  uVar8 = 0x18;
  if (cVar3 == '\0') {
    uVar8 = 0;
  }
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_5 + 0x1e8);
  }
  lVar7 = *(longlong *)(param_5 + 0x1a0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_5 + 0x198);
  }
  FUN_1800825d8(*(float *)(param_5 + 0x240) * param_1,*(float *)(param_5 + 0x244) * param_2,
                *(float *)(param_5 + 0x240) * param_3,*(float *)(param_5 + 0x244) * param_4,param_1,
                param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x110),uVar6,uVar6,param_6,param_7
                ,param_6,param_7,*(undefined8 *)(param_5 + 0x78),
                *(undefined8 *)(*(longlong *)(param_5 + 0x90) + uVar12 * 0x28),0,lVar7,
                *(undefined8 *)(param_5 + 0x1a8),uVar10,0,0,cVar3,
                *(uint *)(&DAT_180231550 + uVar6 * 4) & 0xf |
                (uVar8 | (uVar2 | uVar1) << 6 | uVar9 & 7) << 4,1);
  lVar7 = param_5 + uVar11 * 8;
  uVar11 = (ulonglong)(uVar4 >> 3) & 7;
  *(byte *)(lVar7 + 0x270 + uVar11) =
       *(byte *)(lVar7 + 0x270 + uVar11) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
  uVar11 = (ulonglong)(uVar4 >> 3) & 7;
  *(byte *)(lVar7 + 0x250 + uVar11) =
       *(byte *)(lVar7 + 0x250 + uVar11) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
  uVar11 = (ulonglong)(uVar4 >> 3) & 7;
  *(byte *)(lVar7 + 0xf0 + uVar11) = *(byte *)(lVar7 + 0xf0 + uVar11) | (byte)(1 << (uVar12 & 7));
  uVar11 = (ulonglong)(uVar4 >> 3) & 7;
  *(byte *)(lVar7 + 0x260 + uVar11) =
       *(byte *)(lVar7 + 0x260 + uVar11) & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
  (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_5 + 0x1b0) + uVar12 * 0x28 + 0x18);
  return;
}

