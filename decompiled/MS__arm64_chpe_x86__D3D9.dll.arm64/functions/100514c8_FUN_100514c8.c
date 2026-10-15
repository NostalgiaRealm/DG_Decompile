/*
 * FUN_100514c8 at 100514c8
 * undefined FUN_100514c8(void)
 * Address ranges: 100514c8-100516d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100514c8(uint *param_1,byte param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte local_20 [4];
  uint local_1c;
  
  uVar2 = param_1[0x11];
  if ((uVar2 & 1) == 0) {
    uVar11 = param_1[0xf];
  }
  else {
    uVar11 = 0xffffffff;
  }
  if ((uVar2 >> 1 & 1) == 0) {
    uVar10 = param_1[0x10];
  }
  else {
    uVar10 = 0xffffffff;
  }
  uVar8 = (uint)param_2;
  local_1c = 0;
  uVar1 = (int)uVar2 >> 0x1f;
  uVar3 = (&DAT_10170b40)[uVar8];
  param_1[5] = uVar3;
  uVar9 = (uint)param_2;
  uVar4 = uVar3 | uVar9 << 0x18;
  uVar9 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
  param_1[7] = uVar4;
  param_1[8] = uVar3;
  lVar7 = LZCOUNT((uVar9 >> 4 | (uVar9 & 0xf0f0f0f) << 4) << 0x18);
  uVar5 = (uint)lVar7;
  uVar9 = 0;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    local_20[(int)uVar5 >> 3] =
         local_20[(int)uVar5 >> 3] & ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    uVar5 = *param_1;
    while( true ) {
      local_1c = (uint)(byte)((byte)local_1c |
                             (byte)(1 << (ulonglong)
                                         (uVar5 >> (ulonglong)((int)lVar7 * 3 & 0x1f) & 7)));
      uVar9 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
      uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
      lVar7 = LZCOUNT((uVar9 >> 4 | (uVar9 & 0xf0f0f0f) << 4) << 0x18);
      uVar6 = (uint)lVar7;
      uVar9 = local_1c;
      if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
      local_20[(int)uVar6 >> 3] =
           local_20[(int)uVar6 >> 3] & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    }
  }
  uVar5 = param_1[10];
  uVar8 = (&DAT_10170b40)[uVar9];
  param_1[6] = uVar8;
  uVar2 = (uVar9 << 3 | 0xfffff807) & uVar2;
  uVar9 = uVar5 & uVar1;
  param_1[0x11] = uVar2;
  param_1[0xc] = uVar9;
  uVar11 = uVar1 & uVar10 & uVar11;
  param_1[0xd] = uVar11;
  param_1[0xe] = uVar1;
  *param_3 = CONCAT44(param_1[1] & uVar8,param_1[4] & uVar3 & *param_1);
  param_3[1] = CONCAT44(param_1[3] & uVar3,param_1[2] & uVar4);
  param_3[2] = CONCAT44(param_1[0xb] & uVar11,param_1[9] & uVar9);
  param_3[3] = ((ulonglong)uVar1 | 0xc0000000) & (ulonglong)uVar5 | (ulonglong)uVar2 << 0x20;
  param_3[4] = *(undefined8 *)(param_1 + 0x12);
  return;
}

