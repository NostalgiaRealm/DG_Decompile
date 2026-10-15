/*
 * FUN_10069eb6 at 10069eb6
 * undefined __stdcall FUN_10069eb6(uint * param_1, uint param_2, uint param_3, int param_4, int param_5, int * param_6, char param_7, char param_8)
 * Address ranges: 10069eb6-1006a1de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069eb6(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
                 char param_7,char param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint *local_20;
  uint *local_1c;
  undefined4 local_18;
  uint local_14;
  
  *(uint *)(param_5 + 0x470) = *param_1 >> 7 & 0x2000;
  local_1c = (uint *)*param_1;
  puVar5 = (uint *)(param_5 + 0x310);
  local_14 = ((uint)local_1c & param_2) >> 0x10 & 0xffffff0f;
  uVar6 = (uint)local_1c & 0x7ff;
  local_18 = CONCAT31(local_18._1_3_,(char)local_14);
  local_20 = puVar5;
  if (*puVar5 != 0) goto LAB_1006a0d6;
  uVar2 = ((uint)local_1c >> 0x14 & 0x700 | (uint)local_1c & 0x1800) >> 8;
  if (uVar2 == 0) {
    uVar6 = FUN_10070621(param_5,uVar6);
  }
  else {
    if (uVar2 != 3) {
      iVar3 = param_5;
      uVar1 = local_18;
      if (uVar2 == 4) {
        if (uVar6 == 0) {
          uVar6 = *(uint *)(param_5 + 0x1e8);
        }
        else if (uVar6 == 1) {
          uVar6 = *(uint *)(param_5 + 0x1ec);
          uVar1 = 1;
        }
        else {
          if (uVar6 != 2) goto LAB_1006a0d6;
          uVar6 = *(uint *)(param_5 + 0x1f0);
          uVar1 = 2;
        }
      }
      else if (uVar2 == 5) {
        uVar6 = *(uint *)(param_5 + 500 + uVar6 * 4);
      }
      else {
        if (uVar2 != 6) {
          if (uVar2 != 0x13) goto LAB_1006a0d6;
          uVar6 = *(uint *)(param_5 + 0x2b0);
          goto LAB_1006a0bf;
        }
        if (*(char *)(*(int *)(param_5 + 0x10) + 0x4a6c) == '\x03') {
          iVar3 = FUN_10069958(param_5,uVar6);
          if ((((uint)local_1c & 0x2000) != 0) && (iVar3 != 0)) {
            local_1c = *(uint **)(extraout_EDX + 0x21c);
            if (local_1c == (uint *)0x0) {
              FUN_100c3be1((int *)(extraout_EDX + 0x18),param_6,0x36);
            }
            else {
              FUN_100c3be1((int *)(extraout_EDX + 0x18),param_6,0x1e);
            }
            param_1 = param_1 + 1;
            *puVar5 = *(uint *)(param_5 + 0x268) | 0x40000000;
            *(char *)(param_5 + 0x314) = (char)local_14;
            *(undefined4 *)(param_5 + 800) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x32c) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x328) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x324) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x330) =
                 *(undefined4 *)(param_5 + 0x29c + *(int *)(param_5 + 0x2dc) * 4);
            *(undefined1 *)(param_5 + 0x334) = 3;
            goto LAB_1006a0d6;
          }
          uVar6 = *(uint *)(extraout_EDX + 0x26c + iVar3 * 4);
          iVar3 = extraout_EDX;
          uVar1 = local_18;
        }
        else {
          uVar6 = *(uint *)(param_5 + 0x1fc + uVar6 * 4);
        }
      }
      FUN_10070652(iVar3,uVar6,(char)uVar1,puVar5);
      goto LAB_1006a0d6;
    }
    uVar6 = *(uint *)(param_5 + 0x224);
  }
LAB_1006a0bf:
  *puVar5 = uVar6;
  *(char *)(param_5 + 0x314) = (char)local_14;
  *(undefined4 *)(param_5 + 0x324) = 0xffffffff;
  *(undefined4 *)(param_5 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_5 + 0x32c) = 0xffffffff;
  *(undefined4 *)(param_5 + 800) = 0xffffffff;
LAB_1006a0d6:
  local_1c = param_1 + 1;
  if (((byte)(*local_1c >> 0x1c) & 7 | (byte)(*local_1c >> 8) & 0x18) == 0x13) {
    if (*(int *)(param_5 + 0x474) == -1) {
      uVar1 = *(undefined4 *)(param_5 + 0x330);
      puVar8 = (uint *)(param_5 + 0x340);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)(param_5 + 0x390) = uVar1;
      puVar4 = (undefined4 *)(param_5 + 0x310);
      puVar7 = (undefined4 *)(param_5 + 0x370);
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)(param_5 + 0x394) = *(undefined4 *)(param_5 + 0x334);
      local_40 = FUN_100c2e34(param_5 + 0x18,4,'\x01');
      local_3c = (char)local_14;
      local_30 = 0xffffffff;
      local_2c = 0xffffffff;
      local_28 = 0xffffffff;
      local_24 = 0xffffffff;
      puVar5 = &local_40;
      puVar8 = local_20;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar5 = local_20;
      puVar8 = (uint *)(param_5 + 0x3a0);
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      *(byte *)(param_5 + 0x344) = *(byte *)(param_5 + 0x344) | (byte)local_14;
    }
    param_1 = local_1c;
    *(uint *)(param_5 + 0x474) = *local_1c;
    uVar1 = FUN_100c40de(0xe4,CONCAT31((int3)((uint)param_5 >> 8),*(undefined1 *)(param_5 + 0x344)))
    ;
    *(char *)(param_5 + 0x3a4) = (char)uVar1;
    *(char *)(param_5 + 0x374) = (char)uVar1;
  }
  FUN_1006a1df(param_1 + 1,param_3,param_4,param_5,param_7,param_8);
  return;
}

