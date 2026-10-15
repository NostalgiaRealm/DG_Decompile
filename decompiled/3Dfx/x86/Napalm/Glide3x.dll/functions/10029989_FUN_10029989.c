/*
 * FUN_10029989 at 10029989
 * undefined __fastcall FUN_10029989(ushort * param_1, int * param_2, void * param_3, uint param_4, byte param_5, char param_6)
 * Address ranges: 10029989-10029bac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10029989(ushort *param_1,int *param_2,void *param_3,uint param_4,byte param_5,char param_6)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  ushort local_18;
  uint local_8;
  
  uVar4 = (ushort)param_4 & 0xf0;
  bVar1 = true;
  if ((uVar4 == 0xf0) && (param_2[0x28] == 0)) {
    uVar5 = FUN_1004da21((int)param_2,4,'\x01');
    param_2[0x28] = uVar5;
  }
  if (param_6 == '\0') {
    param_6 = (param_5 ^ 1) + 7;
    bVar2 = ((param_5 == 0) - 1U & 0xa5) - 1;
  }
  else {
    bVar2 = 0xe4;
    param_6 = '\x0f';
  }
  local_18 = param_1[5] & 0xf00;
  local_8 = param_4 & 0xffff;
  if (((param_1[5] & 0xf00) == 0) || (uVar4 != 0x70)) {
    bVar1 = false;
  }
  cVar3 = FUN_10023e61();
  if (cVar3 == '\0') {
    if ((*param_1 & 0xff0) == 0x100) {
      uVar7 = extraout_EDX;
      if ((char)extraout_EDX != '\0') {
        local_8 = FUN_10026a4e((int)param_2,0,0,0,0,param_6,'\0');
        local_8 = local_8 & 0xffff;
        uVar7 = extraout_EDX_00;
      }
      FUN_10027976(param_2,CONCAT22((short)((uint)uVar7 >> 0x10),param_1[1]),(uint)param_1[2],
                   (uint)param_1[3],local_8,(byte)param_1[4],param_6,bVar2,param_3);
    }
    else {
      if ((char)extraout_EDX != '\0') {
        local_8 = FUN_10026a4e((int)param_2,0,0,0,0,param_6,'\0');
        local_8 = local_8 & 0xffff;
      }
      FUN_100295a4(param_2,param_1,local_8,param_6,bVar2,param_3);
    }
    if (bVar1) {
      local_8 = (uint)((ushort)local_8 | param_1[5] & 0xf00);
    }
  }
  else {
    uVar6 = param_1[5];
    if (((byte)uVar6 & 0xf0) == 0xf0) {
      if (local_18 == 0x100) {
        uVar5 = FUN_10026a4e((int)param_2,0,0,0,0,param_6,'\0');
        local_8 = uVar5 & 0xffff;
        FUN_10026db5(param_2,param_1[5],local_8,(byte)param_1[4],param_6,param_3,'\0');
        FUN_10026db5(param_2,(ushort)uVar5 | 0x100,param_4,0,param_6,param_3,'\0');
        FUN_10026afe((int)param_2,local_8);
        goto LAB_10029b76;
      }
      uVar6 = param_1[3];
    }
    FUN_10026db5(param_2,uVar6,param_4,(byte)param_1[4],param_6,param_3,'\0');
  }
LAB_10029b76:
  if ((uVar4 == 0x70) && (((byte)local_8 & 0xf0) != 0x70)) {
    FUN_10026db5(param_2,(ushort)local_8,param_4,0,param_6,param_3,'\0');
    FUN_10026afe((int)param_2,local_8);
  }
  return;
}

