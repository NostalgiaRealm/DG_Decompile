/*
 * FUN_100a51ee at 100a51ee
 * uint __cdecl FUN_100a51ee(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 100a51ee-100a5352
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_100a51ee(int *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar6;
  
  uVar7 = 1;
  uVar8 = 0;
  do {
    uVar2 = (**(code **)(*param_1 + 0x1c))(param_2);
    if (uVar2 <= uVar8) {
      if ((char)(uVar7 >> 8) != '\0') {
        uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar7);
        if (*param_3 == 0x287) {
          return uVar2;
        }
        if (*param_3 == 0x286) {
          return uVar2;
        }
        if (*param_3 == 0x285) {
          return uVar2;
        }
        if (*param_3 == 0x283) {
          return uVar2;
        }
        if (*param_3 == 0x282) {
          return uVar2;
        }
        if (*param_3 == 0x281) {
          return uVar2;
        }
        if (*param_3 == 0x280) {
          return uVar2;
        }
        if (*param_3 == 0x279) {
          return uVar2;
        }
        if (*param_3 == 0x278) {
          return uVar2;
        }
        if (*param_3 == 0x277) {
          return uVar2;
        }
        if (*param_3 == 0x276) {
          return uVar2;
        }
        if (*param_3 == 0x275) {
          return uVar2;
        }
        if (*param_3 == 0x274) {
          return uVar2;
        }
        if (*param_3 == 0x273) {
          return uVar2;
        }
        if (*param_3 == 0x270) {
          return uVar2;
        }
        if (*param_3 == 0x263) {
          return uVar2;
        }
        if (*param_3 == 0x262) {
          return uVar2;
        }
        if (*param_3 == 0x261) {
          return uVar2;
        }
        if (*param_3 == 0x260) {
          return uVar2;
        }
        if (*param_3 == 0x255) {
          return uVar2;
        }
LAB_100a533f:
        return uVar2 & 0xffffff00;
      }
      *param_3 = 0x287;
      piVar6 = param_3;
      break;
    }
    pbVar3 = (byte *)(**(code **)(*param_1 + 0x20))(param_2,uVar8);
    iVar4 = (**(code **)(*param_1 + 0x24))(param_2,uVar8);
    iVar5 = (**(code **)(*param_1 + 0x30))(param_2,uVar8);
    pcVar9 = "version";
    uVar2 = FUN_100d03d3(pbVar3,(byte *)"version");
    if (uVar2 != 0) goto LAB_100a533f;
    piVar6 = (int *)0x0;
    if ((iVar5 == 0) && (piVar6 = (int *)0x0, iVar4 != 0)) {
      bVar1 = FUN_100a4f46(pcVar9,param_1,param_2,uVar8,param_3,iVar4);
      piVar6 = (int *)CONCAT31(extraout_var,bVar1);
      uVar7 = (uint)CONCAT11(bVar1,bVar1);
    }
    uVar8 = uVar8 + 1;
  } while ((char)uVar7 != '\0');
  return CONCAT31((int3)((uint)piVar6 >> 8),(char)uVar7);
}

