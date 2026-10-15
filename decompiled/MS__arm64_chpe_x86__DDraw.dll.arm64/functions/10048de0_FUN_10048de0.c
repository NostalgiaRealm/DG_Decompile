/*
 * FUN_10048de0 at 10048de0
 * undefined FUN_10048de0(void)
 * Address ranges: 10048de0-100491df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10048de0(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  piVar1 = (int *)(param_6 + 0x10);
  uVar14 = 1;
  piVar2 = (int *)(param_6 + 0x14);
  if (*piVar1 == 0) {
    local_60 = 0;
    local_58 = *(undefined4 *)(param_1 + 0x15c);
    uStack_54 = *(undefined4 *)(param_1 + 0x158);
    iVar13 = (*(code *)PTR_FUN_100ba1d8)(&local_60,param_3);
    FUN_10008e00(*(int *)(param_1 + 4));
    uVar14 = FUN_1004e270(param_1,2,iVar13 == 1,piVar1,piVar2,0);
    uVar14 = -((int)~uVar14 >> 0x1f);
    if (uVar14 == 0) {
      return 0;
    }
  }
  iVar13 = *piVar2;
  iVar6 = param_3[1];
  piVar3 = (int *)(param_6 + 0x18);
  iVar7 = *piVar1;
  iVar8 = *param_3;
  pbVar4 = (byte *)(*(int *)(param_1 + 4) + 0x1e);
  bVar9 = *pbVar4;
  iVar11 = param_3[2] - iVar8;
  iVar12 = param_3[3] - iVar6;
  if (*piVar3 == 0) {
    local_50 = 0;
    local_48 = *(undefined4 *)(param_2 + 0x15c);
    uStack_44 = *(undefined4 *)(param_2 + 0x158);
    iStack_64 = iVar12 + param_5;
    local_68 = iVar11 + param_4;
    local_70 = param_4;
    iStack_6c = param_5;
    iVar15 = (*(code *)PTR_FUN_100ba1d8)(&local_50,&local_70);
    FUN_10008e00(*(undefined4 *)(param_2 + 4));
    uVar14 = FUN_1004e270(param_2,1,iVar15 == 1,piVar3,param_6 + 0x1c,0);
    uVar14 = ~uVar14 >> 0x1f;
  }
  if (uVar14 != 0) {
    iVar15 = *(int *)(param_6 + 0x1c);
    cVar10 = *(char *)(param_6 + 5);
    if (cVar10 != '\0') {
      param_5 = param_5 + -1;
    }
    iVar5 = -iVar15;
    if (cVar10 == '\0') {
      iVar5 = iVar15;
    }
    if (*(uint *)(param_6 + 0xc) < 3) {
      iVar13 = iVar7 + iVar13 * iVar6 + (uint)bVar9 * iVar8;
      bVar9 = *pbVar4;
      iVar6 = *piVar3 + (uint)bVar9 * param_4 + iVar15 * param_5;
      uVar16 = (uint)bVar9;
      switch(*(uint *)(param_6 + 0xc)) {
      case 0:
        if ((((iVar11 == *(int *)(param_1 + 0x15c)) && (iVar11 == *(int *)(param_2 + 0x15c))) &&
            (iVar11 * uVar16 == *piVar2)) &&
           ((uint)*(byte *)(*(int *)(param_2 + 4) + 0x1e) * iVar11 == iVar15)) {
          FUN_100917a0(iVar13,iVar6,iVar12 * *piVar2);
          return uVar14;
        }
        break;
      case 1:
        if ((cVar10 == '\0') || (*(char *)(param_6 + 4) != '\0')) {
          switch(uVar16) {
          case 1:
            FUN_10048690(param_1,param_3,param_4,param_5,param_6,iVar6,iVar5,iVar13);
            return uVar14;
          case 2:
            FUN_10048760(param_1,param_3,param_4,param_5,param_6,iVar6,iVar5,iVar13);
            return uVar14;
          default:
            return uVar14;
          case 4:
            FUN_10048830(param_1,param_3,param_4,param_5,param_6,iVar6,iVar5,iVar13);
            return uVar14;
          }
        }
        break;
      case 2:
        switch(uVar16) {
        case 1:
          FUN_10048900(param_1,param_3,param_4,param_5,param_6,iVar6,iVar5,iVar13);
          return uVar14;
        case 2:
          FUN_10048aa0(param_1,param_3,param_4,param_5,param_6,iVar6,iVar5,iVar13);
          return uVar14;
        default:
          return uVar14;
        case 4:
          FUN_10048c40(param_1,param_3,param_4,param_5,param_6,iVar6,iVar5,iVar13);
          return uVar14;
        }
      }
      FUN_10048560(param_1,param_3,param_6,iVar6,iVar5,iVar13,iVar11 * uVar16);
    }
  }
  return uVar14;
}

