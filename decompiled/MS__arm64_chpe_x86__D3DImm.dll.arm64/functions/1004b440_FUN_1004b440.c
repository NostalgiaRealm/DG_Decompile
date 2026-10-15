/*
 * FUN_1004b440 at 1004b440
 * undefined FUN_1004b440(void)
 * Address ranges: 1004b440-1004b817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1004b440(uint param_1,char param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_1004b3f0(param_3);
  *param_3 = param_1;
  puVar1 = param_3 + 1;
  *puVar1 = 3;
  if ((param_1 & 0xf001) != 0) {
    return false;
  }
  uVar3 = param_1 >> 8 & 0xf;
  if (8 < uVar3) {
    return false;
  }
  uVar8 = param_1 & 0xe;
  if ((uVar8 != 2) && ((param_2 == '\0' || (8 < uVar8 - 6)))) {
    if (uVar8 != 4) {
      return false;
    }
    if ((param_1 >> 4 & 1) != 0) {
      return false;
    }
    *puVar1 = 0;
    param_3[5] = 0x100400;
    *(undefined1 *)(param_3 + 6) = 3;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x27) = 0;
    uVar8 = 1;
    uVar6 = 4;
    goto LAB_1004b680;
  }
  param_3[5] = 0xc0300;
  *(undefined1 *)(param_3 + 6) = 2;
  *(undefined1 *)((int)param_3 + 0x1a) = 0;
  *(undefined1 *)(param_3 + 0x27) = 0;
  if ((param_1 & 0x10) == 0) {
    uVar6 = 3;
    if ((param_1 & 0x20) != 0) {
      uVar6 = 4;
    }
    cVar4 = (char)uVar6;
    uVar9 = 1;
  }
  else {
    uVar6 = 3;
    uVar9 = 2;
    cVar4 = '\x03';
  }
  *puVar1 = uVar9;
  switch(uVar8) {
  case 6:
    iVar5 = 1;
    break;
  case 8:
    iVar5 = 2;
    break;
  case 10:
    iVar5 = 3;
    break;
  case 0xc:
    iVar5 = 4;
    break;
  case 0xe:
    iVar5 = 5;
    break;
  default:
    uVar8 = 1;
    goto LAB_1004b61c;
  }
  *(undefined1 *)(param_3 + 7) = 0;
  *(char *)((int)param_3 + 0x1d) = (char)iVar5;
  *(char *)((int)param_3 + 0x1e) = (char)(iVar5 << 2);
  *(char *)((int)param_3 + 0x1f) = (char)uVar6;
  bVar2 = (&DAT_1009e29c)[iVar5 * 4];
  *(byte *)(param_3 + 8) = bVar2;
  *(undefined1 *)((int)param_3 + 0x22) = *(undefined1 *)(bVar2 + 0x1009e290);
  *(undefined1 *)((int)param_3 + 0x9d) = 1;
  uVar6 = (uint)(byte)(cVar4 + (char)iVar5);
  uVar8 = 2;
LAB_1004b61c:
  if ((param_1 & 0x10) != 0) {
    *(undefined2 *)(param_3 + 0xb) = 0x300;
    *(undefined1 *)((int)param_3 + 0x2e) = 0xc;
    cVar4 = (char)uVar6;
    *(char *)((int)param_3 + 0x2f) = cVar4;
    *(undefined1 *)(param_3 + 0xc) = 2;
    *(undefined1 *)((int)param_3 + 0x32) = 0;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 3;
    uVar8 = uVar8 + 1;
    uVar6 = (uint)(byte)(cVar4 + 3);
    if ((param_1 >> 5 & 1) != 0) {
      uVar6 = (uint)(byte)(cVar4 + 4);
    }
  }
LAB_1004b680:
  if ((param_1 >> 6 & 1) != 0) {
    *(undefined2 *)(param_3 + 0xf) = 0x400;
    *(undefined1 *)((int)param_3 + 0x3e) = 4;
    *(char *)((int)param_3 + 0x3f) = (char)uVar6;
    *(undefined1 *)(param_3 + 0x10) = 4;
    *(undefined1 *)((int)param_3 + 0x42) = 0;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 5;
    uVar8 = uVar8 + 1;
    uVar6 = (uint)(byte)((char)uVar6 + 1);
  }
  if ((param_1 >> 7 & 1) != 0) {
    *(undefined2 *)(param_3 + 0x11) = 0x400;
    *(undefined1 *)((int)param_3 + 0x46) = 4;
    *(char *)((int)param_3 + 0x47) = (char)uVar6;
    *(undefined1 *)(param_3 + 0x12) = 4;
    *(undefined1 *)((int)param_3 + 0x4a) = 0;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 6;
    uVar8 = uVar8 + 1;
    uVar6 = (uint)(byte)((char)uVar6 + 1);
  }
  uVar9 = 0;
  uVar7 = uVar6;
  if (uVar3 != 0) {
    do {
      bVar2 = *(byte *)((param_1 >> (ulonglong)(uVar9 * 2 + 0x10 & 0x1f) & 3) + 0x1009e298);
      *(undefined1 *)(param_3 + uVar9 * 2 + 0x13) = 0;
      *(byte *)((int)param_3 + uVar9 * 8 + 0x4d) = bVar2;
      *(byte *)((int)param_3 + uVar9 * 8 + 0x4e) = bVar2 << 2;
      *(char *)((int)param_3 + uVar9 * 8 + 0x4f) = (char)uVar7;
      uVar7 = uVar7 + bVar2;
      uVar6 = uVar7 & 0xff;
      bVar2 = (&DAT_1009e29c)[(uint)bVar2 * 4];
      *(byte *)(param_3 + uVar9 * 2 + 0x14) = bVar2;
      *(undefined1 *)((int)param_3 + uVar9 * 8 + 0x52) = *(undefined1 *)(bVar2 + 0x1009e290);
      *(char *)((int)param_3 + uVar8 + 0x9c) = (char)uVar9 + '\a';
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 1 & 0xff;
      uVar7 = uVar7 & 0xff;
    } while (uVar9 < uVar3);
  }
  param_3[2] = uVar8;
  param_3[3] = uVar6 << 2;
  param_3[4] = 1;
  if (uVar8 >= 0x11) {
    *puVar1 = 3;
  }
  return uVar8 < 0x11;
}

