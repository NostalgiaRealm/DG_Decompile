/*
 * FUN_18006ce5c at 18006ce5c
 * undefined __fastcall FUN_18006ce5c(undefined8 param_1, uint * param_2, longlong * param_3, uint param_4, uint param_5)
 * Address ranges: 18006ce5c-18006cfdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006ce5c(undefined8 param_1,uint *param_2,longlong *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_48 [2];
  
  uVar5 = param_4 >> 0x10;
  iVar8 = 4;
  uVar7 = 0;
  iVar3 = iVar8;
  do {
    uVar7 = uVar7 & 0xff | 1 << (uVar5 & 3);
    uVar5 = uVar5 >> 2 & 0x3f;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar5 = 0;
  bVar6 = (byte)(param_5 >> 0x10);
  bVar2 = bVar6;
  do {
    uVar5 = uVar5 & 0xff | 1 << (bVar2 & 3);
    bVar2 = bVar2 >> 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if ((param_4 & 0xff00ffff) == (param_5 & 0xff00ffff)) {
    uVar7 = uVar5 | uVar7;
  }
  FUN_18006c79c((ulonglong)(uVar7 & 0xff),(uint *)local_48,(longlong)param_2,param_4,(char)uVar7);
  uVar4 = param_1;
  FUN_18006c808(param_1,param_2,param_3,0,param_4,local_48[0],0,0,'\0');
  if (((param_4 & 0xff00ffff) == (param_5 & 0xff00ffff)) && ((uint)local_48[0] != 0)) {
    param_2[0xe0] = (uint)local_48[0];
    param_2[0xe4] = 0xffffffff;
    param_2[0xe7] = 0xffffffff;
    param_2[0xe6] = 0xffffffff;
    param_2[0xe5] = 0xffffffff;
    *(byte *)(param_2 + 0xe1) = bVar6;
  }
  else {
    puVar1 = FUN_18006c79c(uVar4,(uint *)local_48,(longlong)param_2,param_5,(char)uVar5);
    FUN_18006c808(param_1,param_2,param_3,1,param_5,*(undefined8 *)puVar1,0,0,'\0');
  }
  return;
}

