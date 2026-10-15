/*
 * FUN_10030a48 at 10030a48
 * uint __fastcall FUN_10030a48(int * param_1, ushort param_2, undefined2 param_3, undefined2 param_4, uint param_5, byte param_6, byte param_7, byte param_8, void * param_9, char param_10, byte param_11)
 * Address ranges: 10030a48-10031289
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_10030a48(int *param_1,ushort param_2,undefined2 param_3,undefined2 param_4,uint param_5,
            byte param_6,byte param_7,byte param_8,void *param_9,char param_10,byte param_11)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  float fVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  int *piVar15;
  float10 fVar16;
  char cStack00000007;
  int *piVar17;
  ushort local_54 [6];
  ushort local_48;
  byte bStack_46;
  byte bStack_45;
  byte local_44;
  byte bStack_43;
  undefined2 uStack_42;
  ushort local_40;
  byte bStack_3e;
  byte bStack_3d;
  byte local_3c;
  byte bStack_3b;
  undefined2 uStack_3a;
  uint local_38;
  uint local_34;
  byte local_30;
  undefined3 uStack_2f;
  int *local_2c;
  int *local_28;
  float local_24;
  uint local_20;
  int *local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  float local_c;
  uint local_8;
  
  local_1c = param_1;
  local_54[1] = param_3;
  local_54[2] = param_4;
  cStack00000007 = param_6 != 0;
  local_54[0] = param_2;
  _param_4 = 0.0;
  local_54[3] = 0;
  iVar13 = 0;
  local_48 = 0;
  bStack_46 = 0;
  bStack_45 = 0;
  iVar9 = 0;
  local_44 = 0;
  bStack_43 = 0;
  uVar7 = 0;
  local_40 = 0;
  bStack_3e = 0;
  bStack_3d = 0;
  local_3c = 0;
  bStack_3b = 0;
  local_18 = 0.0;
  do {
    uVar1 = local_54[uVar7];
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0xf0) != 0) {
        (&local_40)[iVar9] = uVar1;
        iVar9 = iVar9 + 1;
      }
      fVar16 = FUN_1002e129((uint)uVar1);
      local_18 = (float)(fVar16 + (float10)local_18);
      iVar8 = extraout_EDX_00;
    }
    else {
      (&local_48)[iVar13] = uVar1;
      iVar13 = iVar13 + 1;
      fVar16 = FUN_1002e129((uint)uVar1);
      _param_4 = (float)(fVar16 + (float10)_param_4);
      iVar8 = extraout_EDX;
    }
    piVar15 = local_1c;
    uVar7 = iVar8 + 1;
  } while (uVar7 < 3);
  local_14 = iVar13;
  iVar8 = 0;
  uVar1 = (ushort)param_5;
  uVar11 = uVar1 & 0x1000;
  if (((bStack_46 & 0xf0) == 0xf0) && ((ushort)((bStack_45 & 0x10) << 8) == uVar11)) {
    iVar8 = 1;
    uVar2 = CONCAT11(bStack_45,bStack_46);
    bStack_46 = (byte)local_48;
    bStack_45 = (byte)(local_48 >> 8);
    local_48 = uVar2;
  }
  if (((local_44 & 0xf0) == 0xf0) && ((ushort)((bStack_43 & 0x10) << 8) == uVar11)) {
    uVar2 = (&local_48)[iVar8];
    (&local_48)[iVar8] = CONCAT11(bStack_43,local_44);
    local_44 = (byte)uVar2;
    bStack_43 = (byte)(uVar2 >> 8);
  }
  iVar8 = 0;
  if (((bStack_3e & 0xf0) == 0xf0) && ((ushort)((bStack_3d & 0x10) << 8) == uVar11)) {
    iVar8 = 1;
    uVar2 = CONCAT11(bStack_3d,bStack_3e);
    bStack_3e = (byte)local_40;
    bStack_3d = (byte)(local_40 >> 8);
    local_40 = uVar2;
  }
  if (((local_3c & 0xf0) == 0xf0) && ((ushort)((bStack_3b & 0x10) << 8) == uVar11)) {
    uVar11 = (&local_40)[iVar8];
    (&local_40)[iVar8] = CONCAT11(bStack_3b,local_3c);
    local_3c = (byte)uVar11;
    bStack_3b = (byte)(uVar11 >> 8);
  }
  local_c = _param_4 / 255.0 + local_18;
  FUN_100500b0((undefined4 *)local_54,(undefined4 *)&local_48,iVar13 * 2);
  FUN_100500b0((undefined4 *)(local_54 + iVar13),(undefined4 *)&local_40,iVar9 * 2);
  fVar4 = local_c;
  uVar7 = local_14 + iVar9;
  local_10 = uVar7;
  if (((*(ushort *)(&stack0xffffffaa + uVar7 * 2) & 0x2000) != 0) || (local_c != 0.0)) {
    local_54[uVar7] = 0x90;
    uVar7 = uVar7 + 1;
    local_10 = uVar7;
    cStack00000007 = '\0';
  }
  local_10 = uVar7;
  if (uVar7 < 4) {
    puVar14 = local_54 + uVar7;
    for (uVar6 = 4 - uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar14[0] = 0;
      puVar14[1] = 0;
      puVar14 = puVar14 + 2;
    }
    for (uVar6 = (uint)((4 - uVar7 & 1) != 0); piVar15 = local_1c, uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  local_14 = (uint)local_54[0];
  uVar10 = param_5 & 0xffff;
  local_20 = 0;
  uVar6 = uVar7;
  if (((*(short *)(&stack0xffffffaa + uVar7 * 2) == 0x90) && (fVar4 == 0.0)) &&
     ((uVar1 & 0xf0) != 0x70)) {
    uVar6 = uVar7 - 1;
  }
  local_1c = (int *)(uVar7 - 1);
  if (((2 < uVar6) || (cStack00000007 != '\0')) &&
     (((uVar1 & 0xf0) == 0xf0 || ((uVar1 & 0xf0) == 0x70)))) {
    uVar10 = FUN_100303b9((int)piVar15,CONCAT22(local_54[3],local_54[2]),
                          CONCAT22(local_54[4],local_54[3]),0,0,param_7,'\0');
    uVar10 = uVar10 & 0xffff;
    local_20 = uVar10;
  }
  piVar17 = piVar15 + 0x55;
  local_44 = (byte)piVar17;
  bStack_43 = (byte)((uint)piVar17 >> 8);
  uStack_42 = (undefined2)((uint)piVar17 >> 0x10);
  bStack_3b = 0;
  uStack_3a = 0;
  uVar10 = uVar10 ^ (uVar10 ^ local_54[0]) & 0x2000;
  local_18 = 1.4013e-45;
  local_28 = piVar15 + 0x5d;
  local_2c = piVar15 + 0x4d;
  local_24 = (float)(1 << (param_6 & 0x1f));
  local_3c = param_6;
  if (1 < uVar7) {
    do {
      if (((int *)local_18 == local_1c) && (cStack00000007 == '\0')) {
        uVar10 = ((param_5 ^ uVar10) & 0x2000 ^ param_5) & 0xffff;
      }
      local_8 = uVar10;
      bVar5 = FUN_10030494((int)piVar15,uVar10,param_8);
      _local_30 = CONCAT31(uStack_2f,bVar5);
      FUN_1002ff4c((int)piVar15,(ushort)local_8,param_7);
      FUN_1002fffc(piVar15,0,local_14,(byte)_local_30,0,'\0');
      uVar11 = local_54[(int)local_18];
      local_34 = (uint)uVar11;
      local_38 = local_34 & 0xf0;
      if ((short)local_38 == 0x90) {
        FUN_10030335(piVar15 + 0x5d,param_8,(int)local_c);
      }
      else {
        bVar3 = false;
        if (((uVar11 & 0xff0) != 0x100) &&
           (((uVar6 = local_34 & 0xf00, uVar6 == 0x100 || (uVar6 == 0x200)) || (uVar6 == 0x500)))) {
          bVar3 = true;
        }
        uVar6 = local_34 & 0xf;
        if ((uVar11 & 0x1000) != 0) {
          bVar5 = 0xff;
        }
        uVar10 = local_34 & 0xf0;
        if (uVar10 < 0x41) {
          if (uVar10 == 0x40) {
            iVar9 = 2;
            piVar15[0x5d] = 2;
            uVar6 = FUN_10048d34(1,bVar5,1,4,0,0,0);
            goto LAB_10030fea;
          }
          if ((uVar11 & 0xf0) == 0) {
LAB_10030e91:
            if ((uVar11 & 0xf00) == 0x100) {
              _param_4 = 1.0;
            }
            else if ((uVar11 & 0xf00) == 0x300) {
              _param_4 = -0.5;
            }
            else {
              _param_4 = 0.0;
            }
            if ((uVar11 & 0x2000) != 0) {
              _param_4 = _param_4 * 255.0;
            }
            if (bVar3) {
              _param_4 = -_param_4;
            }
            FUN_10030335(piVar15 + 0x5d,bVar5,(int)_param_4);
            goto LAB_10030efb;
          }
          if (uVar10 == 0x10) {
            piVar15[0x5d] = 2;
            uVar10 = FUN_10048d34(0,bVar5,1,4,0,0,0);
            piVar15[0x5e] = uVar10;
            piVar15[0x5f] = (uint)*(byte *)(piVar15 + uVar6 + 0x21);
          }
          else if ((uVar10 == 0x20) || (uVar10 == 0x30)) {
            uVar6 = *(uint *)((int)piVar15 +
                             uVar6 * 4 + (((short)local_38 == 0x20) - 1 & 0xc) + 0x6c);
            uVar7 = local_10;
            if (uVar6 != 0) {
              piVar15[0x5d] = 2;
              bVar5 = 0;
              goto LAB_10030e38;
            }
            goto LAB_10030e91;
          }
        }
        else {
          if (uVar10 != 0x50) {
            if (uVar10 == 0x80) {
              piVar15[0x5d] = 2;
              iVar9 = FUN_100484c5(piVar15[uVar6 + 0x24],bVar5,1,4,0,0);
              piVar15[0x5e] = iVar9;
              uVar6 = (uint)*(byte *)(piVar15 + uVar6 + 0x24);
            }
            else {
              if (uVar10 != 0xf0) goto LAB_10030ff9;
              piVar15[0x5d] = 2;
              uVar6 = piVar15[0x28];
LAB_10030e38:
              iVar9 = FUN_100484c5(uVar6,bVar5,1,4,0,0);
              piVar15[0x5e] = iVar9;
              uVar6 = uVar6 & 0xff;
            }
            piVar15[0x5f] = uVar6;
            goto LAB_10030ff9;
          }
          piVar15[2] = piVar15[2] | 1;
          iVar9 = 0;
          if (*piVar15 == 0x51) {
            piVar15[0x5d] = 4;
            uVar6 = FUN_10048d34(8,bVar5,3,4,0,0,0);
            piVar15[0x60] = 0;
            piVar15[0x61] = 5;
          }
          else {
            piVar15[0x5d] = 3;
            uVar6 = FUN_10048d34(8,bVar5,2,4,0,0,0);
            piVar15[0x60] = 5;
          }
LAB_10030fea:
          piVar15[0x5e] = uVar6;
          piVar15[0x5f] = iVar9;
        }
LAB_10030ff9:
        if (bVar3) {
          for (iVar9 = piVar15[0x5d]; iVar9 != 0; iVar9 = iVar9 + -1) {
            piVar15[iVar9 + 0x5e] = piVar15[iVar9 + 0x5d];
          }
          piVar15[0x5e] = piVar15[0x5e] | 0x80000000;
          piVar15[0x5d] = piVar15[0x5d] + 1;
          piVar15[0x5f] = 0x41;
        }
      }
LAB_10030efb:
      if (((int *)local_18 == local_1c) && (param_11 != 0)) {
        uVar6 = 0x2000;
      }
      else {
        uVar6 = 0;
      }
      if ((local_14 & 0x2000) == (local_34 & 0x2000)) {
        FUN_10048b6f(param_9,(piVar15[0x5d] + piVar15[0x55] + piVar15[0x4d]) * 0x1000000 +
                             0x1000000U & 0x7f000000 | uVar6,piVar15 + 0x4d,piVar15 + 0x55,
                     piVar15 + 0x5d,(int *)0x0);
        uVar10 = ((local_8 ^ local_14) & 0x2000 ^ local_8) & 0xffff;
      }
      else {
        fVar16 = (float10)FUN_10030335(piVar15 + 0x65,param_8,0x3b808081);
        uVar12 = piVar15[0x4d] + 1 + piVar15[0x65] + piVar15[0x55];
        if (((short)local_38 == 0x90) && ((float10)0 == fVar16)) {
          uVar10 = local_8 & 0xffff;
          uVar7 = local_10;
          if (param_10 == '\0') goto LAB_1003112e;
          FUN_10030335(piVar15 + 0x65,param_8,(int)(local_24 / 255.0));
          piVar17 = (int *)0x0;
          uVar7 = (uVar12 & 0x7f) << 0x18 | uVar6 | 0x38;
        }
        else {
          piVar17 = piVar15 + 0x5d;
          uVar7 = (*piVar17 + uVar12 & 0x7f) << 0x18 | uVar6 | 0x32;
        }
        FUN_10048b6f(param_9,uVar7,piVar15 + 0x4d,piVar15 + 0x55,piVar15 + 0x65,piVar17);
        uVar10 = local_8 & 0xdfff;
        uVar7 = local_10;
      }
LAB_1003112e:
      local_18 = (float)((int)local_18 + 1);
      local_14 = uVar10;
    } while ((uint)local_18 < uVar7);
  }
  iVar9 = FUN_10030469((int)piVar15,local_20);
  if (cStack00000007 != '\0') {
    FUN_1002ff4c((int)piVar15,uVar1,param_7);
    FUN_1002fffc(piVar15,0,local_14,param_8,0,'\0');
    piVar17 = piVar15 + 0x55;
    iVar9 = CONCAT22(uStack_3a,CONCAT11(bStack_3b,local_3c));
    iVar13 = piVar15[0x4d] + 1 + *piVar17;
    uVar7 = (uint)(param_11 ^ 1) << 0xd;
    if (iVar9 == 1) {
      uVar7 = (*piVar17 + iVar13 & 0x7fU) << 0x18 | uVar7;
      piVar15 = piVar17;
    }
    else {
      iVar9 = iVar9 + -2;
      if (iVar9 != 0) goto LAB_1003127b;
      FUN_10030335(local_28,param_8,(int)local_24);
      piVar17 = (int *)CONCAT22(uStack_42,CONCAT11(bStack_43,local_44));
      uVar7 = (*local_28 + iVar13 & 0x7fU) << 0x18 | uVar7 | 0x38;
      piVar15 = local_28;
    }
    iVar9 = FUN_10048b6f(param_9,uVar7,local_2c,piVar17,piVar15,(int *)0x0);
  }
LAB_1003127b:
  return CONCAT31((int3)((uint)iVar9 >> 8),~(byte)(uVar10 >> 0xd)) & 0xffffff01;
}

