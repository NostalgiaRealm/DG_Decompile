/*
 * FUN_1005d2bc at 1005d2bc
 * uint __fastcall FUN_1005d2bc(uint param_1, char param_2, uint * param_3)
 * Address ranges: 1005d2bc-1005d5a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1005d2bc(uint param_1,char param_2,uint *param_3)

{
  char *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iStack_18;
  
  puVar4 = param_3;
  FUN_1005d293((int *)param_3);
  *param_3 = param_1;
  puVar11 = (uint *)(param_1 >> 8 & 0xf);
  param_3[1] = 3;
  uVar7 = param_1 & 0xe;
  uVar10 = 0;
  if (((param_1 & 0xe001) != 0) || (&DAT_00000008 < puVar11)) goto LAB_1005d5a3;
  if ((uVar7 == 2) ||
     ((param_2 != '\0' &&
      ((((uVar7 == 6 || (uVar7 == 8)) || (uVar7 == 10)) || ((uVar7 == 0xc || (uVar7 == 0xe)))))))) {
    param_3[5] = 0xc0300;
    *(undefined1 *)(param_3 + 6) = 2;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x27) = 0;
    param_3[1] = ((param_1 & 0x10) != 0) + 1;
    uVar3 = 3;
    uVar10 = 0x101;
    if (uVar7 == 6) {
      iStack_18 = 1;
    }
    else {
      iStack_18 = 2;
      if (uVar7 != 8) {
        if (uVar7 == 10) {
          iStack_18 = 3;
        }
        else if (uVar7 == 0xc) {
          iStack_18 = 4;
        }
        else {
          if (uVar7 != 0xe) {
            iStack_18 = 0;
            goto LAB_1005d3ed;
          }
          iStack_18 = 5;
        }
      }
    }
    cVar6 = (char)iStack_18;
    *(undefined1 *)((int)param_3 + 0x1f) = 3;
    uVar10 = 0x102;
    *(char *)((int)param_3 + 0x1e) = cVar6 << 2;
    uVar3 = (ushort)(byte)(cVar6 + 3);
    bVar2 = (&DAT_100b284c)[iStack_18 * 4];
    *(byte *)(param_3 + 8) = bVar2;
    *(undefined1 *)(param_3 + 7) = 0;
    *(char *)((int)param_3 + 0x1d) = cVar6;
    *(undefined *)((int)param_3 + 0x22) = (&DAT_100b2844)[bVar2];
    *(undefined1 *)((int)param_3 + 0x9d) = 1;
  }
  else {
    if ((uVar7 != 4) || ((param_1 & 0x10) != 0)) {
      uVar10 = 0;
      goto LAB_1005d5a3;
    }
    param_3[1] = 0;
    param_3[5] = 0x100400;
    uVar3 = 4;
    *(undefined1 *)(param_3 + 6) = 3;
    uVar10 = 0x101;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    iStack_18 = 0;
    *(undefined1 *)(param_3 + 0x27) = 0;
  }
LAB_1005d3ed:
  cVar6 = (char)uVar3;
  if ((param_1 & 0x1000) == 0) {
LAB_1005d43b:
    if ((param_1 & 0x10) != 0) {
      uVar7 = uVar10 & 0xff;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)uVar10 + '\x01');
      *(char *)((int)param_3 + 0x2f) = cVar6;
      uVar3 = (ushort)(byte)(cVar6 + 3);
      *(undefined2 *)(param_3 + 0xb) = 0x300;
      *(undefined1 *)((int)param_3 + 0x2e) = 0xc;
      *(undefined1 *)(param_3 + 0xc) = 2;
      *(undefined1 *)((int)param_3 + 0x32) = 0;
      *(undefined1 *)(uVar7 + 0x9c + (int)param_3) = 3;
    }
    if ((param_1 & 0x20) != 0) {
      uVar7 = uVar10 & 0xff;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)uVar10 + '\x01');
      *(char *)((int)param_3 + 0x37) = (char)uVar3;
      uVar3 = (ushort)(byte)((char)uVar3 + 1);
      *(undefined2 *)(param_3 + 0xd) = 0x100;
      *(undefined1 *)((int)param_3 + 0x36) = 4;
      *(undefined1 *)(param_3 + 0xe) = 0;
      *(undefined1 *)((int)param_3 + 0x3a) = 1;
      *(undefined1 *)(uVar7 + 0x9c + (int)param_3) = 4;
    }
    if ((param_1 & 0x40) != 0) {
      uVar7 = uVar10 & 0xff;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)uVar10 + '\x01');
      *(char *)((int)param_3 + 0x3f) = (char)uVar3;
      uVar3 = (ushort)(byte)((char)uVar3 + 1);
      *(undefined2 *)(param_3 + 0xf) = 0x400;
      *(undefined1 *)((int)param_3 + 0x3e) = 4;
      *(undefined1 *)(param_3 + 0x10) = 4;
      *(undefined1 *)((int)param_3 + 0x42) = 0;
      *(undefined1 *)(uVar7 + 0x9c + (int)param_3) = 5;
    }
    if ((char)param_1 < '\0') {
      uVar7 = uVar10 & 0xff;
      uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)uVar10 + '\x01');
      *(char *)((int)param_3 + 0x47) = (char)uVar3;
      uVar3 = (ushort)(byte)((char)uVar3 + 1);
      *(undefined2 *)(param_3 + 0x11) = 0x400;
      *(undefined1 *)((int)param_3 + 0x46) = 4;
      *(undefined1 *)(param_3 + 0x12) = 4;
      *(undefined1 *)((int)param_3 + 0x4a) = 0;
      *(undefined1 *)(uVar7 + 0x9c + (int)param_3) = 6;
    }
    uVar7 = (uint)(ushort)(uVar3 << 8);
    param_3 = (uint *)0x0;
    if (puVar11 != (uint *)0x0) {
      do {
        cVar6 = (&DAT_100b284c)[param_1 >> ((char)param_3 * '\x02' + 0x10U & 0x1f) & 3];
        cVar9 = (char)(uVar7 >> 8);
        *(char *)((int)puVar4 + (int)param_3 * 8 + 0x4f) = cVar9;
        uVar7 = (uint)CONCAT11(cVar9 + cVar6,cVar6);
        *(char *)((int)puVar4 + (int)param_3 * 8 + 0x4e) = cVar6 << 2;
        *(undefined1 *)(puVar4 + (int)param_3 * 2 + 0x13) = 0;
        *(char *)((int)puVar4 + (int)param_3 * 8 + 0x4d) = cVar6;
        bVar2 = (&DAT_100b284c)[(uVar7 & 0xff) * 4];
        *(byte *)(puVar4 + (int)param_3 * 2 + 0x14) = bVar2;
        *(undefined *)((int)puVar4 + (int)param_3 * 8 + 0x52) = (&DAT_100b2844)[bVar2];
        uVar5 = uVar10 & 0xff;
        uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)uVar10 + '\x01');
        *(char *)((int)puVar4 + uVar5 + 0x9c) = (char)param_3 + '\a';
        param_3 = (uint *)((int)param_3 + 1);
      } while (param_3 < puVar11);
    }
    puVar4[3] = (uVar7 >> 8) << 2;
    param_1 = 0;
    puVar4[2] = uVar10 & 0xff;
    puVar4[4] = 1;
    if ((byte)uVar10 != 0) {
      do {
        uVar7 = (uint)*(byte *)((int)puVar4 + param_1 + 0x9c);
        if ((char)puVar4[uVar7 * 2 + 5] != -1) {
          if (uVar7 < 0x11) {
            uVar8 = (&DAT_100b2830)[uVar7];
          }
          else {
            uVar8 = 0xff;
          }
          *(undefined1 *)((int)puVar4 + uVar7 * 8 + 0x19) = uVar8;
        }
        param_1 = param_1 + 1;
      } while (param_1 < puVar4[2]);
    }
    if ((byte)uVar10 < 0x11) goto LAB_1005d5a3;
    puVar4[1] = 3;
  }
  else if (iStack_18 != 0) {
    *(char *)((int)param_3 + 0x1e) = *(char *)((int)param_3 + 0x1e) + -4;
    pcVar1 = (char *)((int)param_3 + 0x1d);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)uVar10 + -1);
      *(undefined1 *)(param_3 + 7) = 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(undefined1 *)((int)param_3 + 0x26) = 4;
    *(undefined1 *)(param_3 + 10) = 5;
    *(char *)((int)param_3 + 0x27) = cVar6 + -1;
    uVar7 = uVar10 & 0xff;
    uVar10 = CONCAT31((int3)(uVar10 >> 8),(char)uVar10 + '\x01');
    *(undefined1 *)((int)param_3 + 0x2a) = 2;
    *(undefined1 *)(uVar7 + 0x9c + (int)param_3) = 2;
    goto LAB_1005d43b;
  }
  uVar10 = 0;
LAB_1005d5a3:
  return CONCAT31((int3)(param_1 >> 8),(char)(uVar10 >> 8));
}

