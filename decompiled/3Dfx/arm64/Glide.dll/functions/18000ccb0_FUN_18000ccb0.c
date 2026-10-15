/*
 * FUN_18000ccb0 at 18000ccb0
 * char __cdecl FUN_18000ccb0(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, int * param_5, int * param_6, undefined8 param_7, undefined4 * param_8, uint param_9, undefined8 param_10, uint param_11)
 * Address ranges: 18000ccb0-18000cebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18000ccb0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,int *param_6,undefined8 param_7,undefined4 *param_8,uint param_9,
                  undefined8 param_10,uint param_11)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  
  cVar2 = true;
  bVar13 = false;
  if (param_9 == 1) {
    uVar7 = 0;
    piVar8 = param_5;
    piVar9 = param_6;
    uVar10 = param_7;
    puVar11 = param_8;
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4);
    uVar6 = FUN_18000a910(pbVar5,param_5,param_6,uVar7,piVar8,piVar9,uVar10,puVar11);
    if ((uVar6 & 1) == 0) {
      bVar3 = FUN_18000cc18(pbVar5,param_5,param_6,param_7,param_8,piVar9,uVar10,puVar11);
      if (!bVar3) {
        cVar2 = false;
      }
    }
    else {
      iVar1 = *param_5;
      if (iVar1 == -8) {
        if (param_11 < 0x275) {
          cVar2 = false;
          bVar13 = (bool)cVar2;
          goto LAB_18000cd70;
        }
      }
      else {
        bVar13 = (bool)cVar2;
        if (iVar1 == 0 || iVar1 == -7) goto LAB_18000cd70;
      }
      cVar2 = *param_6 == iVar1 || 0x277 < param_11;
      bVar13 = (bool)cVar2;
    }
  }
  else if (1 < param_9) {
    return '\0';
  }
LAB_18000cd70:
  for (uVar12 = 0;
      (cVar2 != '\0' &&
      (uVar4 = (**(code **)(*param_2 + 0x60))(param_2,param_3,param_4), uVar12 < uVar4));
      uVar12 = uVar12 + 1) {
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x68))(param_2,param_3,param_4,uVar12);
    uVar4 = FUN_180060ae0(pbVar5,&DAT_180063d38);
    piVar8 = param_5;
    if ((uVar4 == 0) || (uVar4 = FUN_180060ae0(pbVar5,&DAT_180063d3c), piVar8 = param_6, uVar4 == 0)
       ) {
      if (bVar13 == false) {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar12,piVar8);
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      uVar4 = FUN_180060ae0(pbVar5,(byte *)"refrate");
      if (uVar4 == 0) {
        cVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,uVar12,param_7);
        *param_8 = 1;
      }
    }
  }
  return cVar2;
}

