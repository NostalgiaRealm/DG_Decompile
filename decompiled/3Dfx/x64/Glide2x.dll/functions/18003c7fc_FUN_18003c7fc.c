/*
 * FUN_18003c7fc at 18003c7fc
 * undefined __fastcall FUN_18003c7fc(int * param_1, longlong * param_2, ushort param_3, byte param_4, ushort param_5, ushort param_6, byte param_7, float param_8, char param_9)
 * Address ranges: 18003c7fc-18003cbcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003c7fc(int *param_1,longlong *param_2,ushort param_3,byte param_4,ushort param_5,
                  ushort param_6,byte param_7,float param_8,char param_9)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  float fVar6;
  uint *puVar7;
  
  uVar4 = 2;
  uVar3 = 0;
  if ((param_3 & 0xf00) == 0x100) {
    uVar3 = uVar4;
  }
  uVar3 = ~(uint)(param_3 >> 0xd) & 1 | uVar3;
  if (uVar3 == 1) {
    FUN_18003a434((longlong)param_1,param_5,param_7);
    uVar1 = FUN_18003abbc((longlong)param_1,(uint)param_5,param_4);
    FUN_18003a558(param_1,0,param_3,(byte)uVar1,0,'\0');
    puVar7 = (uint *)(param_1 + 0x67);
    if (param_4 != 0xff) {
      uVar4 = 5;
    }
    param_1[0x5f] = uVar4;
    *puVar7 = uVar4;
    iVar2 = 0x4001 - (uint)(param_4 != 0xff);
    param_1[0x61] = 0x437f0000;
    param_1[0x62] = 0x437f0000;
    param_1[99] = 0x437f0000;
    param_1[100] = 0x437f0000;
    if (param_4 != 0xff) {
      iVar2 = 0x4006;
    }
    param_1[0x60] = iVar2;
    param_1[0x68] = iVar2;
    iVar2 = 4;
    if (param_4 != 0xff) {
      iVar2 = 10;
    }
    param_1[0x69] = (int)param_8;
    param_1[0x6a] = (int)param_8;
    param_1[0x6b] = (int)param_8;
    param_1[0x6c] = (int)param_8;
    uVar4 = (iVar2 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x32;
  }
  else if (uVar3 == 2) {
    FUN_18003a434((longlong)param_1,param_5,param_7);
    uVar1 = FUN_18003abbc((longlong)param_1,(uint)param_5,param_4);
    FUN_18003a558(param_1,0,param_3,(byte)uVar1,0,'\0');
    puVar7 = (uint *)0x0;
    if (param_4 != 0xff) {
      uVar4 = 5;
    }
    param_1[0x5f] = uVar4;
    param_1[0x61] = 0x437f0000;
    param_1[0x62] = 0x437f0000;
    param_1[99] = 0x437f0000;
    param_1[100] = 0x437f0000;
    iVar2 = 0x4001 - (uint)(param_4 != 0xff);
    if (param_4 != 0xff) {
      iVar2 = 0x4006;
    }
    param_1[0x60] = iVar2;
    uVar4 = (param_1[0x57] + uVar4 + param_1[0x4f]) * 0x1000000 + 0x1000000 & 0x7f000000;
  }
  else {
    if (uVar3 != 3) goto LAB_18003cb18;
    FUN_18003a434((longlong)param_1,param_5,param_7);
    uVar1 = FUN_18003abbc((longlong)param_1,(uint)param_5,param_4);
    FUN_18003a558(param_1,0,param_3,(byte)uVar1,1,'\0');
    fVar6 = param_8 + 255.0;
    puVar7 = (uint *)(param_1 + 0x67);
    param_1[0x61] = -0x3c810000;
    param_1[0x62] = -0x3c810000;
    param_1[99] = -0x3c810000;
    param_1[100] = -0x3c810000;
    if (param_4 != 0xff) {
      uVar4 = 5;
    }
    *puVar7 = uVar4;
    param_1[0x5f] = uVar4;
    param_1[0x69] = (int)fVar6;
    param_1[0x6a] = (int)fVar6;
    param_1[0x6b] = (int)fVar6;
    param_1[0x6c] = (int)fVar6;
    iVar2 = 0x4001 - (uint)(param_4 != 0xff);
    if (param_4 != 0xff) {
      iVar2 = 0x4006;
    }
    param_1[0x60] = iVar2;
    param_1[0x68] = iVar2;
    iVar2 = 4;
    if (param_4 != 0xff) {
      iVar2 = 10;
    }
    uVar4 = (iVar2 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x32;
  }
  FUN_18005538c(param_2,uVar4,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                (uint *)(param_1 + 0x5f),puVar7);
  param_3 = param_5;
LAB_18003cb18:
  FUN_18003a434((longlong)param_1,param_6,param_7);
  bVar5 = (param_3 & 0xf00) == 0x100;
  uVar1 = FUN_18003abbc((longlong)param_1,(uint)param_6,param_4);
  FUN_18003a558(param_1,0,param_3,(byte)uVar1,bVar5,'\0');
  uVar4 = (param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000;
  if (param_9 == '\0') {
    uVar4 = uVar4 | 0x43;
  }
  else {
    uVar4 = uVar4 | 0x1c;
  }
  FUN_18005538c(param_2,uVar4,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),(uint *)0x0,
                (uint *)0x0);
  return;
}

