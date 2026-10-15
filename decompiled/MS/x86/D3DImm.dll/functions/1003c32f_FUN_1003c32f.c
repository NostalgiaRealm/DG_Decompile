/*
 * FUN_1003c32f at 1003c32f
 * undefined4 __fastcall FUN_1003c32f(uint param_1, char param_2, uint * param_3)
 * Address ranges: 1003c32f-1003c592
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003c32f(uint param_1,char param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  byte bVar6;
  uint uVar5;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  int iStack_1c;
  
  puVar1 = param_3;
  FUN_1003c306((int *)param_3);
  param_3[1] = 3;
  puVar9 = (uint *)(param_1 >> 8 & 0xf);
  *param_3 = param_1;
  uVar2 = param_1 & 0xe;
  uVar8 = 0;
  if (((param_1 & 0xf001) != 0) || ((uint *)0x8 < puVar9)) goto LAB_1003c58c;
  if ((uVar2 == 2) ||
     ((param_2 != '\0' &&
      ((((uVar2 == 6 || (uVar2 == 8)) || (uVar2 == 10)) || ((uVar2 == 0xc || (uVar2 == 0xe)))))))) {
    param_3[5] = 0xc0300;
    uVar4 = 0x100;
    *(undefined1 *)(param_3 + 6) = 2;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x27) = 0;
    if ((param_1 & 0x10) == 0) {
      param_3 = (uint *)0x1;
      cVar7 = ((param_1 & 0x20) != 0) + '\x03';
    }
    else {
      cVar7 = '\x03';
      param_3 = (uint *)0x2;
    }
    puVar1[1] = (uint)param_3;
    if (uVar2 == 6) {
      iStack_1c = 1;
LAB_1003c437:
      cVar3 = (char)iStack_1c;
      *(char *)((int)puVar1 + 0x1e) = cVar3 << 2;
      bVar6 = (&DAT_1005f01c)[iStack_1c * 4];
      uVar4 = CONCAT11(2,cVar3);
      *(byte *)(puVar1 + 8) = bVar6;
      *(char *)((int)puVar1 + 0x1f) = cVar7;
      *(undefined1 *)(puVar1 + 7) = 0;
      *(char *)((int)puVar1 + 0x1d) = cVar3;
      *(undefined *)((int)puVar1 + 0x22) = (&DAT_1005f014)[bVar6];
      cVar7 = cVar7 + cVar3;
      *(undefined1 *)((int)puVar1 + 0x9d) = 1;
    }
    else {
      if (uVar2 == 8) {
        iStack_1c = 2;
        goto LAB_1003c437;
      }
      if (uVar2 == 10) {
        iStack_1c = 3;
        goto LAB_1003c437;
      }
      if (uVar2 == 0xc) {
        iStack_1c = 4;
        goto LAB_1003c437;
      }
      if (uVar2 == 0xe) {
        iStack_1c = 5;
        goto LAB_1003c437;
      }
    }
    uVar5 = (uint)uVar4;
    uVar8 = (uint)CONCAT11(1,cVar7);
    if ((param_1 & 0x10) != 0) {
      uVar5 = (uint)(byte)((char)(uVar4 >> 8) + 1) << 8;
      *(char *)((int)puVar1 + 0x2f) = cVar7;
      uVar8 = (uint)CONCAT11(1,cVar7 + '\x03');
      *(undefined2 *)(puVar1 + 0xb) = 0x300;
      *(undefined1 *)((int)puVar1 + 0x2e) = 0xc;
      *(undefined1 *)(puVar1 + 0xc) = 2;
      *(undefined1 *)((int)puVar1 + 0x32) = 0;
      *(undefined1 *)((uVar4 >> 8) + 0x9c + (int)puVar1) = 3;
      if ((param_1 & 0x20) != 0) {
        uVar8 = (uint)CONCAT11(1,cVar7 + '\x04');
      }
    }
  }
  else {
    if ((uVar2 != 4) || ((param_1 & 0x10) != 0)) {
      uVar8 = 0;
      goto LAB_1003c58c;
    }
    param_3[1] = 0;
    uVar5 = 0x100;
    param_3[5] = 0x100400;
    *(undefined1 *)(param_3 + 6) = 3;
    uVar8 = 0x104;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x27) = 0;
  }
  if ((param_1 & 0x40) != 0) {
    uVar2 = uVar5 >> 8;
    uVar5 = (uint)(byte)((char)(uVar5 >> 8) + 1) << 8;
    *(char *)((int)puVar1 + 0x3f) = (char)uVar8;
    uVar8 = CONCAT31((int3)(uVar8 >> 8),(char)uVar8 + '\x01');
    *(undefined2 *)(puVar1 + 0xf) = 0x400;
    *(undefined1 *)((int)puVar1 + 0x3e) = 4;
    *(undefined1 *)(puVar1 + 0x10) = 4;
    *(undefined1 *)((int)puVar1 + 0x42) = 0;
    *(undefined1 *)(uVar2 + 0x9c + (int)puVar1) = 5;
  }
  if ((char)param_1 < '\0') {
    uVar2 = uVar5 >> 8;
    uVar5 = (uint)(byte)((char)(uVar5 >> 8) + 1) << 8;
    *(char *)((int)puVar1 + 0x47) = (char)uVar8;
    uVar8 = CONCAT31((int3)(uVar8 >> 8),(char)uVar8 + '\x01');
    *(undefined2 *)(puVar1 + 0x11) = 0x400;
    *(undefined1 *)((int)puVar1 + 0x46) = 4;
    *(undefined1 *)(puVar1 + 0x12) = 4;
    *(undefined1 *)((int)puVar1 + 0x4a) = 0;
    *(undefined1 *)(uVar2 + 0x9c + (int)puVar1) = 6;
  }
  param_3 = (uint *)0x0;
  if (puVar9 != (uint *)0x0) {
    do {
      bVar6 = (&DAT_1005f01c)[param_1 >> ((char)param_3 * '\x02' + 0x10U & 0x1f) & 3];
      *(char *)((int)puVar1 + (int)param_3 * 8 + 0x4f) = (char)uVar8;
      uVar8 = CONCAT31((int3)(uVar8 >> 8),(char)uVar8 + bVar6);
      *(byte *)((int)puVar1 + (int)param_3 * 8 + 0x4e) = bVar6 << 2;
      *(undefined1 *)(puVar1 + (int)param_3 * 2 + 0x13) = 0;
      *(byte *)((int)puVar1 + (int)param_3 * 8 + 0x4d) = bVar6;
      bVar6 = (&DAT_1005f01c)[(uint)bVar6 * 4];
      *(byte *)(puVar1 + (int)param_3 * 2 + 0x14) = bVar6;
      *(undefined *)((int)puVar1 + (int)param_3 * 8 + 0x52) = (&DAT_1005f014)[bVar6];
      bVar6 = (byte)(uVar5 >> 8);
      uVar5 = (uint)(byte)(bVar6 + 1) << 8;
      *(char *)((int)puVar1 + bVar6 + 0x9c) = (char)param_3 + '\a';
      param_3 = (uint *)((int)param_3 + 1);
    } while (param_3 < puVar9);
  }
  puVar1[2] = uVar5 >> 8;
  uVar2 = (uVar8 & 0xff) << 2;
  puVar1[3] = uVar2;
  puVar1[4] = 1;
  if (0x10 < (byte)(uVar5 >> 8)) {
    uVar8 = 0;
    puVar1[1] = 3;
  }
LAB_1003c58c:
  return CONCAT31((int3)(uVar2 >> 8),(char)(uVar8 >> 8));
}

