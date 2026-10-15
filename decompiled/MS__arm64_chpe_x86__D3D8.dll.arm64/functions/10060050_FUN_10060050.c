/*
 * FUN_10060050 at 10060050
 * undefined FUN_10060050(void)
 * Address ranges: 10060050-1006114f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060050(int param_1,int param_2,int param_3,undefined4 param_4,ulonglong param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  byte bVar15;
  bool bVar16;
  float fVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  int iVar22;
  
  fVar17 = (float)param_5;
  bVar15 = (byte)param_5;
  switch(param_4) {
  case 7:
    uVar20 = (uint)(fVar17 != 0.0);
    *(uint *)(param_2 + 0x3b4) = uVar20;
    *(uint *)(param_2 + 0x380) = uVar20;
    *(undefined1 *)(param_3 + 0xb) = 1;
    uVar20 = ~(*(uint *)(param_1 + 0x5948) >> 1) & 1;
    uVar19 = 0;
    if (fVar17 == 0.0) {
      uVar19 = 2;
    }
    uVar19 = uVar19 | uVar20;
    uVar11 = *(uint *)(param_1 + 0x520c);
    *(uint *)(param_1 + 0x520c) = uVar19;
    uVar20 = uVar20 ^ 1;
    *(byte *)(param_1 + 0xd981) = uVar11 != uVar19 | *(byte *)(param_1 + 0xd981);
    uVar19 = *(uint *)(param_1 + 0x524);
    *(uint *)(param_1 + 0x524) = uVar20;
    *(byte *)(param_1 + 0xd97d) = uVar19 != uVar20 | *(byte *)(param_1 + 0xd97d);
    return;
  case 8:
    uVar18 = 2;
    if (fVar17 != 2.8026e-45) {
      uVar18 = 3;
    }
    *(undefined4 *)(param_2 + 0x47c) = uVar18;
    *(bool *)(param_2 + 0x58c4) = fVar17 == 1.4013e-45;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 9:
    *(bool *)(param_2 + 0x58c3) = fVar17 == 1.4013e-45;
    uVar10 = 0x40000000;
    if (fVar17 != 1.4013e-45) {
      uVar10 = 0;
    }
    *(ulonglong *)(param_2 + 0x610) = uVar10 | *(ulonglong *)(param_2 + 0x610) & 0xffffffffbfffffff;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0xe:
    *(uint *)(param_2 + 0x3b8) = (uint)(fVar17 != 0.0);
    *(uint *)(param_2 + 900) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xf:
    *(bool *)(param_2 + 0x58c1) = fVar17 != 0.0;
    if (fVar17 == 0.0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)(param_2 + 0x5884);
    }
    *(undefined4 *)(param_2 + 0x4c64) = uVar18;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x13:
    if (0xd < (uint)fVar17) {
      return;
    }
    *(undefined4 *)(param_2 + 0x420) = *(undefined4 *)(&DAT_1012c5f0 + (int)fVar17 * 4);
    *(undefined4 *)(param_2 + 0x440) = *(undefined4 *)(&DAT_1012c570 + (int)fVar17 * 4);
    *(undefined4 *)(param_2 + 0x42c) = *(undefined4 *)(&DAT_1012c5b0 + (int)fVar17 * 4);
    *(undefined4 *)(param_2 + 0x44c) = *(undefined4 *)(&DAT_1012c530 + (int)fVar17 * 4);
    if (fVar17 == 1.54143e-44) {
      uVar18 = 6;
    }
    else {
      if (fVar17 != 1.82169e-44) goto LAB_10060270;
      uVar18 = 5;
    }
    *(undefined4 *)(param_2 + 0x444) = uVar18;
    *(undefined4 *)(param_2 + 0x424) = uVar18;
    *(undefined4 *)(param_2 + 0x450) = uVar18;
    *(undefined4 *)(param_2 + 0x430) = uVar18;
LAB_10060270:
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0x14:
    if ((uint)fVar17 < 0xe) {
      *(undefined4 *)(param_2 + 0x424) = *(undefined4 *)(&DAT_1012c5f0 + (int)fVar17 * 4);
      *(undefined4 *)(param_2 + 0x444) = *(undefined4 *)(&DAT_1012c570 + (int)fVar17 * 4);
      *(undefined4 *)(param_2 + 0x430) = *(undefined4 *)(&DAT_1012c5b0 + (int)fVar17 * 4);
      *(undefined4 *)(param_2 + 0x450) = *(undefined4 *)(&DAT_1012c530 + (int)fVar17 * 4);
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    break;
  case 0x16:
    if ((uint)fVar17 < 4) {
      *(undefined4 *)(param_2 + 0x480) = *(undefined4 *)(&DAT_1012c518 + (int)fVar17 * 4);
      *(undefined1 *)(param_3 + 0xd) = 1;
      return;
    }
    break;
  case 0x17:
    if ((uint)fVar17 < 9) {
      uVar20 = *(uint *)(param_2 + 0x589c);
      iVar22 = *(int *)(&DAT_1012c4f0 + (int)fVar17 * 4);
      *(int *)(param_2 + 0x3bc) = iVar22;
      *(int *)(param_2 + 0x388) = iVar22;
      if (uVar20 != 0) {
        iVar22 = *(int *)(&DAT_1012c4a8 + iVar22 * 4);
        iVar12 = (uVar20 * 5 >> 1) * iVar22;
        *(int *)(param_2 + 0x488) = iVar12;
        *(float *)(param_2 + 0x490) = (float)iVar22 * (float)uVar20 * 0.5;
        *(int *)(param_2 + 0x4b0) = iVar12;
        *(undefined1 *)(param_3 + 0xd) = 1;
      }
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x18:
    *(uint *)(param_2 + 0x4c60) = (uint)fVar17 & 0xff;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x4858) = *(undefined4 *)(param_2 + 0x4c60);
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 0x19:
    *(float *)(param_2 + 0x5884) = fVar17;
    *(ulonglong *)(param_2 + 0x610) =
         (*(ulonglong *)(param_2 + 0x610) ^ (ulonglong)((int)fVar17 - 1) << 0x1b) &
         0xffffffffc7ffffff ^ (ulonglong)((int)fVar17 - 1) << 0x1b;
    if (*(char *)(param_2 + 0x58c1) == '\0') {
      fVar17 = 0.0;
    }
    *(float *)(param_2 + 0x4c64) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1a:
    *(bool *)(param_2 + 0x58d0) = fVar17 != 0.0;
    uVar10 = 0x800000000;
    if (fVar17 != 0.0) {
      uVar10 = 0;
    }
    *(ulonglong *)(param_2 + 0x610) = uVar10 | *(ulonglong *)(param_2 + 0x610) & 0xfffffff7ffffffff;
    if ((fVar17 == 0.0) && (*(char *)(param_2 + 0x58d1) != '\0')) {
      iVar22 = 1;
    }
    else {
      iVar22 = 0;
    }
    *(byte *)(param_3 + 0x11) = *(int *)(param_2 + 0x4c7c) != iVar22 | *(byte *)(param_3 + 0x11);
    *(int *)(param_2 + 0x4c7c) = iVar22;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1b:
    *(uint *)(param_2 + 0x43c) = (uint)(fVar17 != 0.0);
    *(uint *)(param_2 + 0x41c) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0x1c:
    bVar16 = fVar17 == 0.0;
    uVar18 = 0x3f800000;
    if (bVar16) {
      uVar18 = 0;
    }
    *(undefined4 *)(param_2 + 0x4c68) = uVar18;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x58cf) = !bVar16;
    uVar10 = 0x100000000;
    if (bVar16) {
      uVar10 = 0;
    }
    *(ulonglong *)(param_2 + 0x610) = uVar10 | *(ulonglong *)(param_2 + 0x610) & 0xfffffffeffffffff;
    *(undefined1 *)(param_3 + 8) = 1;
    uVar19 = *(uint *)(param_2 + 0x5f0);
    uVar20 = uVar19 & 0xfbffffff;
    if (!bVar16) {
      uVar20 = uVar19 | 0x4000000;
    }
    *(uint *)(param_2 + 0x5f0) = uVar20;
    return;
  case 0x1d:
    *(uint *)(param_2 + 0x4c58) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x486c) = fVar17;
    *(undefined1 *)(param_3 + 0x38) = 1;
    uVar19 = *(uint *)(param_2 + 0x5f0);
    uVar20 = uVar19 & 0xffefffff;
    if (fVar17 != 0.0) {
      uVar20 = uVar19 | 0x100000;
    }
    *(uint *)(param_2 + 0x5f0) = uVar20;
    return;
  case 0x22:
    *(float *)(param_2 + 0x4cc0) = (float)((uint)fVar17 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cc4) = (float)((uint)fVar17 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cc8) = (float)((uint)fVar17 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4ccc) = (float)((uint)fVar17 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x47d0) = *(undefined4 *)(param_2 + 0x4cc0);
    *(undefined4 *)(param_2 + 0x47d4) = *(undefined4 *)(param_2 + 0x4cc4);
    *(undefined4 *)(param_2 + 0x47d8) = *(undefined4 *)(param_2 + 0x4cc8);
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 0x23:
    *(float *)(param_2 + 0x4c88) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(&DAT_00005898 + param_2) = fVar17;
    *(ulonglong *)(param_2 + 0x610) =
         (*(ulonglong *)(param_2 + 0x610) ^ param_5 << 0x21) & 0xfffffff9ffffffff ^ param_5 << 0x21;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x24:
    if (1e+37 <= ABS(fVar17)) {
      fVar17 = (float)((uint)fVar17 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x4c6c) = *(float *)(param_2 + 0x4c74) - fVar17;
    *(float *)(param_2 + 0x4c70) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x4868) = *(undefined4 *)(param_2 + 0x4c6c);
    *(undefined1 *)(param_3 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x46b8) = *(undefined4 *)(param_2 + 0x4c6c);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x25:
    if (1e+37 <= ABS(fVar17)) {
      fVar17 = (float)((uint)fVar17 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x4c74) = fVar17;
    *(float *)(param_2 + 0x4c6c) = fVar17 - *(float *)(param_2 + 0x4c70);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x4864) = *(undefined4 *)(param_2 + 0x4c74);
    *(undefined4 *)(param_2 + 0x4868) = *(undefined4 *)(param_2 + 0x4c6c);
    *(undefined1 *)(param_3 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x46b4) = *(undefined4 *)(param_2 + 0x4c74);
    *(undefined4 *)(param_2 + 0x46b8) = *(undefined4 *)(param_2 + 0x4c6c);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x26:
    *(float *)(param_2 + 0x4c78) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x4860) = *(undefined4 *)(param_2 + 0x4c78);
    *(undefined1 *)(param_3 + 0x38) = 1;
    *(undefined4 *)(param_2 + 0x46b0) = *(undefined4 *)(param_2 + 0x4c78);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x2f:
    fVar21 = 2.24208e-44;
    if ((uint)fVar17 < 0x11) {
      fVar21 = fVar17;
    }
    *(float *)(param_2 + 0x589c) = fVar21;
    iVar22 = *(int *)(&DAT_1012c4a8 + *(int *)(param_2 + 0x388) * 4);
    iVar12 = ((uint)((int)fVar21 * 5) >> 1) * iVar22;
    *(int *)(param_2 + 0x488) = iVar12;
    *(float *)(param_2 + 0x490) = (float)iVar22 * (float)(uint)fVar21 * 0.5;
    *(int *)(param_2 + 0x4b0) = iVar12;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 0x30:
    *(uint *)(param_2 + 0x4c80) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar19 = *(uint *)(param_2 + 0x5f0);
    uVar20 = uVar19 & 0xefffffff;
    if (fVar17 != 0.0) {
      uVar20 = uVar19 | 0x10000000;
    }
    *(uint *)(param_2 + 0x5f0) = uVar20;
    return;
  case 0x34:
    *(uint *)(param_2 + 0x38c) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x35:
    if ((uint)fVar17 < 9) {
      uVar18 = *(undefined4 *)(&DAT_1012c4f0 + (int)fVar17 * 4);
      *(undefined4 *)(param_2 + 0x3a4) = uVar18;
      *(undefined4 *)(param_2 + 0x394) = uVar18;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x36:
    if ((uint)fVar17 < 9) {
      uVar18 = *(undefined4 *)(&DAT_1012c4f0 + (int)fVar17 * 4);
      *(undefined4 *)(param_2 + 0x3a8) = uVar18;
      *(undefined4 *)(param_2 + 0x398) = uVar18;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x37:
    if ((uint)fVar17 < 9) {
      uVar18 = *(undefined4 *)(&DAT_1012c4f0 + (int)fVar17 * 4);
      *(undefined4 *)(param_2 + 0x3ac) = uVar18;
      *(undefined4 *)(param_2 + 0x39c) = uVar18;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x38:
    if ((uint)fVar17 < 9) {
      uVar18 = *(undefined4 *)(&DAT_1012c4f0 + (int)fVar17 * 4);
      *(undefined4 *)(param_2 + 0x3b0) = uVar18;
      *(undefined4 *)(param_2 + 0x3a0) = uVar18;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x39:
    *(byte *)(param_2 + 0x5800) = bVar15;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3a:
    *(byte *)(param_2 + 0x390) = bVar15;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3b:
    *(byte *)(param_2 + 0x391) = bVar15;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3c:
    *(float *)(param_2 + 0x4cd0) = (float)((uint)fVar17 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cd4) = (float)((uint)fVar17 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cd8) = (float)((uint)fVar17 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cdc) = (float)((uint)fVar17 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x4870) = *(undefined4 *)(param_2 + 0x4cd0);
    *(undefined4 *)(param_2 + 0x4874) = *(undefined4 *)(param_2 + 0x4cd4);
    *(undefined4 *)(param_2 + 0x4878) = *(undefined4 *)(param_2 + 0x4cd8);
    *(undefined4 *)(param_2 + 0x487c) = *(undefined4 *)(param_2 + 0x4cdc);
    *(undefined1 *)(param_3 + 0x38) = 1;
    return;
  case 0x80:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xfffffff0 | (uint)fVar17 & 0xf;
    return;
  case 0x81:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xffffff00 |
         *(uint *)(&DAT_000058bc + param_2) & 0xf | ((uint)fVar17 & 0xf) << 4;
    return;
  case 0x82:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xfffff000 |
         *(uint *)(&DAT_000058bc + param_2) & 0xff | ((uint)fVar17 & 0xf) << 8;
    return;
  case 0x83:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xffff0000 |
         *(uint *)(&DAT_000058bc + param_2) & 0xfff | ((uint)fVar17 & 0xf) << 0xc;
    return;
  case 0x84:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xfff00000 |
         *(uint *)(&DAT_000058bc + param_2) & 0xffff | ((uint)fVar17 & 0xf) << 0x10;
    return;
  case 0x85:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xff000000 |
         *(uint *)(&DAT_000058bc + param_2) & 0xfffff | ((uint)fVar17 & 0xf) << 0x14;
    return;
  case 0x86:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xf0000000 |
         *(uint *)(&DAT_000058bc + param_2) & 0xffffff | ((uint)fVar17 & 0xf) << 0x18;
    return;
  case 0x87:
    *(uint *)(&DAT_000058bc + param_2) =
         *(uint *)(&DAT_000058bc + param_2) & 0xfffffff | (int)fVar17 << 0x1c;
    return;
  case 0x89:
    *(uint *)(param_2 + 0x4c5c) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8b:
    *(float *)(param_2 + 0x4cb0) = (float)((uint)fVar17 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cb4) = (float)((uint)fVar17 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cb8) = (float)((uint)fVar17 & 0xff) / 255.0;
    *(float *)(param_2 + 0x4cbc) = (float)((uint)fVar17 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8c:
    *(float *)(param_2 + 0x4c8c) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x46bc) = *(undefined4 *)(param_2 + 0x4c8c);
    *(undefined1 *)(param_3 + 0x34) = 1;
    puVar1 = (uint *)(param_2 + 0x5f0);
    uVar20 = *puVar1;
    *puVar1 = uVar20 & 0xfcffffff;
    if ((uint)fVar17 < 4) {
      *puVar1 = uVar20 & 0xfcffffff | (int)fVar17 << 0x18;
      return;
    }
    break;
  case 0x8d:
    *(bool *)(param_2 + 0x58c2) = fVar17 != 0.0;
    puVar1 = (uint *)(param_2 + 0x5d8);
    puVar2 = (uint *)(param_2 + 0x5e8);
    puVar3 = (uint *)(param_2 + 0x5ec);
    if (fVar17 == 0.0) {
      *(undefined8 *)(param_2 + 0x50f0) = 0;
      *(undefined8 *)(param_2 + 0x50f8) = 0;
      *puVar1 = *puVar1 & 0xffffff00;
      *puVar2 = *puVar2 | 0xff;
      *puVar3 = *puVar3 | 0xff;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    }
    iVar22 = *(int *)(param_2 + 0x5888);
    iVar12 = *(int *)(param_2 + 0x588c);
    uVar19 = *(uint *)(&DAT_00005890 + param_2);
    iVar13 = *(int *)(param_2 + 0x5894);
    *(int *)(param_2 + 0x50f0) = iVar22;
    *(int *)(param_2 + 0x50f4) = iVar12;
    uVar20 = 0;
    if (iVar22 != 2) {
      uVar20 = 0x30;
    }
    *(uint *)(param_2 + 0x50f8) = uVar19;
    *(int *)(param_2 + 0x50fc) = iVar13;
    uVar11 = (*puVar1 ^ iVar22 << 4) & 0x30 ^ *puVar1;
    uVar11 = ((uVar11 ^ iVar12 << 6) & 0xc0 ^ uVar11) & 0xfffffffc | uVar19 & 3;
    uVar4 = 0;
    if (iVar12 != 2) {
      uVar4 = 0xc0;
    }
    uVar5 = 0;
    if (uVar19 != 2) {
      uVar5 = 3;
    }
    uVar6 = 0;
    if (iVar13 != 2) {
      uVar6 = 0xc;
    }
    uVar7 = 0;
    if (iVar22 != 1) {
      uVar7 = 0x30;
    }
    uVar8 = 0;
    if (iVar12 != 1) {
      uVar8 = 0xc0;
    }
    uVar9 = 0;
    if (uVar19 != 1) {
      uVar9 = 3;
    }
    uVar19 = 0;
    if (iVar13 != 1) {
      uVar19 = 0xc;
    }
    *puVar1 = (uVar11 ^ iVar13 << 2) & 0xc ^ uVar11;
    *puVar2 = uVar7 | *puVar2 & 0xffffff00 | uVar8 | uVar9 | uVar19;
    *puVar3 = uVar20 | *puVar3 & 0xffffff00 | uVar4 | uVar5 | uVar6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8e:
    *(uint *)(param_2 + 0x4c50) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar19 = *(uint *)(param_2 + 0x5f0);
    uVar20 = uVar19 & 0xdfffffff;
    if (fVar17 != 0.0) {
      uVar20 = uVar19 | 0x20000000;
    }
    *(uint *)(param_2 + 0x5f0) = uVar20;
    return;
  case 0x8f:
    *(uint *)(param_2 + 0x4c54) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar19 = *(uint *)(param_2 + 0x5f0);
    uVar20 = uVar19 & 0xff7fffff;
    if (fVar17 != 0.0) {
      uVar20 = uVar19 | 0x800000;
    }
    *(uint *)(param_2 + 0x5f0) = uVar20;
    return;
  case 0x91:
    *(float *)(param_2 + 0x5888) = fVar17;
    if (*(char *)(param_2 + 0x58c2) != '\0') {
      *(float *)(param_2 + 0x50f0) = fVar17;
      *(undefined1 *)(param_3 + 0x11) = 1;
      uVar20 = *(uint *)(param_2 + 0x5d8);
      *(uint *)(param_2 + 0x5d8) = uVar20 & 0xffffffc0 | uVar20 & 0xf | ((uint)fVar17 & 3) << 4;
      uVar20 = 0;
      if (fVar17 != 1.4013e-45) {
        uVar20 = 0x30;
      }
      *(uint *)(param_2 + 0x5e8) = uVar20 | *(uint *)(param_2 + 0x5e8) & 0xffffffcf;
      uVar20 = 0;
      if (fVar17 != 2.8026e-45) {
        uVar20 = 0x30;
      }
      *(uint *)(param_2 + 0x5ec) = uVar20 | *(uint *)(param_2 + 0x5ec) & 0xffffffcf;
      return;
    }
    break;
  case 0x92:
    *(float *)(param_2 + 0x588c) = fVar17;
    if (*(char *)(param_2 + 0x58c2) != '\0') {
      *(float *)(param_2 + 0x50f4) = fVar17;
      *(undefined1 *)(param_3 + 0x11) = 1;
      uVar20 = *(uint *)(param_2 + 0x5d8);
      *(uint *)(param_2 + 0x5d8) = uVar20 & 0xffffff00 | uVar20 & 0x3f | ((uint)fVar17 & 3) << 6;
      uVar20 = 0;
      if (fVar17 != 1.4013e-45) {
        uVar20 = 0xc0;
      }
      *(uint *)(param_2 + 0x5e8) = uVar20 | *(uint *)(param_2 + 0x5e8) & 0xffffff3f;
      uVar20 = 0;
      if (fVar17 != 2.8026e-45) {
        uVar20 = 0xc0;
      }
      *(uint *)(param_2 + 0x5ec) = uVar20 | *(uint *)(param_2 + 0x5ec) & 0xffffff3f;
      return;
    }
    break;
  case 0x93:
    cVar14 = *(char *)(param_2 + 0x58c2);
    *(float *)(&DAT_00005890 + param_2) = fVar17;
    if (cVar14 != '\0') {
      *(float *)(param_2 + 0x50f8) = fVar17;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0x5d8) = *(uint *)(param_2 + 0x5d8) & 0xfffffffc | (uint)fVar17 & 3;
      uVar20 = 0;
      if (fVar17 != 1.4013e-45) {
        uVar20 = 3;
      }
      *(uint *)(param_2 + 0x5e8) = uVar20 | *(uint *)(param_2 + 0x5e8) & 0xfffffffc;
      uVar20 = 0;
      if (fVar17 != 2.8026e-45) {
        uVar20 = 3;
      }
      *(uint *)(param_2 + 0x5ec) = uVar20 | *(uint *)(param_2 + 0x5ec) & 0xfffffffc;
      return;
    }
    break;
  case 0x94:
    *(float *)(param_2 + 0x5894) = fVar17;
    if (*(char *)(param_2 + 0x58c2) != '\0') {
      *(float *)(param_2 + 0x50fc) = fVar17;
      *(undefined1 *)(param_3 + 0x11) = 1;
      uVar20 = *(uint *)(param_2 + 0x5d8);
      *(uint *)(param_2 + 0x5d8) = uVar20 & 0xfffffff0 | uVar20 & 3 | ((uint)fVar17 & 3) << 2;
      uVar20 = 0;
      if (fVar17 != 1.4013e-45) {
        uVar20 = 0xc;
      }
      *(uint *)(param_2 + 0x5e8) = uVar20 | *(uint *)(param_2 + 0x5e8) & 0xfffffff3;
      uVar20 = 0;
      if (fVar17 != 2.8026e-45) {
        uVar20 = 0xc;
      }
      *(uint *)(param_2 + 0x5ec) = uVar20 | *(uint *)(param_2 + 0x5ec) & 0xfffffff3;
      return;
    }
    break;
  case 0x97:
    *(uint *)(param_2 + 0x5204) = (uint)(fVar17 == 3.57331e-43);
    if (fVar17 == 3.58732e-43) {
      fVar21 = 7.00649e-45;
    }
    else {
      fVar21 = 0.0;
      if ((uint)fVar17 < 4) {
        fVar21 = fVar17;
      }
    }
    *(float *)(param_2 + 0x58b0) = fVar21;
    uVar19 = *(uint *)(param_2 + 0x5f0);
    uVar20 = uVar19 & 0xffdfffff;
    if (fVar21 == 3.57331e-43) {
      uVar20 = uVar19 | 0x200000;
    }
    *(uint *)(param_2 + 0x5f0) = uVar20;
    return;
  case 0x98:
    *(uint *)(param_2 + 0x5160) = -(uint)((param_5 & 1) != 0);
    *(uint *)(param_2 + 0x5164) = -(uint)((param_5 & 2) != 0);
    *(uint *)(param_2 + 0x5168) = -(uint)((param_5 & 4) != 0);
    *(uint *)(param_2 + 0x516c) = -(uint)((param_5 & 8) != 0);
    *(uint *)(param_2 + 0x5170) = -(uint)((param_5 & 0x10) != 0);
    *(uint *)(param_2 + 0x5174) = -(uint)((param_5 & 0x20) != 0);
    *(uint *)(param_2 + 0x58b4) = (uint)fVar17 & 0x3f;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x4840) = *(undefined4 *)(param_2 + 0x5160);
    *(undefined4 *)(param_2 + 0x4844) = *(undefined4 *)(param_2 + 0x5164);
    *(undefined4 *)(param_2 + 0x4848) = *(undefined4 *)(param_2 + 0x5168);
    *(undefined4 *)(param_2 + 0x484c) = *(undefined4 *)(param_2 + 0x516c);
    *(undefined4 *)(param_2 + 0x4850) = *(undefined4 *)(param_2 + 0x5170);
    *(undefined4 *)(param_2 + 0x4854) = *(undefined4 *)(param_2 + 0x5174);
    *(undefined1 *)(param_3 + 0x38) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x9a:
    *(float *)(param_2 + 0x5210) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if ((*(float *)(param_2 + 0x5210) != 1.0) &&
       ((*(float *)(param_2 + 0x5218) != 1.0 || (*(float *)(param_2 + 0x5214) != 1.0)))) {
LAB_10060f44:
      *(undefined1 *)(param_2 + 0x58ca) = 1;
      return;
    }
    goto LAB_10060f50;
  case 0x9b:
    *(float *)(param_2 + 0x5218) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x5210) != 1.0) {
      if (*(float *)(param_2 + 0x5218) != 1.0) goto LAB_10060f44;
      if (*(float *)(param_2 + 0x5214) != 1.0) {
        *(undefined1 *)(param_2 + 0x58ca) = 1;
        return;
      }
    }
    goto LAB_10060f50;
  case 0x9c:
    *(uint *)(param_2 + 0x521c) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x9d:
    *(uint *)(param_2 + 0x5220) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x58c9) = fVar17 != 0.0;
    return;
  case 0x9e:
    *(float *)(param_2 + 0x5224) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x9f:
    *(float *)(param_2 + 0x5228) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa0:
    *(float *)(param_2 + 0x522c) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa2:
    *(float *)(param_1 + 0x55c) = fVar17;
    *(undefined1 *)(param_1 + 0xd97c) = 1;
    return;
  case 0xa6:
    *(float *)(param_2 + 0x5214) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x5210) != 1.0) {
      if (*(float *)(param_2 + 0x5218) != 1.0) goto LAB_10060f44;
      if (*(float *)(param_2 + 0x5214) != 1.0) {
        *(undefined1 *)(param_2 + 0x58ca) = 1;
        return;
      }
    }
LAB_10060f50:
    *(undefined1 *)(param_2 + 0x58ca) = 0;
    return;
  case 0xa7:
    *(uint *)(param_2 + 0x5200) = (uint)(fVar17 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa8:
    *(byte *)(param_2 + 0x458) = bVar15 & 0xf;
    *(byte *)(param_2 + 0x438) = bVar15 & 0xf;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xaa:
    *(float *)(param_2 + 21000) = fVar17;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xab:
    if (5 < (uint)fVar17) {
      fVar17 = 1.4013e-45;
    }
    uVar18 = *(undefined4 *)(&DAT_1012c62c + (int)fVar17 * 4);
    *(undefined4 *)(param_2 + 0x454) = uVar18;
    *(undefined4 *)(param_2 + 0x434) = uVar18;
    *(undefined4 *)(param_2 + 0x448) = uVar18;
    *(undefined4 *)(param_2 + 0x428) = uVar18;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xac:
    bVar16 = fVar17 == 4.2039e-45;
    uVar20 = *(uint *)(param_2 + 0x4c4c) & 0xfffffffd;
    uVar19 = *(uint *)(param_2 + 0x4c4c) | 2;
    goto LAB_10061138;
  case 0xad:
    bVar16 = fVar17 == 2.8026e-45;
    uVar20 = *(uint *)(param_2 + 0x4c4c) & 0xfffffffb;
    uVar19 = *(uint *)(param_2 + 0x4c4c) | 4;
LAB_10061138:
    if (bVar16) {
      uVar20 = uVar19;
    }
    *(uint *)(param_2 + 0x4c4c) = uVar20;
    *(undefined1 *)(param_3 + 0x11) = 1;
  }
  return;
}

