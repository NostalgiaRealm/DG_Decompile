/*
 * FUN_1007eb8b at 1007eb8b
 * undefined4 __stdcall FUN_1007eb8b(int param_1, uint * param_2, byte * param_3, undefined4 * param_4, uint param_5)
 * Address ranges: 1007eb8b-1007f0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_1007eb8b(int param_1,uint *param_2,byte *param_3,undefined4 *param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined1 uVar8;
  short sVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 extraout_ECX;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  int *piVar20;
  uint *puVar21;
  int local_4944;
  uint *local_493c;
  char local_4935;
  uint local_4934;
  uint local_4930;
  int local_492c;
  uint local_4928;
  undefined4 local_4924;
  uint local_4920;
  int local_491c;
  int local_4918;
  char cStack_490c;
  undefined2 uStack_490b;
  byte abStack_4909 [21];
  char local_48f4;
  undefined1 auStack_4884 [20];
  char local_4870 [16];
  int local_4860 [4];
  char acStack_4850 [1087];
  undefined1 auStack_4411 [1025];
  uint auStack_4010 [4097];
  uint local_c;
  
  local_c = 0x1007eb9b;
  uVar14 = param_5 & 0xe0;
  local_4924 = 0x8876086c;
  local_493c = param_2;
  if (param_2 == (uint *)0x0) {
    return 0x8876086c;
  }
  if (param_4 == (undefined4 *)0x0) {
    return 0x8876086c;
  }
  uVar17 = *(uint *)(param_1 + -0x4dd4);
  if ((((uVar17 & 0x40) == 0) || (uVar14 != 0)) && (((uVar17 & 0x20) == 0 || (uVar14 != 0)))) {
    if (-1 < (char)uVar17) {
      return 0x8876086c;
    }
    if (uVar14 != 0) {
      return 0x8876086c;
    }
  }
  FUN_10003838(&local_4935,(byte)(uVar17 >> 2) & 1);
  *param_4 = 0;
  bVar19 = 1;
  bVar6 = true;
  FUN_100ada8e(local_4860,0,0x4858);
  local_4928 = 0;
  if (param_3 != (byte *)0x0) {
    puVar21 = &local_4928;
    bVar6 = false;
    piVar20 = local_4860;
    uVar12 = extraout_ECX;
    uVar10 = FUN_10002769(*(void **)(param_1 + 0x10),*(int *)(param_1 + -0x4ddc));
    bVar7 = FUN_10013079((int *)param_3,(short)uVar10,uVar12,piVar20,(int *)puVar21);
    bVar19 = 0;
    if (((local_c & 0xff | 0xfffffe00) << 8 | local_c >> 8 & 0xff) <=
        *(uint *)(*(int *)(param_1 + 0x14) + 0xc4)) {
      bVar19 = bVar7;
    }
    if (bVar19 == 0) goto LAB_1007f0b2;
  }
  FUN_1005d293((int *)&local_4920);
  local_4934 = CONCAT31(local_4934._1_3_,0xff);
  local_4944 = 0;
  bVar2 = false;
  local_4930 = 0;
  local_492c = 0;
  bVar5 = false;
  local_4870[0] = '\0';
  local_4870[1] = '\0';
  local_4870[2] = '\0';
  local_4870[3] = '\0';
  bVar3 = false;
  local_4870[4] = '\0';
  local_4870[5] = '\0';
  local_4870[6] = '\0';
  local_4870[7] = '\0';
  local_4870[8] = '\0';
  local_4870[9] = '\0';
  local_4870[10] = '\0';
  local_4870[0xb] = '\0';
  local_4870[0xc] = '\0';
  local_4870[0xd] = '\0';
  local_4870[0xe] = '\0';
  local_4870[0xf] = '\0';
  bVar4 = false;
  do {
    if (bVar4) {
      if (bVar19 != 0) {
        if (!bVar6) {
          local_491c = 2;
          uVar17 = 0;
          goto LAB_1007f04e;
        }
        uVar12 = FUN_1007cbf7((int)&local_4920);
        if (abStack_4909[1] == '\x02') {
          local_491c = (local_48f4 != -1) + 1;
        }
        else {
          local_491c = 0;
        }
        if ((bVar19 & (byte)uVar12) != 0) goto LAB_1007f064;
      }
      break;
    }
    uVar17 = *local_493c;
    local_493c = local_493c + 1;
    uVar11 = uVar17 >> 0x1d;
    if (uVar11 == 0) {
      bVar15 = uVar17 == 0;
LAB_1007efe3:
      bVar19 = bVar19 & bVar15;
      goto LAB_1007efeb;
    }
    if (uVar11 == 1) {
      local_4934 = uVar17 & 0xf;
      cVar1 = local_4870[local_4934];
      local_4870[local_4934] = '\x01';
      bVar2 = true;
      bVar3 = true;
      bVar15 = (bool)(1U - ((uVar17 & 0x1ffffff0) != 0) & cVar1 == '\0');
      local_4944 = 0;
      goto LAB_1007efe3;
    }
    if (uVar11 == 2) {
      uVar11 = uVar17 & 0x1f;
      uVar16 = uVar17 >> 0x10 & 0xf;
      if (((char)local_4934 == -1) || ((uVar17 & 0xff0ffe0) != 0)) {
        iVar13 = 0;
      }
      else {
        iVar13 = (uint)(1U - (0x10 < uVar11) & bVar19) << 8;
      }
      uVar17 = uVar17 & 0x10000000;
      if ((uVar17 == 0) && ((&cStack_490c)[uVar11 * 8] != -1)) {
        sVar9 = (short)((uint)iVar13 >> 8) << 8;
      }
      else {
        sVar9 = (short)CONCAT31((int3)((uint)iVar13 >> 8),1);
      }
      if ((bVar6) && (uVar17 != 0)) {
        bVar19 = 0;
      }
      else {
        bVar19 = 1;
      }
      bVar19 = bVar19 & -(bVar5 || bVar3) & (byte)sVar9 & (byte)((ushort)sVar9 >> 8);
      if (bVar19 == 0) break;
      if (uVar17 != 0) {
        local_4944 = local_4944 + uVar16;
        uVar17 = 0;
        bVar2 = bVar3;
        if ((char)local_4934 == '\0') {
          uVar17 = uVar16 << 2;
        }
        goto LAB_1007ef98;
      }
      bVar7 = 0;
      if ((&cStack_490c)[uVar11 * 8] == -1) {
        bVar7 = bVar19;
      }
      bVar19 = bVar7;
      if (bVar19 == 0) break;
      (&cStack_490c)[uVar11 * 8] = (char)local_4934;
      abStack_4909[uVar11 * 8] = (char)local_4944;
      if (uVar11 < 0x11) {
        uVar8 = (&DAT_100b2830)[uVar11];
      }
      else {
        uVar8 = 0xff;
      }
      abStack_4909[uVar11 * 8 + 2] = uVar8;
      local_4930 = local_4930 | 1 << ((int)(char)local_4934 & 0x1fU);
      switch(uVar16) {
      case 0:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0x401;
        abStack_4909[uVar11 * 8 + 1] = 0;
        goto LAB_1007eee7;
      case 1:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0x802;
        abStack_4909[uVar11 * 8 + 1] = 1;
        goto LAB_1007eefa;
      case 2:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0xc03;
        local_4944 = local_4944 + 3;
        abStack_4909[uVar11 * 8 + 1] = 2;
        break;
      case 3:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0x1004;
        local_4944 = local_4944 + 4;
        abStack_4909[uVar11 * 8 + 1] = 3;
        break;
      case 4:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0x404;
        abStack_4909[uVar11 * 8 + 1] = 4;
        goto LAB_1007eee7;
      case 5:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0x404;
        abStack_4909[uVar11 * 8 + 1] = 5;
        goto LAB_1007eee7;
      case 6:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0x402;
        abStack_4909[uVar11 * 8 + 1] = 6;
LAB_1007eee7:
        local_4944 = local_4944 + 1;
        break;
      case 7:
        *(undefined2 *)(abStack_4909 + uVar11 * 8 + 0xfffffffe) = 0x804;
        abStack_4909[uVar11 * 8 + 1] = 7;
LAB_1007eefa:
        local_4944 = local_4944 + 2;
        break;
      default:
        bVar19 = 0;
      }
      abStack_4909[uVar11 * 8 + 3] = (&DAT_100b2844)[abStack_4909[uVar11 * 8 + 1]];
      if ((char)local_4934 == '\0') {
        uVar17 = (uint)abStack_4909[uVar11 * 8 + 0xffffffff];
      }
      else {
        uVar17 = 0;
      }
      bVar5 = true;
      auStack_4884[local_4918] = (char)uVar11;
      local_4918 = local_4918 + 1;
      bVar2 = false;
LAB_1007ef98:
      local_492c = local_492c + uVar17;
      bVar3 = bVar2;
    }
    else {
      if (uVar11 == 3) break;
      if (uVar11 != 4) {
        if ((uVar11 != 5) && (uVar11 == 7)) {
          bVar19 = uVar17 == 0xffffffff;
          bVar4 = true;
          goto LAB_1007efeb;
        }
        break;
      }
      uVar16 = uVar17 & 0x7f;
      uVar11 = uVar17 >> 0x19 & 0xf;
      bVar19 = bVar19 & -(uVar16 < *(uint *)(param_1 + -0x4dd0)) &
                        1U - ((uVar17 & 0x1ffff80) != 0 || bVar2);
      if ((bVar19 != 0) && (uVar17 = 0, uVar11 != 0)) {
        do {
          auStack_4411[uVar17 + uVar16] = 1;
          auStack_4010[uVar16 * 4 + uVar17 * 4] = *local_493c;
          auStack_4010[uVar16 * 4 + uVar17 * 4 + 1] = local_493c[1];
          auStack_4010[uVar16 * 4 + uVar17 * 4 + 2] = local_493c[2];
          puVar21 = local_493c + 4;
          uVar18 = uVar17 + 1;
          auStack_4010[uVar16 * 4 + uVar17 * 4 + 3] = local_493c[3];
          uVar17 = uVar18;
          local_493c = puVar21;
        } while (uVar18 < uVar11);
      }
      bVar2 = false;
      bVar5 = false;
      bVar3 = bVar2;
    }
LAB_1007efeb:
  } while (bVar19 != 0);
  goto LAB_1007f0b2;
  while (uVar17 = uVar17 + 1, uVar17 < 0x10) {
LAB_1007f04e:
    if ((acStack_4850[uVar17] != '\0') && ((&cStack_490c)[uVar17 * 8] == -1)) goto LAB_1007f0b2;
  }
LAB_1007f064:
  iVar13 = FUN_1007fd58((void *)(param_1 + 0x18),(byte *)param_2,(int)local_493c - (int)param_2 >> 2
                        ,param_3,local_4928,&local_4920,local_492c,local_4930,local_4860,uVar14);
  if (iVar13 != 0) {
    local_4924 = 0;
    *param_4 = *(undefined4 *)(iVar13 + 4);
  }
LAB_1007f0b2:
  FUN_10003881(&local_4935);
  return local_4924;
}

