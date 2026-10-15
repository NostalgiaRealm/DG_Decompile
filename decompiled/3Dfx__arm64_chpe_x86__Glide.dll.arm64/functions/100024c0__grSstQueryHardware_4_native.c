/*
 * _grSstQueryHardware@4_native at 100024c0
 * undefined _grSstQueryHardware@4_native(void)
 * Address ranges: 100024c0-100026bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 _grSstQueryHardware_4_native(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = FUN_1001beb0();
  FUN_1001c150(uVar2);
  uVar2 = FUN_1001beb0();
  iVar3 = FUN_1001d188(uVar2);
  iVar4 = FUN_1001beb0();
  uVar5 = FUN_1001c150(iVar4);
  if ((uVar5 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(*(int *)(iVar4 + 0x1c) + 0x797);
  }
  iVar3 = iVar3 * 0x18;
  *param_1 = 1;
  bVar1 = (&DAT_1009e190)[iVar3];
  param_1[1] = (uint)bVar1;
  switch(bVar1) {
  case 0:
  case 3:
  case 4:
  case 5:
    iVar4 = FUN_1001beb0();
    uVar5 = FUN_1001c150(iVar4);
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(int *)(iVar4 + 0x1c) + 0x78f);
    }
    param_1[2] = uVar6 >> 0x14;
    uVar6 = 0;
    param_1[3] = *(undefined4 *)(&DAT_1009e188 + iVar3);
    param_1[4] = uVar8;
    param_1[5] = 0;
    if (uVar8 != 0) {
      do {
        param_1[uVar6 * 2 + 6] = *(undefined4 *)(&DAT_1009e18c + iVar3);
        iVar4 = FUN_1001beb0();
        uVar5 = FUN_1001c150(iVar4);
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(*(int *)(iVar4 + 0x1c) + 0x793);
        }
        iVar4 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        param_1[iVar4 + 7] = uVar7 >> 0x14;
      } while (uVar6 < uVar8);
    }
    break;
  case 1:
    iVar4 = FUN_1001beb0();
    uVar5 = FUN_1001c150(iVar4);
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(*(int *)(iVar4 + 0x1c) + 0x78f);
    }
    param_1[2] = uVar8 >> 0x14;
    param_1[3] = 1;
    param_1[4] = *(undefined4 *)(&DAT_1009e18c + iVar3);
    iVar3 = FUN_1001beb0();
    uVar5 = FUN_1001c150(iVar3);
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(*(int *)(iVar3 + 0x1c) + 0x793);
    }
    param_1[5] = uVar8 >> 0x14;
    break;
  default:
    return 0;
  }
  return 1;
}

