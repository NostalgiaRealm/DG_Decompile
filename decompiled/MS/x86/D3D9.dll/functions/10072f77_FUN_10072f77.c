/*
 * FUN_10072f77 at 10072f77
 * uint __fastcall FUN_10072f77(uint param_1, char param_2, uint * param_3)
 * Address ranges: 10072f77-10073325
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10072f77(uint param_1,char param_2,uint *param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  char cVar12;
  ushort uVar11;
  byte bVar13;
  uint *puStack_20;
  char local_8;
  
  puVar4 = param_3;
  FUN_10072f49((int *)param_3);
  bVar13 = 0;
  uVar10 = param_1 & 0x400e;
  puVar5 = (uint *)(param_1 >> 8 & 0xf);
  *param_3 = param_1;
  uVar3 = 0;
  param_3[1] = 4;
  if ((param_1 & 0x2001) != 0) {
    return 0;
  }
  if (&DAT_00000008 < puVar5) {
    return 0;
  }
  local_8 = (char)param_1;
  if ((uVar10 == 2) ||
     ((param_2 != '\0' &&
      ((((uVar10 == 6 || (uVar10 == 8)) || (uVar10 == 10)) || ((uVar10 == 0xc || (uVar10 == 0xe)))))
      ))) {
    param_3[5] = 0xc0300;
    bVar13 = 1;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 6) = 2;
    uVar7 = 0x301;
    *(undefined1 *)(param_3 + 0x85) = 0;
    param_3[1] = ((param_1 & 0x10) != 0) + 1;
  }
  else {
    if (uVar10 == 4) {
      if ((param_1 & 0x10) == 0) {
        bVar13 = 1;
        param_3[1] = 0;
        uVar3 = 4;
        param_3[5] = 0x100400;
        *(undefined1 *)(param_3 + 6) = 3;
        *(undefined1 *)((int)param_3 + 0x1a) = 0;
        *(undefined1 *)(param_3 + 0x85) = 0;
      }
    }
    else if (uVar10 == 0x4002) {
      param_3[1] = 3;
      bVar13 = 1;
      param_3[5] = 0x100400;
      *(undefined1 *)(param_3 + 6) = 3;
      *(undefined1 *)((int)param_3 + 0x1a) = 0;
      *(undefined1 *)(param_3 + 0x85) = 0;
      uVar7 = 0x401;
      param_3 = (uint *)0x0;
      goto LAB_100730f3;
    }
    uVar7 = CONCAT31(uVar3,bVar13);
    if (bVar13 == 0) {
      return 0;
    }
  }
  param_3 = (uint *)0x0;
  if (uVar10 == 6) {
    puStack_20 = (uint *)0x1;
  }
  else {
    puStack_20 = (uint *)0x2;
    if (uVar10 != 8) {
      if (uVar10 == 10) {
        puStack_20 = (uint *)0x3;
      }
      else if (uVar10 == 0xc) {
        puStack_20 = (uint *)&DAT_00000004;
      }
      else {
        if (uVar10 != 0xe) goto LAB_100730f3;
        puStack_20 = (uint *)0x5;
      }
    }
  }
  cVar8 = (char)puStack_20;
  cVar12 = (char)(uVar7 >> 8);
  *(char *)((int)puVar4 + 0x1f) = cVar12;
  *(char *)((int)puVar4 + 0x1e) = cVar8 << 2;
  bVar2 = (&DAT_100d5fb4)[(int)puStack_20 * 4];
  *(byte *)(puVar4 + 8) = bVar2;
  *(undefined1 *)(puVar4 + 7) = 0;
  *(char *)((int)puVar4 + 0x1d) = cVar8;
  *(undefined *)((int)puVar4 + 0x22) = (&DAT_100d5fa0)[bVar2];
  uVar10 = (uint)bVar13;
  bVar13 = bVar13 + 1;
  uVar7 = (uint)CONCAT11(cVar12 + cVar8,(char)uVar7);
  *(undefined1 *)(uVar10 + 0x214 + (int)puVar4) = 1;
  param_3 = puStack_20;
LAB_100730f3:
  if ((param_1 & 0x1000) != 0) {
    if (param_3 == (uint *)0x0) {
      uVar7 = uVar7 & 0xffffff00;
    }
    else {
      *(char *)((int)puVar4 + 0x1e) = *(char *)((int)puVar4 + 0x1e) + -4;
      pcVar1 = (char *)((int)puVar4 + 0x1d);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        bVar13 = bVar13 - 1;
        *(undefined1 *)(puVar4 + 7) = 0xff;
        *(undefined1 *)((int)puVar4 + 0x21) = 0xff;
      }
      *(undefined2 *)(puVar4 + 9) = 0x100;
      *(undefined1 *)((int)puVar4 + 0x26) = 4;
      *(char *)((int)puVar4 + 0x27) = (char)(uVar7 >> 8) + -1;
      uVar10 = (uint)bVar13;
      bVar13 = bVar13 + 1;
      *(undefined1 *)(puVar4 + 10) = 5;
      *(undefined1 *)((int)puVar4 + 0x2a) = 2;
      *(undefined1 *)(uVar10 + 0x214 + (int)puVar4) = 2;
    }
  }
  uVar10 = 0;
  if ((param_1 & 0x9000) != 0x9000) {
    uVar10 = uVar7 & 0xff;
  }
  cVar8 = (char)(uVar7 >> 8);
  if ((param_1 & 0x8000) != 0) {
    if (param_3 == (uint *)0x0) {
      return 0;
    }
    *(char *)((int)puVar4 + 0x1e) = *(char *)((int)puVar4 + 0x1e) + -4;
    pcVar1 = (char *)((int)puVar4 + 0x1d);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      bVar13 = bVar13 - 1;
      *(undefined1 *)(puVar4 + 7) = 0xff;
      *(undefined1 *)((int)puVar4 + 0x21) = 0xff;
    }
    *(undefined2 *)(puVar4 + 9) = 0x100;
    *(undefined1 *)((int)puVar4 + 0x26) = 4;
    *(char *)((int)puVar4 + 0x27) = cVar8 + -1;
    uVar6 = (uint)bVar13;
    bVar13 = bVar13 + 1;
    *(undefined1 *)(puVar4 + 10) = 4;
    *(undefined1 *)((int)puVar4 + 0x2a) = 0;
    *(undefined1 *)(uVar6 + 0x214 + (int)puVar4) = 2;
  }
  if ((char)uVar10 != '\0') {
    if ((param_1 & 0x10) != 0) {
      uVar6 = (uint)bVar13;
      bVar13 = bVar13 + 1;
      *(char *)((int)puVar4 + 0x2f) = cVar8;
      uVar7 = (uint)(byte)(cVar8 + 3) << 8;
      *(undefined2 *)(puVar4 + 0xb) = 0x300;
      *(undefined1 *)((int)puVar4 + 0x2e) = 0xc;
      *(undefined1 *)(puVar4 + 0xc) = 2;
      *(undefined1 *)((int)puVar4 + 0x32) = 0;
      *(undefined1 *)(uVar6 + 0x214 + (int)puVar4) = 3;
    }
    if ((param_1 & 0x20) != 0) {
      uVar6 = (uint)bVar13;
      bVar13 = bVar13 + 1;
      cVar8 = (char)(uVar7 >> 8);
      *(char *)((int)puVar4 + 0x37) = cVar8;
      uVar7 = (uint)(byte)(cVar8 + 1) << 8;
      *(undefined2 *)(puVar4 + 0xd) = 0x100;
      *(undefined1 *)((int)puVar4 + 0x36) = 4;
      *(undefined1 *)(puVar4 + 0xe) = 0;
      *(undefined1 *)((int)puVar4 + 0x3a) = 1;
      *(undefined1 *)(uVar6 + 0x214 + (int)puVar4) = 4;
    }
    if ((param_1 & 0x40) != 0) {
      uVar6 = (uint)bVar13;
      bVar13 = bVar13 + 1;
      cVar8 = (char)(uVar7 >> 8);
      *(char *)((int)puVar4 + 0x3f) = cVar8;
      uVar7 = (uint)(byte)(cVar8 + 1) << 8;
      *(undefined2 *)(puVar4 + 0xf) = 0x400;
      *(undefined1 *)((int)puVar4 + 0x3e) = 4;
      *(undefined1 *)(puVar4 + 0x10) = 4;
      *(undefined1 *)((int)puVar4 + 0x42) = 0;
      *(undefined1 *)(uVar6 + 0x214 + (int)puVar4) = 5;
    }
    if (local_8 < '\0') {
      uVar6 = (uint)bVar13;
      bVar13 = bVar13 + 1;
      cVar8 = (char)(uVar7 >> 8);
      *(char *)((int)puVar4 + 0x47) = cVar8;
      uVar7 = (uint)(byte)(cVar8 + 1) << 8;
      *(undefined2 *)(puVar4 + 0x11) = 0x400;
      *(undefined1 *)((int)puVar4 + 0x46) = 4;
      *(undefined1 *)(puVar4 + 0x12) = 4;
      *(undefined1 *)((int)puVar4 + 0x4a) = 0;
      *(undefined1 *)(uVar6 + 0x214 + (int)puVar4) = 6;
    }
    param_3 = (uint *)0x0;
    if (puVar5 != (uint *)0x0) {
      do {
        cVar8 = (&DAT_100d5fb4)[param_1 >> ((char)param_3 * '\x02' + 0x10U & 0x1f) & 3];
        cVar12 = (char)(uVar7 >> 8);
        *(char *)((int)puVar4 + (int)param_3 * 8 + 0x4f) = cVar12;
        uVar11 = CONCAT11(cVar12 + cVar8,cVar8);
        uVar7 = (uint)uVar11;
        *(char *)((int)puVar4 + (int)param_3 * 8 + 0x4e) = cVar8 << 2;
        *(undefined1 *)(puVar4 + (int)param_3 * 2 + 0x13) = 0;
        *(char *)((int)puVar4 + (int)param_3 * 8 + 0x4d) = cVar8;
        bVar2 = (&DAT_100d5fb4)[(uVar11 & 0xff) * 4];
        *(byte *)(puVar4 + (int)param_3 * 2 + 0x14) = bVar2;
        *(undefined *)((int)puVar4 + (int)param_3 * 8 + 0x52) = (&DAT_100d5fa0)[bVar2];
        uVar6 = (uint)bVar13;
        bVar13 = bVar13 + 1;
        *(char *)((int)puVar4 + uVar6 + 0x214) = (char)param_3 + '\a';
        param_3 = (uint *)((int)param_3 + 1);
      } while (param_3 < puVar5);
    }
    uVar6 = 0;
    puVar4[2] = (uint)bVar13;
    puVar4[3] = (uVar7 >> 8) << 2;
    puVar4[4] = 1;
    if (bVar13 != 0) {
      do {
        uVar7 = (uint)*(byte *)((int)puVar4 + uVar6 + 0x214);
        if ((char)puVar4[uVar7 * 2 + 5] != -1) {
          if (uVar7 < 0x11) {
            uVar9 = (&DAT_100d5f8c)[uVar7];
          }
          else {
            uVar9 = 0xff;
          }
          *(undefined1 *)((int)puVar4 + uVar7 * 8 + 0x19) = uVar9;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < puVar4[2]);
    }
    if (0x10 < bVar13) {
      puVar4[1] = 4;
      return 0;
    }
    return uVar10;
  }
  return uVar10;
}

