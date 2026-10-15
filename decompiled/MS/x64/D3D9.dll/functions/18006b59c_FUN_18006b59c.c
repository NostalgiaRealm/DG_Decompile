/*
 * FUN_18006b59c at 18006b59c
 * undefined8 __fastcall FUN_18006b59c(uint * param_1, longlong param_2, uint * param_3, longlong * param_4, longlong * param_5, ulonglong param_6)
 * Address ranges: 18006b59c-18006b96a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18006b59c(uint *param_1,longlong param_2,uint *param_3,longlong *param_4,longlong *param_5,
             ulonglong param_6)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  FUN_1800649ec(param_1,param_3,param_5,param_6);
  uVar6 = 0;
  param_3[0x89] = 0;
  param_3[0x8a] = 0;
  param_3[0x87] = 0;
  param_3[0x88] = 0;
  param_3[0x86] = 0;
  FUN_18006b068(param_1,param_2,param_3,param_5,param_6);
  FUN_180067058(param_1,param_3,param_5);
  FUN_1800670ec(param_1,param_3,param_5);
  uVar7 = param_3[0x8a];
  if (((uVar7 & 0x3f00) == 0) && (uVar7 != 0)) {
    pbVar1 = (byte *)((ulonglong)(uVar7 & 0xff) + *(longlong *)(param_3 + 0xc));
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar7 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar7 >> 0x12) & 3));
  }
  uVar2 = FUN_1800ec8c0((longlong)param_3,3,'\0');
  uVar7 = param_3[0x86];
  FUN_1800ee208(*(byte *)((longlong)param_3 + 0x20f),7);
  FUN_1800edbe0(param_3,param_5,0x2000,(ulonglong)uVar2);
  puVar4 = param_3;
  FUN_1800edbe0(param_3,param_5,0x37,(ulonglong)uVar7);
  FUN_180064ce4(puVar4,param_3,param_5,(ulonglong)param_3[0x86],param_6);
  FUN_180064f30(puVar4,param_3,param_5,param_3[0x86],param_6);
  FUN_180065288(puVar4,param_3,param_5,param_3[0x86],param_6);
  FUN_1800edbe0(param_3,param_5,0x2036,0x410200);
  FUN_1800edbe0(param_3,param_5,0x3e,0);
  FUN_1800ee2d0(*param_3,param_4,0);
  if ((param_3[2] & 1) != 0) {
    FUN_1800ee354(*param_3,param_4);
  }
  FUN_1800ee354(*param_3,param_4);
  uVar5 = uVar6;
  do {
    uVar7 = (uint)uVar5;
    if (*(char *)((longlong)param_3 + uVar5 + 0x202) != '\0') {
      pbVar1 = (byte *)((longlong)param_3 + ((longlong)(int)uVar7 >> 3) + 0xb4);
      *pbVar1 = *pbVar1 | '\x01' << (uVar7 & 7);
    }
    uVar5 = (ulonglong)(uVar7 + 1);
  } while (uVar7 + 1 < 8);
  FUN_18006544c(uVar5,(int *)param_3,param_4,param_6);
  uVar7 = (-(uint)(*(char *)((longlong)param_3 + 0x66) != '\0') & 4) + 2;
  if ((byte)param_3[0x11] != 0) {
    FUN_1800ee464(param_4,0,(byte)param_3[0x11],
                  (-(uint)(*(char *)((longlong)param_3 + 0x66) != '\0') & 3) + 4);
  }
  if (*(byte *)((longlong)param_3 + 0x45) != 0) {
    FUN_1800ee42c(param_4,1,*(byte *)((longlong)param_3 + 0x45),uVar7);
  }
  if (*(byte *)((longlong)param_3 + 0x46) != 0) {
    uVar2 = uVar7;
    if ((param_6 >> 0x37 & 1) != 0) {
      uVar2 = 1;
    }
    FUN_1800ee42c(param_4,2,*(byte *)((longlong)param_3 + 0x46),uVar2);
  }
  if (*(byte *)((longlong)param_3 + 0x47) != 0) {
    uVar2 = uVar7;
    if ((param_6 >> 0x37 & 1) != 0) {
      uVar2 = 1;
    }
    FUN_1800ee42c(param_4,3,*(byte *)((longlong)param_3 + 0x47),uVar2);
  }
  if ((byte)param_3[0x12] != 0) {
    FUN_1800ee42c(param_4,4,(byte)param_3[0x12],uVar7);
  }
  do {
    if (*(char *)((longlong)param_3 + uVar6 + 0x202) != '\0') {
      FUN_1800ee42c(param_4,(ulonglong)((int)uVar6 + 5),0xf,uVar7);
    }
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar2;
  } while (uVar2 < 8);
  FUN_1800eddec(param_4,3,0x3000065,0x1020f2);
  uVar3 = 0;
  if (*(byte *)((longlong)param_3 + 0x39) != 0) {
    uVar3 = FUN_1800eddec(param_4,2,0x2000068,(ulonglong)*(byte *)((longlong)param_3 + 0x39));
  }
  uVar7 = param_3[0x86];
  if (uVar7 != 0) {
    pbVar1 = (byte *)((ulonglong)(uVar7 & 0xff) + *(longlong *)(param_3 + 0xc));
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar7 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar7 >> 0x12) & 3));
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

