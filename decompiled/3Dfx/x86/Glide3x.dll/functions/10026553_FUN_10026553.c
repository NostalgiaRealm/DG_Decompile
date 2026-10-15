/*
 * FUN_10026553 at 10026553
 * undefined __fastcall FUN_10026553(int * param_1, void * param_2, uint param_3, byte param_4, uint param_5, uint param_6, byte param_7, float param_8, char param_9)
 * Address ranges: 10026553-100267c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10026553(int *param_1,void *param_2,uint param_3,byte param_4,uint param_5,uint param_6,
            byte param_7,float param_8,char param_9)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int *piVar5;
  byte bVar6;
  char cVar7;
  
  uVar2 = param_3 & 0xffff;
  uVar3 = (byte)~(byte)(param_3 >> 0xd) & 1 |
          (-(uint)(((ushort)param_3 & 0xf00) != 0x100) & 0xfffffffe) + 2;
  uVar4 = (ushort)param_5;
  if (uVar3 == 1) {
    FUN_10023753((int)param_1,uVar4,param_7);
    cVar7 = '\0';
    bVar6 = 0;
    bVar1 = FUN_10023cb7((int)param_1,param_5,param_4);
    FUN_1002381f(param_1,0,param_3,bVar1,bVar6,cVar7);
    FUN_10023b58(param_1 + 0x5d,param_4,0x437f0000);
  }
  else {
    if (uVar3 == 2) {
      FUN_10023753((int)param_1,uVar4,param_7);
      cVar7 = '\0';
      bVar6 = 0;
      bVar1 = FUN_10023cb7((int)param_1,param_5,param_4);
      FUN_1002381f(param_1,0,param_3,bVar1,bVar6,cVar7);
      piVar5 = param_1 + 0x5d;
      FUN_10023b58(piVar5,param_4,0x437f0000);
      FUN_1004b2c7(param_2,(*piVar5 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U &
                           0x7f000000,param_1 + 0x4d,param_1 + 0x55,piVar5,(int *)0x0);
      uVar2 = param_5 & 0xffff;
      goto LAB_1002673d;
    }
    if (uVar3 != 3) goto LAB_1002673d;
    FUN_10023753((int)param_1,uVar4,param_7);
    cVar7 = '\0';
    bVar6 = 1;
    bVar1 = FUN_10023cb7((int)param_1,param_5,param_4);
    FUN_1002381f(param_1,0,param_3,bVar1,bVar6,cVar7);
    FUN_10023b58(param_1 + 0x5d,param_4,-0x3c810000);
    param_8 = param_8 + 255.0;
  }
  piVar5 = param_1 + 0x65;
  FUN_10023b58(piVar5,param_4,(int)param_8);
  FUN_1004b2c7(param_2,(*piVar5 + param_1[0x5d] + param_1[0x55] + param_1[0x4d]) * 0x1000000 +
                       0x1000000U & 0x7f000000 | 0x32,param_1 + 0x4d,param_1 + 0x55,param_1 + 0x5d,
               piVar5);
  uVar2 = param_5 & 0xffff;
LAB_1002673d:
  FUN_10023753((int)param_1,(ushort)param_6,param_7);
  bVar6 = ((ushort)uVar2 & 0xf00) == 0x100;
  cVar7 = '\0';
  bVar1 = FUN_10023cb7((int)param_1,param_6,param_4);
  FUN_1002381f(param_1,0,uVar2,bVar1,bVar6,cVar7);
  uVar2 = (param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U & 0x7f000000;
  if (param_9 == '\0') {
    uVar2 = uVar2 | 0x43;
  }
  else {
    uVar2 = uVar2 | 0x1c;
  }
  FUN_1004b2c7(param_2,uVar2,param_1 + 0x4d,param_1 + 0x55,(int *)0x0,(int *)0x0);
  return;
}

