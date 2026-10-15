/*
 * FUN_18006f870 at 18006f870
 * undefined FUN_18006f870(void)
 * Address ranges: 18006f870-18006fb7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006f870(ulonglong param_1,uint *param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  *(uint *)(param_6 + 0x480) = *param_2 >> 7 & 0x2000;
  uVar3 = *param_2;
  uVar7 = (uVar3 & param_3) >> 0x10 & 0xf;
  bVar5 = (byte)uVar7;
  if (*(int *)(param_6 + 800) != 0) goto LAB_18006faa4;
  uVar2 = uVar3 & 0x1800 | uVar3 >> 0x14 & 0x700;
  uVar1 = uVar3 & 0x7ff;
  if (uVar2 < 0x100) {
    lVar8 = param_6 + (ulonglong)uVar1 * 4;
    param_1 = (ulonglong)*(uint *)(lVar8 + 0x140);
    if (*(uint *)(lVar8 + 0x140) == 0) {
      param_1 = FUN_1800f42d0(param_6 + 0x20,4,1);
      *(int *)(lVar8 + 0x140) = (int)param_1;
    }
    *(int *)(param_6 + 800) = (int)param_1;
  }
  else {
    uVar2 = uVar2 >> 8;
    if (uVar2 != 3) {
      if (uVar2 == 4) {
        if (uVar1 == 0) {
          uVar6 = *(undefined4 *)(param_6 + 0x1fc);
        }
        else if (uVar1 == 1) {
          uVar6 = *(undefined4 *)(param_6 + 0x200);
          uVar7 = 1;
        }
        else {
          if (uVar1 != 2) goto LAB_18006faa4;
          uVar6 = *(undefined4 *)(param_6 + 0x204);
          uVar7 = 2;
        }
      }
      else if (uVar2 == 5) {
        uVar6 = *(undefined4 *)(param_6 + (ulonglong)uVar1 * 4 + 0x208);
      }
      else {
        if (uVar2 != 6) {
          if (uVar2 != 0x13) goto LAB_18006faa4;
          uVar6 = *(undefined4 *)(param_6 + 0x2c4);
          goto LAB_18006f910;
        }
        if (*(char *)(*(longlong *)(param_6 + 0x10) + 0x4a6c) == '\x03') {
          cVar4 = *(char *)(*(longlong *)(param_6 + 0x18) + (ulonglong)uVar1);
          iVar9 = (int)cVar4;
          if (-2 < cVar4) {
            if (cVar4 < 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = cVar4 + 2;
            }
          }
          if (((uVar3 >> 0xd & 1) != 0) && (iVar9 != 0)) {
            iVar9 = uVar1 * 0x10 + 0x1a0;
            uVar3 = *(uint *)(param_6 + (ulonglong)(*(int *)(param_6 + 0x2f0) - 1) * 4 + 0x2b4);
            if (*(int *)(param_6 + 0x230) == 0) {
              param_1 = FUN_1800f5730(param_6 + 0x20,param_7,0x36,uVar3,8,0x40410803,0,iVar9,
                                      uVar3 | 0x10000000,1,0);
            }
            else {
              param_1 = FUN_1800f5730(param_6 + 0x20,param_7,0x1e,uVar3,8,0x40410803,0,iVar9,
                                      uVar3 | 0x10000000,1,*(int *)(param_6 + 0x230),0,0);
            }
            *(byte *)(param_6 + 0x324) = bVar5;
            param_2 = param_2 + 1;
            *(uint *)(param_6 + 800) = *(uint *)(param_6 + 0x27c) | 0x40000000;
            *(undefined8 *)(param_6 + 0x330) = 0xffffffffffffffff;
            *(undefined8 *)(param_6 + 0x338) = 0xffffffffffffffff;
            *(undefined4 *)(param_6 + 0x340) =
                 *(undefined4 *)(param_6 + (ulonglong)(*(int *)(param_6 + 0x2f0) - 1) * 4 + 0x2b4);
            *(undefined1 *)(param_6 + 0x344) = 3;
            goto LAB_18006faa4;
          }
          uVar6 = *(undefined4 *)(param_6 + (longlong)iVar9 * 4 + 0x280);
        }
        else {
          uVar6 = *(undefined4 *)(param_6 + (ulonglong)uVar1 * 4 + 0x210);
        }
      }
      param_1 = func_0x00018018b228(param_1,param_6,uVar6,uVar7,param_6 + 800);
      goto LAB_18006faa4;
    }
    uVar6 = *(undefined4 *)(param_6 + 0x238);
LAB_18006f910:
    *(undefined4 *)(param_6 + 800) = uVar6;
  }
  *(undefined8 *)(param_6 + 0x330) = 0xffffffffffffffff;
  *(undefined8 *)(param_6 + 0x338) = 0xffffffffffffffff;
  *(byte *)(param_6 + 0x324) = bVar5;
LAB_18006faa4:
  if ((param_2[1] & 0x1800 | param_2[1] >> 0x14 & 0x7ff) >> 8 == 0x13) {
    if (*(int *)(param_6 + 0x484) == -1) {
      *(undefined8 *)(param_6 + 0x358) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x350) = *(undefined8 *)(param_6 + 800);
      *(undefined8 *)(param_6 + 0x368) = *(undefined8 *)(param_6 + 0x338);
      *(undefined8 *)(param_6 + 0x360) = *(undefined8 *)(param_6 + 0x330);
      *(undefined8 *)(param_6 + 0x3a0) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x378) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x370) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x388) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x380) = *(undefined8 *)(param_6 + 800);
      *(undefined8 *)(param_6 + 0x398) = *(undefined8 *)(param_6 + 0x338);
      *(undefined8 *)(param_6 + 0x390) = *(undefined8 *)(param_6 + 0x330);
      uVar6 = FUN_1800f42d0(param_6 + 0x20,4,1);
      uStack_4c = CONCAT31(uStack_4c._1_3_,bVar5);
      *(undefined8 *)(param_6 + 0x328) = uStack_48;
      *(ulonglong *)(param_6 + 800) = CONCAT44(uStack_4c,uVar6);
      *(undefined8 *)(param_6 + 0x338) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 0x330) = 0xffffffffffffffff;
      *(undefined8 *)(param_6 + 0x3b8) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x3b0) = *(undefined8 *)(param_6 + 800);
      *(undefined8 *)(param_6 + 0x3c8) = *(undefined8 *)(param_6 + 0x338);
      *(undefined8 *)(param_6 + 0x3c0) = *(undefined8 *)(param_6 + 0x330);
    }
    else {
      *(byte *)(param_6 + 0x354) = *(byte *)(param_6 + 0x354) | bVar5;
    }
    *(uint *)(param_6 + 0x484) = param_2[1];
    param_1 = FUN_1800f5ea8(0xe4,*(undefined1 *)(param_6 + 0x354));
    param_2 = param_2 + 1;
    *(char *)(param_6 + 0x3b4) = (char)param_1;
    *(char *)(param_6 + 900) = (char)param_1;
  }
  FUN_18006fb88(param_1,param_2 + 1,param_4,param_5,param_6,param_8,param_9);
  return;
}

