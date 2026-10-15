/*
 * FUN_18003fdd8 at 18003fdd8
 * undefined __cdecl FUN_18003fdd8(longlong param_1, int * param_2, longlong * param_3, uint param_4)
 * Address ranges: 18003fdd8-180040037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003fdd8(longlong param_1,int *param_2,longlong *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 extraout_x1;
  uint *puVar5;
  uint *puVar6;
  uint extraout_w13;
  longlong extraout_x14;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 == 0) {
LAB_18003ffb8:
    param_2[0x57] = 2;
    param_2[0x58] = 0x4001;
    param_2[0x5b] = 1;
    param_2[0x5c] = 1;
    param_2[0x59] = 1;
    param_2[0x5a] = 1;
    uVar2 = 0;
    goto LAB_18003ffd4;
  }
  if (iVar3 == 1) {
    bVar1 = (param_4 & 0xff0) == 0x100;
LAB_18003fe38:
    if (bVar1) goto LAB_18003ffb8;
  }
  else {
    if (iVar3 == 4) {
      bVar1 = (param_4 & 0xdf0) == 0;
      goto LAB_18003fe38;
    }
    if (iVar3 == 7) {
      return;
    }
  }
  uVar2 = FUN_18003da90((longlong)param_2,param_4,0,0,0,8,0);
  if ((param_4 & 0xf0) != 0) {
    FUN_18003f3c8(param_2,param_3,param_4,0xff,uVar2,uVar2,8,0);
  }
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 == 1) {
    uVar7 = 0x1d;
LAB_18003ff10:
    bVar1 = true;
  }
  else {
    if (iVar3 == 2) {
      uVar7 = 0x39;
      goto LAB_18003ff10;
    }
    if (iVar3 == 3) {
      uVar7 = 0x31;
    }
    else {
      if (iVar3 != 4) {
        if (iVar3 == 5) {
          uVar7 = 0x18;
        }
        else {
          if (iVar3 != 6) {
            uVar7 = 0;
            goto LAB_18003fefc;
          }
          uVar7 = 0x31;
        }
        goto LAB_18003ff10;
      }
      uVar7 = 0x1d;
    }
LAB_18003fefc:
    bVar1 = false;
  }
  piVar4 = (int *)FUN_18003d4b8((longlong)param_2,uVar2,8);
  FUN_18003d598(piVar4,0,extraout_w13,0xff,0,0);
  iVar3 = FUN_180055e18(param_2,(uint *)(param_2 + 0x60),param_2[0x12],0xb4,0xff,0,0);
  param_2[0x5f] = iVar3;
  if (bVar1) {
    puVar6 = (uint *)(param_2 + 0x5f);
    puVar5 = (uint *)(param_2 + 0x57);
  }
  else {
    puVar6 = (uint *)(param_2 + 0x57);
    puVar5 = (uint *)(param_2 + 0x5f);
  }
  FUN_180056e08(param_3,(param_2[0x57] + param_2[0x4f] + iVar3) * 0x1000000 + 0x1000000U &
                        0x7f000000 | uVar7,(uint *)(param_2 + 0x4f),puVar5,puVar6,(uint *)0x0);
  FUN_18003da00((longlong)param_2,extraout_x1,uVar2,3);
LAB_18003ffd4:
  FUN_180056e08(param_3,param_2[0x57] * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d,
                (uint *)(param_2 + 0x57),(uint *)0x0,(uint *)0x0,(uint *)0x0);
  if ((uVar2 & 0xf0) == 0x80) {
    FUN_180055de0((longlong)param_2,param_2[(ulonglong)(uVar2 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14 + 0x98) = 0;
  }
  return;
}

