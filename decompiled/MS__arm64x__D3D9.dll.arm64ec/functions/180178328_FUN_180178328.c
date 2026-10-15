/*
 * FUN_180178328 at 180178328
 * undefined FUN_180178328(void)
 * Address ranges: 180178328-180178447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180178328(undefined8 param_1,ulonglong param_2,uint *param_3,longlong param_4,
                      undefined8 param_5)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  
  uVar10 = *param_3;
  uVar9 = (ulonglong)uVar10;
  uVar6 = (ulonglong)(uVar10 & 0x7ff);
  bVar11 = (byte)(uVar10 >> 0x10) & 7;
  uVar5 = FUN_180213268(0xe4,uVar10 >> 0x10 & 7,param_5);
  uVar8 = uVar5 & 0xffffffff;
  puVar2 = param_3 + 1;
  if ((uVar9 & 0x2000) == 0) {
    uVar10 = 0;
    puVar2 = param_3;
  }
  else {
    uVar10 = param_3[1];
  }
  uVar1 = (uint)uVar9 & 0x1800 | (uint)uVar9 >> 0x14 & 0x700;
  if (uVar1 < 0x100) {
    lVar7 = param_4 + (uVar6 & 0xffffffff) * 4;
    iVar4 = *(int *)(lVar7 + 0x218);
    if (iVar4 == 0) {
      iVar4 = FUN_180213760(param_4,4,1,lVar7,uVar8,uVar10);
      *(int *)(lVar7 + 0x218) = iVar4;
    }
    *(int *)(param_4 + 0x3f0) = iVar4;
  }
  else {
    uVar1 = uVar1 >> 8;
    if (uVar1 == 1) {
      FUN_180177940(uVar5,param_4);
      goto LAB_18017840c;
    }
    if (uVar1 != 3) {
      bVar11 = 0;
      goto LAB_18017840c;
    }
    *(uint *)(param_4 + 0x3f0) = (int)uVar6 + 5U | 0x410100;
  }
  *(undefined8 *)(param_4 + 0x400) = 0xffffffffffffffff;
  *(undefined8 *)(param_4 + 0x408) = 0xffffffffffffffff;
  *(char *)(param_4 + 0x3f4) = (char)uVar8;
LAB_18017840c:
  bVar3 = (param_2 & 0x10000000) == 0;
  if (bVar3) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = puVar2[2];
  }
  *(uint *)(param_4 + 0x4f0) = uVar10;
  *(byte *)(param_4 + 0x344) = bVar11;
  lVar7 = 4;
  if (!bVar3) {
    lVar7 = 8;
  }
  return lVar7 + (longlong)puVar2;
}

