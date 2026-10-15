/*
 * FUN_1000c413 at 1000c413
 * undefined __fastcall FUN_1000c413(uint * param_1, int * param_2, byte * param_3)
 * Address ranges: 1000c413-1000c911
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c413(uint *param_1,int *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint uVar4;
  uint *this;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  uint local_20;
  uint local_8;
  
  local_8 = 0xffffffff;
  bVar2 = *param_3 & 0x7f;
  if (0x4e < bVar2) {
    if (bVar2 != 0x4f) {
      return;
    }
    local_8 = FUN_1000be0f(param_1,param_2,(int)param_3);
    goto LAB_1000c7b3;
  }
  if (bVar2 == 0x4e) {
    local_8 = FUN_1000b716(param_1,param_2,(int)param_3);
    goto LAB_1000c7b3;
  }
  switch(bVar2) {
  case 1:
    if (*(short *)(param_3 + 0x11) == 0x429) {
      local_8 = FUN_1000b2f6(param_1,param_2,(int)param_3);
    }
    else {
      uVar5 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],param_3[10],
                           param_3[0xd],'\0');
      uVar7 = (uint)uVar5;
      FUN_1000a457((int)param_1,uVar7);
      uVar4 = uVar7;
      if ((extraout_EDX & 0x80000000) == 0) {
        if (((ushort)(*(short *)(param_3 + 0x11) - 0x42aU) < 0xd) &&
           (cVar3 = FUN_1000a038((int)param_3), cVar3 != '\0')) {
          FUN_1000199d(param_2,*param_1 | 0x80000000,0x100100,0x2902,extraout_EDX_00,
                       (uint)*(ushort *)(param_3 + 0x11) << 4,0);
          uVar7 = 0;
          do {
            if (param_1[uVar7 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
              param_1[uVar7 + 6] = 0xffffffff;
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x10);
        }
        else {
          cVar3 = FUN_1000a038((int)param_3);
          if ((cVar3 == '\0') ||
             (uVar4 = extraout_EDX_01, local_8 = extraout_EDX_01,
             param_1[(extraout_EDX_01 & 0xff) + 6] != 0xffffffff)) goto LAB_1000c52b;
        }
      }
      else {
LAB_1000c52b:
        local_8 = FUN_1000a0fe(param_1,param_2,*(ushort *)(param_3 + 0x11),param_3[0x10]);
        if (local_8 != uVar7) {
          FUN_1000199d(param_2,local_8,0x100100,0x2902,uVar7,(int)(uVar5 >> 0x20),0);
        }
        uVar4 = uVar7;
        if ((extraout_EDX & 0x80000000) != 0) break;
      }
      pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
    }
    break;
  case 2:
    uVar4 = 0x5802;
    goto LAB_1000c587;
  default:
    goto switchD_1000c44e_caseD_3;
  case 4:
    local_8 = FUN_1000a511(param_1,param_2,(int)param_3,0x100700,0x5902,0x1300700,0x5902,0,'\x01');
    FUN_1000a457((int)param_1,local_8);
    uVar5 = FUN_1000a138(extraout_ECX,param_2,*(ushort *)(param_3 + 5),param_3[9],param_3[0xc],
                         param_3[0xf],'\0');
    if (-1 < (int)local_8) {
      pbVar1 = (byte *)((int)param_1 + ((int)local_8 >> 3) + 0x14);
      *pbVar1 = *pbVar1 & ~('\x01' << (local_8 & 7));
    }
    uVar4 = 0x1300700;
    if (param_3[0x10] != 1) {
      uVar4 = 0x100700;
    }
    uVar7 = 0x5802;
    goto LAB_1000c618;
  case 5:
    uVar4 = 0x5902;
    goto LAB_1000c587;
  case 6:
    uVar4 = 0x5302;
    goto LAB_1000c639;
  case 7:
    uVar4 = 0x5202;
LAB_1000c639:
    local_8 = FUN_1000a665(param_1,param_2,(int)param_3,0x100700,uVar4);
    break;
  case 8:
    cVar3 = '\0';
    goto LAB_1000c656;
  case 9:
    cVar3 = '\x01';
LAB_1000c656:
    local_8 = FUN_1000a92a(param_1,param_2,(int)param_3,cVar3);
    break;
  case 10:
    uVar4 = 0x5d02;
    goto LAB_1000c587;
  case 0xb:
    uVar4 = 0x5f02;
LAB_1000c587:
    local_8 = FUN_1000a511(param_1,param_2,(int)param_3,0x100700,uVar4,0x1300700,uVar4,0,'\0');
    break;
  case 0xc:
    iVar9 = 1;
    goto LAB_1000c67f;
  case 0xd:
    iVar9 = 5;
LAB_1000c67f:
    local_8 = FUN_1000a511(param_1,param_2,(int)param_3,0x130700,0xc202,0x1330700,0xc202,iVar9,'\0')
    ;
    uVar5 = CONCAT44(0x120,param_1[1]) | 0x80000000;
    uVar7 = 0x5402;
    uVar4 = 0x100700;
LAB_1000c618:
    FUN_1000199d(param_2,local_8,uVar4,uVar7,(uint)uVar5,(int)(uVar5 >> 0x20),0);
    break;
  case 0xe:
    uVar5 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],param_3[10],
                         param_3[0xd],'\x01');
    local_20 = (uint)uVar5;
    FUN_1000a457((int)param_1,local_20);
    local_8 = FUN_1000b40d(extraout_ECX_00,param_2,local_20);
    goto LAB_1000c749;
  case 0xf:
    uVar5 = FUN_1000a138(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],'\x02',param_3[0xd],
                         '\x01');
    local_20 = (uint)uVar5;
    FUN_1000a457((int)param_1,local_20);
    local_8 = FUN_1000bb8d(extraout_ECX_01,param_2,local_20);
LAB_1000c749:
    if (-1 < (int)local_20) {
      pbVar1 = (byte *)((int)param_1 + ((int)local_20 >> 3) + 0x14);
      *pbVar1 = *pbVar1 & ~('\x01' << (local_20 & 7));
    }
    break;
  case 0x10:
    local_8 = FUN_1000c0c4(param_1,param_2,(int)param_3);
    break;
  case 0x11:
    local_8 = FUN_1000a9c8(param_1,param_2,(int)param_3);
    break;
  case 0x13:
    local_8 = FUN_1000ab74(param_1,param_2,(int)param_3);
    break;
  case 0x14:
    cVar3 = '\0';
    goto LAB_1000c6ec;
  case 0x15:
    cVar3 = '\0';
    goto LAB_1000c6fc;
  case 0x16:
    cVar3 = '\x01';
LAB_1000c6ec:
    cVar8 = '\x01';
LAB_1000c6ee:
    local_8 = FUN_1000ac4e(param_1,param_2,(int)param_3,cVar8,cVar3);
    break;
  case 0x17:
    cVar3 = '\x01';
LAB_1000c6fc:
    cVar8 = '\0';
    goto LAB_1000c6ee;
  case 0x18:
    local_8 = FUN_1000b079(param_1,param_2,(int)param_3);
  }
LAB_1000c7b3:
  if (local_8 != 0xffffffff) {
    cVar3 = FUN_1000a038((int)param_3);
    if (cVar3 == '\0') {
      FUN_1000a457((int)param_1,local_8);
      if (param_3[0x10] == 1) {
        uVar6 = FUN_1000a0d7(this,*(ushort *)(param_3 + 0x11));
        FUN_1000199d(param_2,(uint)uVar6,0x1300100,0x1102,local_8,(int)((ulonglong)uVar6 >> 0x20),0)
        ;
      }
      else {
        uVar4 = FUN_1000a049(this,param_2,0xffff);
        uVar6 = FUN_1000a0d7(param_1,*(ushort *)(param_3 + 0x11));
        FUN_1000199d(param_2,uVar4,0x100100,0x2902,param_1[1] | 0x80000000,(uint)param_3[0x10] << 4,
                     0);
        FUN_1000199d(param_2,local_8,0x100700,0x5402,uVar4,0,0);
        FUN_1000199d(param_2,uVar4,0x100700,0x5502,(uint)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
        FUN_1000199d(param_2,local_8,0x100700,0x5602,uVar4,0,0);
        uVar4 = 0;
        do {
          if (param_1[uVar4 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
            param_1[uVar4 + 6] = 0xffffffff;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x10);
        param_1[(local_8 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
      }
      if (-1 < (int)local_8) {
        pbVar1 = (byte *)((int)param_1 + ((int)local_8 >> 3) + 0x14);
        *pbVar1 = *pbVar1 & ~('\x01' << (local_8 & 7));
      }
    }
    else {
      uVar4 = 0;
      do {
        if (param_1[uVar4 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
          param_1[uVar4 + 6] = 0xffffffff;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
      param_1[(local_8 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
    }
  }
switchD_1000c44e_caseD_3:
  return;
}

