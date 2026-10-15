/*
 * FUN_18003eea0 at 18003eea0
 * undefined __fastcall FUN_18003eea0(uint * param_1, byte param_2, undefined8 * param_3)
 * Address ranges: 18003eea0-18003efe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18003eea0(uint *param_1,byte param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_res8;
  uint local_res10 [2];
  
  uVar11 = param_1[0x11];
  uVar6 = 0xffffffff;
  uVar7 = 0xffffffff;
  if ((uVar11 & 1) == 0) {
    uVar7 = param_1[0xf];
  }
  if ((uVar11 & 2) == 0) {
    uVar6 = param_1[0x10];
  }
  uVar8 = (int)uVar11 >> 0x1f;
  uVar1 = (&DAT_180111f70)[param_2];
  param_1[5] = uVar1;
  param_1[8] = uVar1;
  uVar9 = uVar1 | (uint)param_2 << 0x18;
  local_res8 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    for (; (param_2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  param_1[7] = uVar9;
  local_res10[0] = (uint)param_2;
  if (param_2 != 0) {
    do {
      pbVar4 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar5 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar5 & 7));
                    /* WARNING: Ignoring partial resolution of indirect */
      local_res8._0_1_ =
           (byte)local_res8 | '\x01' << (*param_1 >> ((char)uVar5 * '\x03' & 0x1fU) & 7);
      uVar5 = 0;
      if (local_res10[0] != 0) {
        for (; (local_res10[0] >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    } while (local_res10[0] != 0);
  }
  uVar5 = param_1[2];
  uVar7 = uVar6 & uVar8 & uVar7;
  param_1[0xe] = uVar8;
  param_1[0xd] = uVar7;
  uVar6 = (&DAT_180111f70)[local_res8];
  uVar11 = (local_res8 * 8 | 0xfffff807) & uVar11;
  uVar2 = param_1[3];
  uVar3 = param_1[10];
  param_1[6] = uVar6;
  uVar10 = uVar3 & uVar8;
  *param_3 = CONCAT44(uVar6 & param_1[1],uVar1 & param_1[4] & *param_1);
  uVar6 = param_1[0xb];
  param_3[1] = CONCAT44(uVar1 & uVar2,uVar9 & uVar5);
  param_1[0x11] = uVar11;
  param_1[0xc] = uVar10;
  param_3[2] = CONCAT44(uVar6 & uVar7,param_1[9] & uVar10);
  param_3[3] = ((ulonglong)uVar8 | 0xc0000000) & (ulonglong)uVar3 | (ulonglong)uVar11 << 0x20;
  param_3[4] = *(undefined8 *)(param_1 + 0x12);
  return;
}

