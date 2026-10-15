/*
 * FUN_1000f39a at 1000f39a
 * undefined __fastcall FUN_1000f39a(uint * param_1, int * param_2, byte * param_3)
 * Address ranges: 1000f39a-1000f71d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f39a(uint *param_1,int *param_2,byte *param_3)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *this;
  char cVar7;
  
  pbVar2 = param_3;
  bVar3 = *param_3 & 0x7f;
  if (0x60 < bVar3) {
    return;
  }
  if (bVar3 != 0x60) {
    if (bVar3 < 0x28) {
      if (bVar3 == 0x27) {
        cVar7 = '\0';
LAB_1000f4fb:
        FUN_1000e5bc(param_1,param_2,param_1,cVar7);
        return;
      }
      if (bVar3 != 0x19) {
        if (bVar3 == 0x1a) {
          if (param_3[3] != 0) {
            FUN_1000ead5(param_1,param_2,(uint)param_3);
            return;
          }
          FUN_1000e9f6(param_1,param_2,(uint)param_3);
          return;
        }
        if (bVar3 == 0x1b) {
          cVar7 = '\x01';
        }
        else {
          if (bVar3 == 0x1c) {
            if ((char)param_1[0x7b] == '\0') {
              return;
            }
            FUN_1000f71e(param_1,param_2,'\0');
            FUN_10001877(param_2,0xffffffff,0,0xc301,0xffffffff,0,0);
            return;
          }
          if (bVar3 == 0x1d) {
            cVar7 = '\x01';
            goto LAB_1000f4fb;
          }
          if (bVar3 == 0x1e) {
            *(ulonglong *)(param_1 + 0x28) =
                 *(ulonglong *)(param_1 + 0x28) | *(ulonglong *)(param_1 + 0x26);
            FUN_1000f7b5(param_1);
            piVar4 = (int *)FUN_1000e331((int)param_1,(uint)*(ushort *)(pbVar2 + 0x10));
            *piVar4 = param_2[1] - *param_2;
            return;
          }
          if (bVar3 != 0x26) {
            return;
          }
          cVar7 = '\0';
        }
        FUN_1000e3f6(param_1,param_2,(int)param_3,cVar7);
        return;
      }
      FUN_1000f71e(param_1,param_2,'\0');
      FUN_10001877(param_2,0xffffffff,0x10000,0xe801,0xffffffff,0,0);
      iVar5 = FUN_1000e331((int)param_1,(uint)*(ushort *)(pbVar2 + 0x10));
      uVar6 = 0;
      if ((char)param_1[0x7b] != '\0') {
        uVar6 = 0x80000000;
      }
      param_3 = (byte *)(param_2[1] - *param_2 | uVar6);
      this = (uint *)(iVar5 + 4);
      goto LAB_1000f714;
    }
    if (bVar3 == 0x28) {
      if (param_3[3] == 0) {
        uVar6 = *param_1;
        uVar1 = *(ushort *)(param_3 + 0x10);
        FUN_1000f71e(param_1,param_2,'\0');
        FUN_10001877(param_2,uVar6 | 0x80000000,0x12010,0x88102,0xffffffff,(uint)uVar1 << 4,0);
        FUN_10001877(param_2,0xffffffff,0x110000,0x8401,0xffffffff,0,0);
        param_1[param_1[0x7a] * 2 + 0x49] = param_2[1] - *param_2;
        param_1[param_1[0x7a] * 2 + 0x4a] = 0;
        goto LAB_1000f6e7;
      }
      FUN_1000e90c(param_1,param_2,(int)param_3,'\x01');
    }
    else {
      if (bVar3 != 0x29) {
        if (bVar3 == 0x2a) {
          FUN_1000f71e(param_1,param_2,'\0');
          FUN_10001877(param_2,0xffffffff,0x12000,0xe901,0xffffffff,0,0x12345678);
          param_1[param_1[0x7a] * 2 + 0x48] = param_2[1] - *param_2;
          uVar6 = param_1[param_1[0x7a] * 2 + 0x47];
          if (uVar6 == 0) {
            return;
          }
          *(uint *)(*param_2 + -4 + uVar6) = (param_2[1] - *param_2) - uVar6;
          param_1[param_1[0x7a] * 2 + 0x47] = 0;
          return;
        }
        if (bVar3 == 0x2b) {
          FUN_1000f71e(param_1,param_2,'\0');
          uVar6 = param_1[0x7a];
          param_1[0x7a] = uVar6 - 1;
          uVar6 = param_1[(uVar6 - 1) * 2 + 0x49];
          if (uVar6 != 0) {
            *(uint *)(*param_2 + -4 + uVar6) = (param_2[1] - *param_2) - uVar6;
          }
          uVar6 = param_1[param_1[0x7a] * 2 + 0x4a];
          if (uVar6 == 0) {
            return;
          }
          *(uint *)(*param_2 + -4 + uVar6) = (param_2[1] - *param_2) - uVar6;
          return;
        }
        if (bVar3 == 0x2c) {
          FUN_1000f71e(param_1,param_2,'\0');
          FUN_10001877(param_2,0xffffffff,0x12000,0xe901,0xffffffff,0,0x12345678);
        }
        else {
          if (bVar3 != 0x2d) {
            return;
          }
          FUN_1000e7d7(param_1,param_2,(int)param_3,0);
        }
        goto LAB_1000f6f9;
      }
      FUN_1000e7d7(param_1,param_2,(int)param_3,1);
    }
    param_1[param_1[0x7a] * 2 + 0x49] = param_2[1] - *param_2;
    param_1[param_1[0x7a] * 2 + 0x4a] = 0;
LAB_1000f6e7:
    param_1[0x7a] = param_1[0x7a] + 1;
    return;
  }
  FUN_1000e90c(param_1,param_2,(int)param_3,'\0');
LAB_1000f6f9:
  param_3 = (byte *)(param_2[1] - *param_2);
  this = param_1 + param_1[0x79] * 6 + 0x2e;
LAB_1000f714:
  FUN_10003d8f(this,&param_3);
  return;
}

