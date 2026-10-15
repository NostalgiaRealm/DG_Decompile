/*
 * FUN_10020680 at 10020680
 * undefined __thiscall FUN_10020680(void * this, int param_1, uint param_2, uint param_3, byte param_4, byte param_5, char param_6, char param_7, byte param_8)
 * Address ranges: 10020680-1002074e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10020680(void *this,int param_1,uint param_2,uint param_3,byte param_4,byte param_5,char param_6
            ,char param_7,byte param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = 0;
  uVar5 = 0x3f800000;
  if (param_6 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  *(undefined4 *)((int)this + 0xce38) = uVar6;
  if (param_7 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  *(uint *)((int)this + 0xce74) = (uint)param_4;
  *(uint *)((int)this + 0xceb8) = (uint)param_5;
  *(undefined4 *)((int)this + 0xce3c) = uVar6;
  *(uint *)((int)this + 0xceb0) = param_3;
  *(uint *)((int)this + 0xcea8) = param_2 & param_3;
  uVar2 = FUN_1001fd21(param_1,param_3);
  *(uint *)((int)this + 0xceb4) = uVar2;
  uVar3 = FUN_1001fb19(param_1,0,param_2);
  *(undefined4 *)((int)this + 0xce88) = 0;
  cVar1 = (&DAT_10062804)[param_1];
  *(uint *)((int)this + 0xceac) = uVar3 & uVar2;
  *(uint *)((int)this + 0xce78) = (uint)param_8;
  *(undefined4 *)((int)this + 0xce84) = 0;
  *(undefined4 *)((int)this + 0xce80) = 0;
  if (cVar1 == '\0') {
    uVar4 = uVar5;
  }
  *(undefined4 *)((int)this + 0xce8c) = uVar4;
  return;
}

