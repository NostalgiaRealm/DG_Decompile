/*
 * FUN_180018b18 at 180018b18
 * undefined __cdecl FUN_180018b18(longlong param_1, int param_2)
 * Address ranges: 180018b18-180018d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018b18(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  longlong extraout_x11;
  longlong lVar17;
  longlong extraout_x11_00;
  ulonglong extraout_x12;
  ulonglong uVar18;
  ulonglong extraout_x12_00;
  int extraout_w13;
  ulonglong uVar19;
  int iVar20;
  int extraout_w14;
  undefined *puVar21;
  undefined *extraout_x15;
  int iVar22;
  uint local_e0 [36];
  
  lVar11 = (longlong)param_2 * 0x41 + *(longlong *)(param_1 + 0x18);
  uVar9 = (ulonglong)*(uint *)(lVar11 + 0x198);
  uVar14 = (ulonglong)*(uint *)(lVar11 + 0x19c);
  uVar13 = (ulonglong)*(uint *)(lVar11 + 400);
  uVar8 = (ulonglong)*(uint *)(lVar11 + 0x194);
  uVar5 = FUN_180018a30(param_1,*(uint *)(lVar11 + 400),*(uint *)(lVar11 + 0x194),
                        *(uint *)(lVar11 + 0x198),*(uint *)(lVar11 + 0x19c));
  if ((uVar5 & 1) != 0) {
    puVar21 = &DAT_180063bb8;
    uVar7 = (uint)uVar8;
    iVar20 = 0;
    local_e0[2] = 0;
    local_e0[3] = 0;
    local_e0[0] = 0;
    local_e0[1] = 0;
    local_e0[6] = 0;
    local_e0[7] = 0;
    local_e0[4] = 0;
    local_e0[5] = 0;
    iVar22 = -1;
    local_e0[10] = 0;
    local_e0[0xb] = 0;
    local_e0[8] = 0;
    local_e0[9] = 0;
    local_e0[0xe] = 0;
    local_e0[0xf] = 0;
    local_e0[0xc] = 0;
    local_e0[0xd] = 0;
    local_e0[0x12] = 0;
    local_e0[0x13] = 0;
    local_e0[0x10] = 0;
    local_e0[0x11] = 0;
    local_e0[0x16] = 0;
    local_e0[0x17] = 0;
    local_e0[0x14] = 0;
    local_e0[0x15] = 0;
    local_e0[0x1a] = 0;
    local_e0[0x1b] = 0;
    local_e0[0x18] = 0;
    local_e0[0x19] = 0;
    local_e0[0x1e] = 0;
    local_e0[0x1f] = 0;
    local_e0[0x1c] = 0;
    local_e0[0x1d] = 0;
    local_e0[0x22] = 0;
    local_e0[0x23] = 0;
    local_e0[0x20] = 0;
    local_e0[0x21] = 0;
    uVar5 = extraout_x10;
    lVar17 = extraout_x11;
    uVar18 = extraout_x12;
    if (uVar7 < 9) {
      bVar3 = (&DAT_180063bb8)[(int)uVar7];
      uVar10 = (ulonglong)bVar3;
      uVar19 = (ulonglong)(8 - bVar3);
    }
    else {
      uVar10 = 0xffffffff;
      uVar19 = 9;
    }
    while( true ) {
      uVar15 = 0xffffffff;
      uVar12 = (uint)uVar13;
      if (uVar12 < 9) {
        uVar15 = (uint)(byte)puVar21[(int)uVar12];
      }
      if ((int)uVar10 < (int)uVar15) break;
      if (*(char *)(lVar11 + 0x1a1) == '\0') {
        lVar16 = 0;
      }
      else {
        iVar1 = (&DAT_1800617e8)[(int)uVar10];
        if (iVar1 - 3U < 6) {
          lVar16 = 3;
        }
        else if (iVar1 == 1) {
          lVar16 = 1;
        }
        else {
          lVar16 = 0;
          if (iVar1 == 2) {
            lVar16 = 2;
          }
        }
      }
      iVar1 = *(int *)(lVar11 + 0x180 + lVar16 * 4);
      uVar12 = *(int *)(*(longlong *)(lVar17 + 0x18) + (longlong)(int)uVar5 * 0x4e8 + 0x2b8) + iVar1
      ;
      if (iVar1 == iVar22) {
        uVar12 = uVar12 + iVar20;
        iVar1 = iVar22;
      }
      iVar22 = iVar1;
      local_e0[uVar19 * 4] = uVar12;
      uVar15 = *(uint *)((longlong)&DAT_1800617e8 +
                        (-(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2));
      uVar2 = *(uint *)(&DAT_180063bd0 + (longlong)(int)uVar15 * 4);
      uVar12 = uVar2 >> (ulonglong)((byte)(&DAT_180063bc4)[(int)uVar9] & 0x1f);
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      uVar6 = uVar2;
      if ((int)uVar9 - 4U < 3) {
        uVar6 = uVar12;
        uVar12 = uVar2;
      }
      uVar2 = (uVar12 | uVar6 << 0x10) >> 0x10;
      local_e0[uVar19 * 4 + 1] = uVar2;
      if ((uint)uVar14 < 0x11) {
        uVar6 = (uint)(byte)(&DAT_180063b68)[(int)(uint)uVar14];
      }
      else {
        uVar6 = 0;
      }
      uVar2 = uVar2 * uVar6;
      local_e0[uVar19 * 4 + 3] = uVar2;
      bVar3 = *(byte *)(lVar11 + 0x1a0);
      local_e0[uVar19 * 4 + 2] = uVar12 & 0xffff;
      bVar4 = FUN_1800189f0(uVar15,(uint)bVar3);
      if (bVar4) {
        iVar20 = (uVar12 & 0xffff) * uVar2;
      }
      else {
        iVar20 = 0;
      }
      iVar20 = iVar20 + extraout_w14;
      uVar19 = (ulonglong)(extraout_w13 + 1);
      uVar10 = (ulonglong)((int)uVar10 - 1);
      uVar5 = extraout_x10_00;
      lVar17 = extraout_x11_00;
      uVar18 = extraout_x12_00;
      puVar21 = extraout_x15;
    }
    if ((uVar18 & 1) != 0) {
      uVar15 = 0xffffffff;
      if (uVar12 < 9) {
        uVar15 = (uint)(byte)puVar21[(int)uVar12];
      }
      uVar12 = 0xffffffff;
      if ((uint)uVar8 < 9) {
        uVar12 = (uint)(byte)(&DAT_180063bb8)[(int)uVar7];
      }
      (**(code **)(**(longlong **)(lVar17 + 0x18) + 600))
                (*(longlong **)(lVar17 + 0x18),uVar5 & 0xffffffff,uVar14 & 0xffffffff,8 - uVar12,
                 8 - uVar15,local_e0,*(undefined1 *)(lVar11 + 0x1a0));
    }
  }
  return;
}

