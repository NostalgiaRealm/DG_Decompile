/*
 * FUN_1000ec16 at 1000ec16
 * undefined __fastcall FUN_1000ec16(uint * param_1, int * param_2, byte * param_3)
 * Address ranges: 1000ec16-1000f303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000ec16(uint *param_1,int *param_2,byte *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *this;
  uint *extraout_ECX_02;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint local_10;
  uint local_8;
  
  bVar3 = *param_3 & 0x7f;
  local_8 = 0xffffffff;
  if (0x2e < bVar3) {
    if (bVar3 == 0x4e) {
      local_8 = FUN_1000d3c9(param_1,param_2,(int)param_3);
    }
    else if (bVar3 == 0x4f) {
      local_8 = FUN_1000dac3(param_1,param_2,(int)param_3);
    }
    else {
      if (bVar3 != 0x5e) {
        if (bVar3 != 0x5f) {
          return;
        }
        local_8 = FUN_1000b55c(param_1,param_2,0xffff);
        uVar6 = (ulonglong)local_8;
        uVar4 = 0x5702;
        uVar5 = 0x100700;
        goto LAB_1000ee3f;
      }
      local_8 = FUN_1000cf0c(param_1,param_2,(int)param_3);
    }
    goto LAB_1000f083;
  }
  if (bVar3 == 0x2e) {
LAB_1000ec6b:
    local_8 = FUN_1000cfa8(param_1,param_2,(int)param_3);
    goto LAB_1000f083;
  }
  switch(bVar3) {
  case 1:
    if (*(short *)(param_3 + 0x11) == 0x429) goto LAB_1000ec6b;
  case 0x23:
    if ((*param_3 & 0x7f) == 1) {
      bVar3 = param_3[10];
    }
    else {
      bVar3 = 2;
    }
    uVar6 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],bVar3,param_3[0xd],'\0'
                         ,'\0');
    uVar5 = (uint)uVar6;
    FUN_1000b9b4((int)param_1,uVar5);
    if ((extraout_EDX & 0x80000000) == 0) {
      if (((ushort)(*(short *)(param_3 + 0x11) - 0x44dU) < 0xd) &&
         (cVar2 = FUN_1000b52a((int)param_3), cVar2 != '\0')) {
        FUN_10001877(param_2,*param_1 | 0x80000000,0x100100,0x2902,extraout_EDX_00,
                     (uint)*(ushort *)(param_3 + 0x11) << 4,0);
        uVar5 = 0;
        do {
          if (param_1[uVar5 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
            param_1[uVar5 + 6] = 0xffffffff;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
      }
      else {
        cVar2 = FUN_1000b52a((int)param_3);
        if ((cVar2 == '\0') ||
           (local_8 = extraout_EDX_01, param_1[(extraout_EDX_01 & 0xff) + 6] != 0xffffffff))
        goto LAB_1000ed45;
      }
    }
    else {
LAB_1000ed45:
      local_8 = FUN_1000b611(param_1,param_2,*(ushort *)(param_3 + 0x11),param_3[0x10],param_3[0x13]
                            );
      if (local_8 != uVar5) {
        FUN_10001877(param_2,local_8,0x100100,0x2902,uVar5,(int)(uVar6 >> 0x20),0);
      }
      if ((extraout_EDX & 0x80000000) != 0) break;
    }
LAB_1000ed96:
    local_10 = (uint)uVar6;
    pbVar1 = (byte *)((int)param_1 + ((int)local_10 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (local_10 & 7));
    break;
  case 2:
    uVar5 = 0x5802;
    goto LAB_1000eda4;
  default:
    goto switchD_1000ec59_caseD_3;
  case 4:
    local_8 = FUN_1000ba6e(param_1,param_2,(uint)param_3,0x100700,0x5902,0x1300700,0x5902,0,'\x01');
    FUN_1000b9b4((int)param_1,local_8);
    uVar6 = FUN_1000b651(extraout_ECX,param_2,*(ushort *)(param_3 + 5),param_3[9],param_3[0xc],
                         param_3[0xf],'\0','\0');
    if (-1 < (int)local_8) {
      pbVar1 = (byte *)((int)param_1 + ((int)local_8 >> 3) + 0x14);
      *pbVar1 = *pbVar1 & ~('\x01' << (local_8 & 7));
    }
    uVar5 = 0x1300700;
    if (param_3[0x10] != 1) {
      uVar5 = 0x100700;
    }
    uVar4 = 0x5802;
    goto LAB_1000ee3f;
  case 5:
    uVar5 = 0x5902;
    goto LAB_1000eda4;
  case 6:
    uVar5 = 0x5302;
    goto LAB_1000ee60;
  case 7:
    uVar5 = 0x5202;
LAB_1000ee60:
    local_8 = FUN_1000bbd4(param_1,param_2,(int)param_3,0x100700,uVar5);
    break;
  case 8:
    cVar2 = '\0';
    goto LAB_1000ee7f;
  case 9:
    cVar2 = '\x01';
LAB_1000ee7f:
    local_8 = FUN_1000be9c(param_1,param_2,(int)param_3,cVar2);
    break;
  case 10:
    uVar5 = 0x5d02;
    goto LAB_1000eda4;
  case 0xb:
    uVar5 = 0x5f02;
LAB_1000eda4:
    local_8 = FUN_1000ba6e(param_1,param_2,(uint)param_3,0x100700,uVar5,0x1300700,uVar5,0,'\0');
    break;
  case 0xc:
    iVar9 = 1;
    goto LAB_1000eeaa;
  case 0xd:
    iVar9 = 5;
LAB_1000eeaa:
    local_8 = FUN_1000ba6e(param_1,param_2,(uint)param_3,0x130700,0xc202,0x1330700,0xc202,iVar9,'\0'
                          );
    uVar6 = CONCAT44(0x120,param_1[1]) | 0x80000000;
    uVar4 = 0x5402;
    uVar5 = 0x100700;
LAB_1000ee3f:
    FUN_10001877(param_2,local_8,uVar5,uVar4,(uint)uVar6,(int)(uVar6 >> 0x20),0);
    break;
  case 0xe:
    uVar6 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],param_3[10],
                         param_3[0xd],'\x01','\0');
    local_10 = (uint)uVar6;
    FUN_1000b9b4((int)param_1,local_10);
    local_8 = FUN_1000d0c0(extraout_ECX_00,param_2,extraout_EDX_02);
    goto LAB_1000ef81;
  case 0xf:
    uVar6 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],'\x02',param_3[0xd],
                         '\x01','\0');
    local_10 = (uint)uVar6;
    FUN_1000b9b4((int)param_1,local_10);
    local_8 = FUN_1000d841(extraout_ECX_01,param_2,extraout_EDX_03);
LAB_1000ef81:
    uVar6 = (ulonglong)local_10;
    if ((int)local_10 < 0) break;
    goto LAB_1000ed96;
  case 0x10:
    local_8 = FUN_1000de2b(param_1,param_2,(int)param_3);
    break;
  case 0x11:
    local_8 = FUN_1000bf39(param_1,param_2,(int)param_3);
    break;
  case 0x12:
    local_8 = FUN_1000c86d(param_1,param_2,(int)param_3);
    break;
  case 0x13:
    local_8 = FUN_1000c0e5(param_1,param_2,(int)param_3);
    break;
  case 0x14:
    cVar2 = '\0';
    goto LAB_1000ef21;
  case 0x15:
    cVar2 = '\0';
    goto LAB_1000ef33;
  case 0x16:
    cVar2 = '\x01';
LAB_1000ef21:
    cVar8 = '\x01';
LAB_1000ef23:
    local_8 = FUN_1000c1c0(param_1,param_2,(int)param_3,cVar8,cVar2);
    break;
  case 0x17:
    cVar2 = '\x01';
LAB_1000ef33:
    cVar8 = '\0';
    goto LAB_1000ef23;
  case 0x18:
    local_8 = FUN_1000c5ec(param_1,param_2,(int)param_3);
    break;
  case 0x20:
    local_8 = FUN_1000dd79(param_1,param_2,(int)param_3);
    break;
  case 0x21:
    local_8 = FUN_1000cb0d(param_1,param_2,(int)param_3);
    break;
  case 0x22:
    local_8 = FUN_1000cd50(param_1,param_2,(int)param_3);
    break;
  case 0x24:
    local_8 = FUN_1000c96b(param_1,param_2,(int)param_3);
    break;
  case 0x25:
    local_8 = FUN_1000e17b(param_1,param_2,(int)param_3);
  }
LAB_1000f083:
  if (local_8 != 0xffffffff) {
    cVar2 = FUN_1000b52a((int)param_3);
    if (cVar2 == '\0') {
      FUN_1000b9b4((int)param_1,extraout_EDX_04);
      bVar3 = param_3[0x13];
      if (bVar3 == 0xc3) {
        if (param_3[0x10] == 1) {
          uVar7 = FUN_1000b5ea(this,*(ushort *)(param_3 + 0x11));
          FUN_10001877(param_2,(uint)uVar7,0x1300100,0x1102,local_8,(int)((ulonglong)uVar7 >> 0x20),
                       0);
        }
        else {
          uVar5 = FUN_1000b55c(this,param_2,0xffff);
          uVar7 = FUN_1000b5ea(param_1,*(ushort *)(param_3 + 0x11));
          FUN_10001877(param_2,uVar5,0x100100,0x2902,param_1[1] | 0x80000000,
                       (uint)param_3[0x10] << 4,0);
          FUN_10001877(param_2,local_8,0x100700,0x5402,uVar5,0,0);
          FUN_10001877(param_2,uVar5,0x100700,0x5502,(uint)uVar7,(int)((ulonglong)uVar7 >> 0x20),0);
          FUN_10001877(param_2,local_8,0x100700,0x5602,uVar5,0,0);
          FUN_1000b541((int)param_1,CONCAT22(extraout_var_00,*(undefined2 *)(param_3 + 0x11)));
          param_1[(local_8 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
        }
      }
      else {
        local_10 = 0x5402;
        if ((((bVar3 == 2) || (bVar3 == 0x57)) || (bVar3 == 0xac)) || (bVar3 == 0xe6)) {
          bVar3 = bVar3 - 2;
          local_10 = 0x5502;
        }
        else {
          bVar3 = 0xe4;
        }
        uVar6 = FUN_1000b651(this,param_2,0x42a,bVar3,'\0',0,'\0','\0');
        uVar5 = (uint)uVar6;
        FUN_1000b9b4((int)param_1,uVar5);
        uVar4 = FUN_1000b55c(extraout_ECX_02,param_2,0xffff);
        FUN_10001877(param_2,uVar4,0x100100,0x2902,uVar5,(int)(uVar6 >> 0x20),0);
        FUN_10001877(param_2,uVar4,0x100700,local_10,param_1[1] | 0x80000000,
                     (uint)param_3[0x10] << 4,0);
        FUN_10001877(param_2,local_8,0x100700,0x5402,uVar4,0,0);
        uVar7 = FUN_1000b5ea(param_1,*(ushort *)(param_3 + 0x11));
        FUN_10001877(param_2,uVar4,0x100700,0x5502,(uint)uVar7,(int)((ulonglong)uVar7 >> 0x20),0);
        FUN_10001877(param_2,local_8,0x100700,0x5602,uVar4,0,0);
        FUN_1000b541((int)param_1,CONCAT22(extraout_var,*(undefined2 *)(param_3 + 0x11)));
        param_1[(local_8 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
        if (-1 < (int)uVar5) {
          pbVar1 = (byte *)((int)param_1 + ((int)uVar5 >> 3) + 0x14);
          *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
        }
      }
      if (-1 < (int)local_8) {
        pbVar1 = (byte *)((int)param_1 + ((int)local_8 >> 3) + 0x14);
        *pbVar1 = *pbVar1 & ~('\x01' << (local_8 & 7));
      }
    }
    else {
      FUN_1000b541((int)param_1,
                   CONCAT22((short)(extraout_EDX_04 >> 0x10),*(undefined2 *)(param_3 + 0x11)));
      param_1[(local_8 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
    }
  }
switchD_1000ec59_caseD_3:
  return;
}

