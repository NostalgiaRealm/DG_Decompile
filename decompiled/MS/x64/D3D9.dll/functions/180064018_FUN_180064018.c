/*
 * FUN_180064018 at 180064018
 * ulonglong __fastcall FUN_180064018(undefined8 param_1, longlong param_2, longlong param_3, char param_4)
 * Address ranges: 180064018-18006428a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180064018(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar7 = uVar6;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      bVar1 = *(byte *)(param_2 + 0x214 + uVar6);
      uVar2 = (ulonglong)bVar1;
      if (param_4 == '\0') {
        bVar8 = bVar1 == 0x10;
      }
      else {
        bVar8 = bVar1 == 1;
      }
      if (!bVar8) {
        lVar4 = uVar7 * 0x20;
        *(undefined4 *)(param_3 + 0xc + lVar4) =
             *(undefined4 *)(&DAT_180102670 + (ulonglong)*(byte *)(param_2 + 0x18 + uVar2 * 8) * 4);
        *(undefined **)(param_3 + lVar4) = (&PTR_s_POSITION_1801026e0)[uVar2];
        *(uint *)(param_3 + 8 + lVar4) = (uint)(byte)(&DAT_1801026c0)[uVar2];
        *(int *)(param_3 + 0x10 + lVar4) = (int)*(char *)(param_2 + 0x14 + uVar2 * 8);
        *(uint *)(param_3 + 0x14 + lVar4) = (uint)*(byte *)(param_2 + 0x17 + uVar2 * 8) << 2;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *(undefined8 *)(param_3 + 0x18 + lVar4) = 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  lVar4 = 7;
  do {
    if (*(char *)(param_2 + 0x14 + lVar4 * 8) == -1) {
      lVar3 = uVar7 * 0x20;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      *(undefined **)(param_3 + lVar3) = (&PTR_s_POSITION_1801026e0)[lVar4];
      *(uint *)(param_3 + 8 + lVar3) = (uint)(byte)(&DAT_1801026c0)[lVar4];
      *(undefined8 *)(param_3 + 0xc + lVar3) = 0x29;
      *(undefined8 *)(param_3 + 0x14 + lVar3) = 0;
      *(undefined4 *)(param_3 + 0x1c + lVar3) = 0;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0xf);
  if (*(char *)(param_2 + 0x3c) == -1) {
    lVar4 = uVar7 * 0x20;
    uVar7 = (ulonglong)((int)uVar7 + 1);
    *(char **)(lVar4 + param_3) = "COLOR";
    *(undefined4 *)(lVar4 + 8 + param_3) = 0;
    *(undefined8 *)(lVar4 + 0xc + param_3) = 0x57;
    *(undefined8 *)(lVar4 + 0x14 + param_3) = 0;
    *(undefined4 *)(lVar4 + 0x1c + param_3) = 0;
  }
  if (*(char *)(param_2 + 0x44) == -1) {
    lVar4 = uVar7 * 0x20;
    uVar7 = (ulonglong)((int)uVar7 + 1);
    *(char **)(lVar4 + param_3) = "COLOR";
    *(undefined4 *)(lVar4 + 8 + param_3) = 1;
    *(undefined8 *)(lVar4 + 0xc + param_3) = 0x57;
    *(undefined8 *)(lVar4 + 0x14 + param_3) = 0;
    *(undefined4 *)(lVar4 + 0x1c + param_3) = 0;
  }
  if (*(char *)(param_2 + 0x34) == -1) {
    lVar4 = uVar7 * 0x20;
    uVar7 = (ulonglong)((int)uVar7 + 1);
    *(char **)(lVar4 + param_3) = "TEXCOORD";
    *(undefined4 *)(lVar4 + 8 + param_3) = 0xd;
    *(undefined8 *)(lVar4 + 0xc + param_3) = 0x29;
    *(undefined8 *)(lVar4 + 0x14 + param_3) = 0;
    *(undefined4 *)(lVar4 + 0x1c + param_3) = 0;
  }
  if (*(int *)(param_2 + 4) != 0) {
    if (*(char *)(param_2 + 0x2c) == -1) {
      lVar4 = uVar7 * 0x20;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      *(char **)(lVar4 + param_3) = "TEXCOORD";
      *(undefined4 *)(lVar4 + 8 + param_3) = 8;
      *(undefined8 *)(lVar4 + 0xc + param_3) = 6;
      *(undefined8 *)(lVar4 + 0x14 + param_3) = 0;
      *(undefined4 *)(lVar4 + 0x1c + param_3) = 0;
    }
    if (*(char *)(param_2 + 0x1c) == -1) {
      lVar4 = uVar7 * 0x20;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      *(char **)(lVar4 + param_3) = "TEXCOORD";
      *(undefined4 *)(lVar4 + 8 + param_3) = 9;
      *(undefined8 *)(lVar4 + 0xc + param_3) = 6;
      *(undefined8 *)(lVar4 + 0x14 + param_3) = 0;
      *(undefined4 *)(lVar4 + 0x1c + param_3) = 0;
    }
    if (*(char *)(param_2 + 0x24) == -1) {
      lVar4 = uVar7 * 0x20;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      *(char **)(lVar4 + param_3) = "TEXCOORD";
      *(undefined4 *)(lVar4 + 8 + param_3) = 10;
      *(undefined8 *)(lVar4 + 0xc + param_3) = 0x1c;
      *(undefined8 *)(lVar4 + 0x14 + param_3) = 0;
      *(undefined4 *)(lVar4 + 0x1c + param_3) = 0;
    }
    if (*(char *)(param_2 + 0x8c) == -1) {
      lVar4 = uVar7 * 0x20;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      *(char **)(lVar4 + param_3) = "TEXCOORD";
      *(undefined4 *)(lVar4 + 8 + param_3) = 0xb;
      *(undefined8 *)(lVar4 + 0xc + param_3) = 6;
      *(undefined8 *)(lVar4 + 0x14 + param_3) = 0;
      *(undefined4 *)(lVar4 + 0x1c + param_3) = 0;
    }
  }
  return uVar7;
}

