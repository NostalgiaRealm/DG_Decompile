/*
 * FUN_1002de19 at 1002de19
 * char __fastcall FUN_1002de19(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, int * param_5, int * param_6, undefined4 param_7, undefined4 * param_8, uint param_9, undefined4 param_10, uint param_11)
 * Address ranges: 1002de19-1002df6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall
FUN_1002de19(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int *param_6,undefined4 param_7,undefined4 *param_8,uint param_9,undefined4 param_10,
            uint param_11)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char local_5;
  
  local_5 = '\0';
  cVar4 = '\x01';
  if (param_9 == 1) {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x28))(param_3,param_4,0);
    cVar2 = FUN_1002c636(pbVar5,param_5,param_6);
    if (cVar2 == '\0') {
      bVar3 = FUN_1002ddc0(pbVar5,param_6,param_7,param_8);
      if (!bVar3) {
        cVar4 = '\0';
      }
    }
    else {
      iVar7 = *param_5;
      local_5 = cVar4;
      if (iVar7 == -8) {
        if (param_11 < 0x275) {
          cVar4 = '\0';
          local_5 = cVar4;
          goto LAB_1002de8e;
        }
      }
      else if ((iVar7 == 0) || (iVar7 == -7)) goto LAB_1002de8e;
      if ((*param_6 != iVar7) && (cVar4 = '\x01', local_5 = cVar4, param_11 < 0x278)) {
        cVar4 = '\0';
        local_5 = cVar4;
      }
    }
  }
  else if (1 < param_9) {
    return '\0';
  }
LAB_1002de8e:
  for (uVar8 = 0;
      (cVar4 != '\0' && (uVar6 = (**(code **)(*param_2 + 0x30))(param_3,param_4), uVar8 < uVar6));
      uVar8 = uVar8 + 1) {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x34))(param_3,param_4,uVar8);
    iVar7 = FUN_1005231b(pbVar5,&DAT_10056538);
    piVar1 = param_5;
    if ((iVar7 == 0) || (iVar7 = FUN_1005231b(pbVar5,&DAT_1005653c), piVar1 = param_6, iVar7 == 0))
    {
      if (local_5 == '\0') {
        cVar4 = (**(code **)(*param_2 + 0x3c))(param_3,param_4,uVar8,piVar1);
      }
      else {
        cVar4 = '\0';
      }
    }
    else {
      iVar7 = FUN_1005231b(pbVar5,(byte *)"refrate");
      if (iVar7 == 0) {
        cVar4 = (**(code **)(*param_2 + 0x3c))(param_3,param_4,uVar8,param_7);
        *param_8 = 1;
      }
    }
  }
  return cVar4;
}

