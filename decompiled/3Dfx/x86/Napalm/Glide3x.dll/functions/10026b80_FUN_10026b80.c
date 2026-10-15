/*
 * FUN_10026b80 at 10026b80
 * undefined4 __fastcall FUN_10026b80(int * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, byte param_7, void * param_8)
 * Address ranges: 10026b80-10026db4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_10026b80(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            byte param_7,void *param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined2 uVar6;
  uint uVar5;
  undefined2 extraout_var;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int local_c;
  
  uVar6 = (undefined2)((uint)in_EAX >> 0x10);
  uVar9 = (ushort)param_2;
  if ((param_2 & 0x4000) != 0) {
    uVar8 = (ushort)param_3 & 0x10ff;
    uVar7 = (ushort)param_3 & 0xf0;
    if (((uVar7 != 0x80) && (uVar7 != 0xf0)) ||
       (uVar8 == ((ushort)param_6 & 0x10ff) ||
        (uVar8 == ((ushort)param_4 & 0x10ff) || uVar8 == ((ushort)param_5 & 0x10ff)))) {
      param_3 = FUN_10026a4e((int)param_1,param_4,param_5,param_6,0,param_7,'\0');
    }
    uVar10 = param_3 & 0xffff;
    if ((param_2 & 0x2000) == 0) {
      iVar11 = 0x3f008081;
    }
    else {
      iVar11 = 0x43000000;
    }
    uVar7 = (ushort)param_3;
    FUN_1002657e((int)param_1,uVar7,1);
    FUN_1002664a(param_1,0,param_2,0xff,0,'\0');
    FUN_100269ca(param_1 + 0x5d,-0x1c,iVar11);
    piVar1 = param_1 + 0x55;
    piVar2 = param_1 + 0x4d;
    FUN_1004e6d0(param_8,(param_1[0x5d] + *piVar1 + *piVar2) * 0x1000000 + 0x1000000U & 0x7f000000 |
                         (((uVar9 & 0xf00) != 0x100) - 1 & 0x14) + 0x1d,piVar2,piVar1,param_1 + 0x5d
                 ,(int *)0x0);
    FUN_1002657e((int)param_1,uVar7,param_7);
    FUN_1002664a(param_1,0,uVar10,0,0,'\0');
    bVar4 = FUN_10026b29((int)param_1,uVar10,0xa4);
    param_1[2] = param_1[2] | 1;
    piVar3 = param_1 + 0x5d;
    param_1[0x5f] = 0;
    if (*param_1 == 0x51) {
      uVar5 = 3;
      param_1[0x61] = 5;
      local_c = 0;
      iVar11 = 4;
    }
    else {
      uVar5 = 2;
      local_c = 5;
      iVar11 = 3;
    }
    *piVar3 = iVar11;
    uVar5 = FUN_1004e895(8,bVar4,uVar5,4,0,0,0);
    param_1[0x5e] = uVar5;
    param_1[0x60] = local_c;
    bVar4 = FUN_10026b29((int)param_1,uVar10,0xa4);
    param_1[0x65] = 2;
    uVar10 = FUN_1004e895(1,bVar4,1,4,0,0,0);
    param_1[0x66] = uVar10;
    param_1[0x67] = 2;
    FUN_1004e6d0(param_8,(*piVar1 + *piVar3 + *piVar2 + 2) * 0x1000000 + 0x1000000U & 0x7f000000 |
                         0x37,piVar2,piVar1,piVar3,param_1 + 0x65);
    uVar9 = uVar7 | 0x2000;
    uVar6 = extraout_var;
  }
  return CONCAT22(uVar6,uVar9);
}

