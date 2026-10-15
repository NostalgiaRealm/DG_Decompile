/*
 * FUN_1008b810 at 1008b810
 * undefined FUN_1008b810(void)
 * Address ranges: 1008b810-1008ba47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1008b810(ulonglong param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  ulonglong *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uStack_5c;
  undefined3 uStack_5b;
  undefined8 uStack_58;
  
  puVar1 = (ulonglong *)(param_6 + 0x330);
  *(uint *)(param_6 + 800) = *param_2 >> 7 & 0x2000;
  uVar5 = *param_2;
  bVar4 = (byte)((ulonglong)param_3 >> 0x10) & (byte)(uVar5 >> 0x10);
  bVar3 = bVar4 & 0xf;
  if ((*(int *)puVar1 != 0) || (uVar2 = (uVar5 & 0x1800 | uVar5 >> 0x14 & 0x7ff) >> 8, 0x13 < uVar2)
     ) goto switchD_1008b898_caseD_1;
  uVar5 = uVar5 & 0x7ff;
  switch(uVar2) {
  case 0:
    param_1 = FUN_100883a0(param_1,param_6,uVar5);
    break;
  default:
    goto switchD_1008b898_caseD_1;
  case 8:
    puVar7 = (uint *)(param_6 + (uVar5 + 0xb0) * 4);
    uVar5 = *puVar7;
    if (uVar5 == 0) {
      uVar5 = FUN_10121590(param_6,4,1);
      *puVar7 = uVar5;
    }
    param_1 = (ulonglong)uVar5;
    break;
  case 9:
    *(int *)puVar1 = 0x20000c00;
    *(undefined1 *)(param_6 + 0x334) = 0;
    *(undefined8 *)(param_6 + 0x340) = 0xffffffffffffffff;
    *(undefined8 *)(param_6 + 0x348) = 0xffffffffffffffff;
    goto switchD_1008b898_caseD_1;
  case 0x13:
    param_1 = FUN_1008b610(param_1,param_6,uVar5,param_5);
  }
  *(byte *)(param_6 + 0x334) = bVar3;
  *(undefined8 *)(param_6 + 0x340) = 0xffffffffffffffff;
  *(undefined8 *)(param_6 + 0x348) = 0xffffffffffffffff;
  *(int *)puVar1 = (int)param_1;
switchD_1008b898_caseD_1:
  puVar7 = param_2 + 1;
  if ((*puVar7 & 0x1800 | *puVar7 >> 0x14 & 0x700) == 0x1300) {
    if (*(uint *)(param_6 + 0x4e0) == 0xffffffff) {
      *(undefined8 *)(param_6 + 0x368) = *(undefined8 *)(param_6 + 0x338);
      *(ulonglong *)(param_6 + 0x360) = *puVar1;
      *(undefined8 *)(param_6 + 0x378) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x370) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x388) = *(undefined8 *)(param_6 + 0x358);
      *(undefined8 *)(param_6 + 0x380) = *(undefined8 *)(param_6 + 0x350);
      *(undefined8 *)(param_6 + 0x398) = *(undefined8 *)(param_6 + 0x338);
      *(ulonglong *)(param_6 + 0x390) = *puVar1;
      *(undefined8 *)(param_6 + 0x3a8) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x3a0) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x3b0) = *(undefined8 *)(param_6 + 0x350);
      uVar6 = FUN_10121590(param_6,4,1);
      *(undefined8 *)(param_6 + 0x338) = uStack_58;
      *puVar1 = CONCAT44(CONCAT31(uStack_5b,bVar4),uVar6) & 0xffffff0fffffffff;
      *(undefined8 *)(param_6 + 0x348) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 0x340) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 0x3c8) = *(undefined8 *)(param_6 + 0x338);
      *(ulonglong *)(param_6 + 0x3c0) = *puVar1;
      *(undefined8 *)(param_6 + 0x3d8) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x3d0) = *(undefined8 *)(param_6 + 0x340);
      param_2 = puVar7;
    }
    else {
      *(byte *)(param_6 + 0x364) = bVar3 | *(byte *)(param_6 + 0x364);
      param_2 = puVar7;
    }
    *(uint *)(param_6 + 0x4e0) = *param_2;
    param_1 = FUN_10123210(0xe4,*(undefined1 *)(param_6 + 0x364));
    *(char *)(param_6 + 0x3c4) = (char)param_1;
    *(char *)(param_6 + 0x394) = (char)param_1;
  }
  uVar6 = FUN_1008bd38(param_1,param_2 + 1,param_4);
  return uVar6;
}

