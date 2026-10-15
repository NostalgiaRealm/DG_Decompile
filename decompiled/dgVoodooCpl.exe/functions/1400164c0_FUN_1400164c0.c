/*
 * FUN_1400164c0 at 1400164c0
 * char __fastcall FUN_1400164c0(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, int * param_5, int * param_6, undefined8 param_7, undefined4 * param_8, uint param_9, undefined8 param_10, uint param_11)
 * Address ranges: 1400164c0-140016685
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1400164c0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,int *param_6,undefined8 param_7,undefined4 *param_8,uint param_9,
                  undefined8 param_10,uint param_11)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar2 = '\x01';
  if (param_9 == 1) {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    uVar6 = FUN_140013fb8(pbVar5,param_5,param_6);
    if ((char)uVar6 == '\0') {
      uVar6 = FUN_140016440(pbVar5,param_5,param_6,param_7,param_8);
      if ((char)uVar6 == '\0') {
        cVar2 = '\0';
      }
    }
    else {
      iVar4 = *param_5;
      cVar8 = cVar2;
      if (iVar4 == -8) {
        if (param_11 < 0x275) {
          cVar8 = '\0';
          cVar2 = '\0';
          goto LAB_140016562;
        }
      }
      else if ((iVar4 == 0) || (iVar4 == -7)) goto LAB_140016562;
      if (*param_6 != iVar4) {
        cVar8 = '\x01';
        cVar2 = '\x01';
        if (param_11 < 0x278) {
          cVar8 = '\0';
          cVar2 = '\0';
        }
      }
    }
  }
  else if (1 < param_9) {
    return '\0';
  }
LAB_140016562:
  for (uVar7 = 0;
      (cVar2 != '\0' &&
      (uVar3 = (**(code **)(*param_2 + 0x60))(param_2,param_3,param_4), uVar7 < uVar3));
      uVar7 = uVar7 + 1) {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x68))(param_2,param_3,param_4,uVar7);
    iVar4 = FUN_140024ce8(pbVar5,&DAT_140029270);
    piVar1 = param_5;
    if ((iVar4 == 0) || (iVar4 = FUN_140024ce8(pbVar5,&DAT_140029274), piVar1 = param_6, iVar4 == 0)
       ) {
      if (cVar8 == '\0') {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar7,piVar1);
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      iVar4 = FUN_140024ce8(pbVar5,(byte *)"refrate");
      if (iVar4 == 0) {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar7,param_7);
        *param_8 = 1;
      }
    }
  }
  return cVar2;
}

