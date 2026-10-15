/*
 * FUN_18006dee8 at 18006dee8
 * undefined FUN_18006dee8(void)
 * Address ranges: 18006dee8-18006e677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18006dee8(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  ulonglong param_5,uint param_6,char param_7,byte param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong in_stack_ffffffffffffff40;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 uVar12;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar14;
  
  uVar10 = (undefined4)(in_stack_ffffffffffffff40 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  bVar1 = (&DAT_1802312e0)[param_5 & 0xff];
  uVar9 = (uint)bVar1;
  uVar4 = (uint)bVar1;
  lVar8 = (param_5 & 0xff) * 2;
  bVar2 = (&DAT_1802312f1)[lVar8];
  uVar3 = (&DAT_1802312f0)[lVar8];
  if (param_7 == '\0') {
    if ((param_8 & 1) != 0) {
      if (param_6 == 0) {
        uVar4 = uVar9;
        param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
      }
      uVar4 = uVar4 | 0x100;
      uVar7 = 0x42;
      goto LAB_18006e580;
    }
    uVar6 = (uint)param_9;
    if ((param_9 == 0) && (param_6 == 0)) goto LAB_18006e59c;
    if (param_6 == 0) {
      uVar4 = uVar9;
      uVar6 = (uint)param_9;
      param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
    }
    uVar4 = uVar4 | 0x100;
    if (uVar6 != 0) {
      FUN_1800f5730(param_3 + 0x20,param_2,0x33,param_6,bVar2,param_4,uVar4,
                    *(undefined4 *)(param_3 + 0xbc),0xe4,0x7cf0bdc2,0x7cf0bdc2,0x7cf0bdc2,0x7cf0bdc2
                    ,0);
      goto LAB_18006e59c;
    }
LAB_18006e57c:
    uVar7 = 0x36;
    goto LAB_18006e580;
  }
  if (param_7 == '\x01') goto LAB_18006e59c;
  if (param_7 == '\x02') {
    if ((param_8 & 1) != 0) {
LAB_18006e574:
      if (param_6 == 0) goto LAB_18006e59c;
      uVar4 = bVar1 | 0x100;
      goto LAB_18006e57c;
    }
    if (param_6 == 0) {
      uVar4 = uVar9;
      param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
    }
    uVar4 = uVar4 | 0x100;
    uVar7 = 0x56;
  }
  else {
    if (param_7 != '\x03') {
      uVar9 = (uint)param_5;
      if (param_7 == '\x04') {
        if ((param_8 & 1) == 0) {
          if (param_6 == 0) {
            uVar4 = (uint)bVar1;
            param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
          }
          if ((param_5 & 7) != 0) {
            FUN_1800f5730(param_3 + 0x20,param_2,0x2b,param_6,bVar2 & 7,param_4,uVar4 | 0x100,0);
          }
          if ((uVar9 >> 3 & 1) != 0) {
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_6,8,*(undefined4 *)(param_3 + 0xb8),0xe4
                          ,0x3f800000,0);
          }
        }
        else if ((uVar9 >> 3 & 1) != 0) {
          if (param_6 == 0) {
            uVar4 = (uint)bVar1;
            param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
          }
          if ((param_5 & 7) != 0) {
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_6,bVar2 & 7,param_4,uVar4 | 0x100,0);
          }
          FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_6,8,*(undefined4 *)(param_3 + 0xb8),0xe4,1
                        ,0);
        }
        goto LAB_18006e59c;
      }
      if (param_7 == '\x05') {
        if (param_6 == 0) {
          param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
        }
        uVar4 = param_6;
        if ((param_5 & 7) != 0) {
          uVar6 = func_0x000180213038(*(undefined4 *)(param_3 + 0x20));
          if (uVar6 < 0x50) {
            if ((param_6 & 0x3f00) != 0) {
              uVar4 = FUN_1800f42d0(param_3 + 0x20,3,1);
            }
            if ((param_5 & 1) != 0) {
              FUN_1800f5730(param_3 + 0x20,param_2,0x36,uVar4,1,param_4,0,0);
            }
            if ((uVar9 >> 1 & 1) != 0) {
              uVar7 = CONCAT44(uVar10,0xe4);
              FUN_1800f5730(param_3 + 0x20,param_2,0x55,uVar4,2,param_4,0,
                            *(undefined4 *)(param_3 + 0xb8),uVar7,10,0);
              uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
            }
            if ((uVar9 >> 2 & 1) != 0) {
              uVar7 = CONCAT44(uVar10,0xe4);
              FUN_1800f5730(param_3 + 0x20,param_2,0x55,uVar4,4,param_4,0,
                            *(undefined4 *)(param_3 + 0xb8),uVar7,0x14,0);
              uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
            }
            uVar6 = uVar4;
            if (param_8 != 0) {
              uVar6 = param_6;
            }
            uVar12 = 0;
            uVar7 = CONCAT44(uVar10,0xe4);
            uVar11 = 0x3ff;
            FUN_1800f5730(param_3 + 0x20,param_2,1,uVar6,bVar2 & 7,uVar4,0x1a4,
                          *(undefined4 *)(param_3 + 0xb8),uVar7,0x3ff,0);
          }
          else {
            if (((param_8 & 1) == 0) && ((param_6 & 0x3f00) != 0)) {
              uVar4 = FUN_1800f42d0(param_3 + 0x20,3,1);
            }
            uVar12 = CONCAT44(uVar11,10);
            uVar11 = 10;
            uVar7 = CONCAT44(uVar10,10);
            FUN_1800f5730(param_3 + 0x20,param_2,0x8a,uVar4,bVar2 & 7,
                          *(undefined4 *)(param_3 + 0xbc),0x1e4,0,uVar7,10,uVar12,
                          CONCAT44(uVar13,*(undefined4 *)(param_3 + 0xbc)),CONCAT44(uVar14,0x1e4),0,
                          0x14,10,0,param_4,0,0);
          }
          if ((param_8 & 1) == 0) {
            FUN_1800f5730(param_3 + 0x20,param_2,0x56,param_6,bVar2 & 7,uVar4,0x1a4,0,uVar7,uVar11,
                          uVar12);
          }
        }
        if ((uVar9 >> 3 & 1) != 0) {
          if ((param_8 & 1) == 0) {
            uVar7 = 0x3f800000;
          }
          else {
            uVar7 = 1;
          }
          FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_6,8,*(undefined4 *)(param_3 + 0xb8),0xe4,
                        uVar7,0);
        }
        if (uVar4 == param_6) goto LAB_18006e59c;
      }
      else {
        if (param_7 != '\x06') {
          if (param_7 == -1) {
            if (param_6 == 0) {
              param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
            }
            FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_6,bVar2,*(undefined4 *)(param_3 + 0xbc),
                          0x1e4,0,in_stack_ffffffffffffff40 & 0xffffffff00000000,0,0x3f800000,0);
          }
          goto LAB_18006e59c;
        }
        if (param_6 == 0) {
          param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
        }
        uVar6 = uVar9 & 7;
        uVar4 = param_6;
        if (((param_5 & 7) != 0) && ((param_6 & 0x3f00) != 0)) {
          uVar4 = FUN_1800f42d0(param_3 + 0x20,3,1);
        }
        uVar5 = func_0x000180213038(*(undefined4 *)(param_3 + 0x20));
        if (uVar5 < 0x50) {
          if ((param_5 & 1) != 0) {
            uVar7 = CONCAT44(uVar10,0xe4);
            FUN_1800f5730(param_3 + 0x20,param_2,0x29,uVar4,1,param_4,0,
                          *(undefined4 *)(param_3 + 0xb8),uVar7,0x16,0);
            uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((uVar9 >> 1 & 1) != 0) {
            uVar7 = CONCAT44(uVar10,0xe4);
            FUN_1800f5730(param_3 + 0x20,param_2,0x29,uVar4,2,param_4,0,
                          *(undefined4 *)(param_3 + 0xb8),uVar7,0xc,0);
            uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
          if ((uVar9 >> 2 & 1) != 0) {
            uVar7 = CONCAT44(uVar10,0xe4);
            FUN_1800f5730(param_3 + 0x20,param_2,0x29,uVar4,4,param_4,0,
                          *(undefined4 *)(param_3 + 0xb8),uVar7,2,0);
            uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          }
LAB_18006e128:
          if ((param_5 & 7) != 0) goto LAB_18006e134;
        }
        else {
          if (uVar6 == 0) goto LAB_18006e128;
          uVar7 = CONCAT44(uVar10,0x1e4);
          FUN_1800f5730(param_3 + 0x20,param_2,0x29,uVar4,bVar2 & 7,param_4,0,
                        *(undefined4 *)(param_3 + 0xbc),uVar7,0x16,CONCAT44(uVar11,0xc),
                        CONCAT44(uVar13,2),0,0);
          uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
LAB_18006e134:
          bVar2 = bVar2 & 7;
          uVar7 = CONCAT44(uVar10,0xe4);
          FUN_1800f5730(param_3 + 0x20,param_2,0x2a,uVar4,bVar2,uVar4,0x1a4,
                        *(undefined4 *)(param_3 + 0xb8),uVar7,0x16,0);
          uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          FUN_1800f5730(param_3 + 0x20,param_2,0x2b,uVar4,bVar2,uVar4,0x1a4,0);
          uVar6 = uVar4;
          if (param_8 == 0) {
            uVar6 = param_6;
          }
          uVar12 = 0;
          uVar7 = CONCAT44(uVar10,0xe4);
          uVar10 = 0x3b004020;
          FUN_1800f5730(param_3 + 0x20,param_2,0x38,uVar6,bVar2,uVar4,0x1a4,
                        *(undefined4 *)(param_3 + 0xb8),uVar7,0x3b004020,0);
          if ((param_8 & 1) != 0) {
            FUN_1800f5730(param_3 + 0x20,param_2,0x1b,param_6,bVar2,uVar4,0x1a4,0,uVar7,uVar10,
                          uVar12);
          }
        }
        if ((uVar9 >> 3 & 1) != 0) {
          if ((param_8 & 1) == 0) {
            uVar7 = 0x3f800000;
          }
          else {
            uVar7 = 1;
          }
          FUN_1800f5730(param_3 + 0x20,param_2,0x36,param_6,8,*(undefined4 *)(param_3 + 0xb8),0xe4,
                        uVar7,0);
        }
        if (uVar4 == param_6) goto LAB_18006e59c;
      }
      FUN_1800f4370(param_3 + 0x20,uVar4);
      goto LAB_18006e59c;
    }
    if ((param_8 & 1) != 0) goto LAB_18006e574;
    if (param_6 == 0) {
      uVar4 = uVar9;
      param_6 = FUN_1800f42d0(param_3 + 0x20,uVar3,1);
    }
    uVar4 = uVar4 | 0x100;
    uVar7 = 0x2b;
  }
LAB_18006e580:
  FUN_1800f5730(param_3 + 0x20,param_2,uVar7,param_6,bVar2,param_4,uVar4,0);
LAB_18006e59c:
  if (param_6 == 0) {
    param_6 = param_4;
  }
  return param_6;
}

