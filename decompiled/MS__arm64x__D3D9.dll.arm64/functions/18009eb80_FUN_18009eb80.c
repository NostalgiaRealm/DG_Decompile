/*
 * FUN_18009eb80 at 18009eb80
 * undefined FUN_18009eb80(void)
 * Address ranges: 18009eb80-18009edf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18009eb80(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar2 = FUN_1800f42d0(param_2 + 4,4,1);
  if ((((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) == '\0')) &&
      (*(char *)((longlong)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1800f42d0(param_2 + 4,2,1);
  }
  *(byte *)(param_2 + 0x20) = (byte)param_2[0x20] | 3;
  uVar8 = 0x68;
  uVar9 = 0;
  uVar4 = CONCAT44(uVar7,0xe4);
  FUN_1800f5730(param_2 + 4,param_1,0x33,uVar2,3,0x210101,4,param_2[0x16],uVar4,0x68,0);
  if (iVar3 != 0) {
    if ((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    if ((*(char *)((longlong)param_2 + 6) == '\0') && ((char)param_2[2] == '\0')) {
      bVar5 = 0;
    }
    else {
      bVar5 = 2;
    }
    FUN_1800f5730(param_2 + 4,param_1,0x1a,iVar3,bVar5 | bVar6,uVar2,4,0,uVar4,uVar8,uVar9);
  }
  FUN_1800f5730(param_2 + 4,param_1,0x1b,uVar2,3,uVar2,4,0,uVar4,uVar8,uVar9);
  FUN_1800f5730(param_2 + 4,param_1,0x36,uVar2,0xc,param_2[0x16],0x10,0x60,0);
  uVar1 = *param_2 & 0xf;
  if (uVar1 - 3 < 2) {
    uVar4 = FUN_18009dc48(param_1,param_2,uVar2,iVar3,param_4,param_3,param_5);
  }
  else {
    uVar4 = 0;
    if (1 < uVar1 - 6) {
      if (uVar1 == 0) {
        uVar4 = FUN_18009c338(param_1,param_2,uVar2,iVar3);
      }
      else if (uVar1 == 1) {
        uVar4 = FUN_18009ca18(param_1,param_2,uVar2,iVar3,0,param_4,param_3,param_5);
      }
      else if (uVar1 == 2) {
        uVar4 = FUN_18009d408(param_1,param_2,uVar2,iVar3);
      }
      else if (uVar1 == 5) {
        uVar4 = FUN_18009e378(param_1,param_2,uVar2,iVar3,param_4,param_3,param_5);
      }
    }
  }
  return uVar4;
}

