/*
 * FUN_100d0611 at 100d0611
 * undefined8 __cdecl FUN_100d0611(byte * param_1, undefined4 * param_2, uint param_3, uint param_4)
 * Address ranges: 100d0611-100d07ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100d071e) */

undefined8 __cdecl FUN_100d0611(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint local_14;
  int iStack_10;
  uint local_c;
  uint local_8;
  
  bVar7 = *param_1;
  pbVar1 = param_1;
  while (pbVar8 = pbVar1 + 1, (&DAT_100db070)[bVar7] == '\x01') {
    pbVar1 = pbVar8;
    bVar7 = *pbVar8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100d064c:
    bVar7 = *pbVar8;
    pbVar8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_100d064c;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    local_14 = 0;
    iStack_10 = 0;
LAB_100d07fc:
    return CONCAT44(iStack_10,local_14);
  }
  if (param_3 == 0) {
    if (bVar7 != 0x30) {
      param_3 = 10;
      goto LAB_100d06b2;
    }
    if ((*pbVar8 != 0x78) && (*pbVar8 != 0x58)) {
      param_3 = 8;
      goto LAB_100d06b2;
    }
    param_3 = 0x10;
  }
  else if ((param_3 != 0x10) || (bVar7 != 0x30)) goto LAB_100d06b2;
  if ((*pbVar8 == 0x78) || (*pbVar8 == 0x58)) {
    bVar7 = pbVar8[1];
    pbVar8 = pbVar8 + 2;
  }
LAB_100d06b2:
  uVar10 = __aulldiv(0xffffffff,0xffffffff,param_3,0);
  uVar2 = 0;
  local_8 = 0;
  local_c = param_4;
  do {
    iStack_10 = (int)(uVar2 >> 0x20);
    if (bVar7 - 0x30 < 10) {
      uVar6 = (int)(char)bVar7 - 0x30;
      uVar4 = (uint)uVar2;
    }
    else {
      iVar3 = ___ascii_iswalpha((uint)bVar7);
      if (iVar3 == 0) break;
      iVar5 = (int)(char)bVar7;
      iVar3 = iVar5 + -0x20;
      if (0x19 < iVar5 - 0x61U) {
        iVar3 = iVar5;
      }
      uVar6 = iVar3 - 0x37;
      uVar4 = local_8;
    }
    if (param_3 <= uVar6) break;
    if ((CONCAT44(iStack_10,uVar4) < uVar10) ||
       ((uVar10 == CONCAT44(iStack_10,uVar4) &&
        (uVar4 = local_8, uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      lVar11 = __allmul(param_3,0,local_8,iStack_10);
      uVar2 = lVar11 + (ulonglong)uVar6;
      local_8 = (uint)uVar2;
      local_c = local_c | 8;
    }
    else {
      uVar2 = CONCAT44(iStack_10,uVar4);
      local_c = local_c | 0xc;
    }
    bVar7 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while( true );
  pbVar8 = pbVar8 + -1;
  if ((local_c & 8) == 0) {
    if (param_2 != (undefined4 *)0x0) {
      pbVar8 = param_1;
    }
    iStack_10 = 0;
    local_14 = 0;
  }
  else if ((local_c & 4) == 0) {
    local_14 = local_8;
    if ((local_c & 1) == 0) {
      if ((local_c & 2) == 0) {
        if ((0x7ffffffeffffffff < uVar2) && (0x7fffffffffffffff < uVar2)) goto LAB_100d07b4;
      }
      else if ((0x80000000ffffffff < uVar2) || ((0x7fffffffffffffff < uVar2 && (local_8 != 0))))
      goto LAB_100d07c4;
    }
  }
  else {
LAB_100d07b4:
    if ((local_c & 1) == 0) {
      if ((local_c & 2) == 0) {
        local_14 = 0xffffffff;
        iStack_10 = 0x7fffffff;
      }
      else {
LAB_100d07c4:
        local_14 = 0;
        iStack_10 = -0x80000000;
      }
    }
    else {
      local_14 = 0xffffffff;
      iStack_10 = -1;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar8;
  }
  if ((local_c & 2) != 0) {
    bVar9 = local_14 != 0;
    local_14 = -local_14;
    iStack_10 = -(iStack_10 + (uint)bVar9);
  }
  goto LAB_100d07fc;
}

