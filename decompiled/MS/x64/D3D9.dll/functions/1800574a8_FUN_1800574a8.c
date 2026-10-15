/*
 * FUN_1800574a8 at 1800574a8
 * undefined __fastcall FUN_1800574a8(longlong param_1, ulonglong param_2, longlong param_3, undefined1 param_4)
 * Address ranges: 1800574a8-180057776
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800574a8(longlong param_1,ulonglong param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong local_res10 [3];
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  ulonglong uVar5;
  
  lVar8 = *(longlong *)(param_1 + 8);
  plVar9 = (longlong *)&DAT_00000008;
  local_40 = 0xffffffff;
  iVar1 = *(int *)(param_2 + 0x10);
  local_3c = 1;
  uVar7 = *(undefined8 *)(*(longlong *)(lVar8 + 0x1508) + 0xb78);
  local_res10[0] = param_2;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = uVar7;
  local_3b = param_4;
  if (iVar1 == 8) {
    lVar8 = *(longlong *)(lVar8 + 0x1500);
LAB_180057715:
    cVar3 = FUN_1800ec420(*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar8 + 0x18),uVar7,
                          (undefined8 *)&local_60);
    if (cVar3 == '\0') goto LAB_180057740;
    plVar9 = (longlong *)CONCAT44(uStack_54,uStack_58);
    uVar12 = local_50;
  }
  else {
    if (iVar1 == 9) {
      uVar12 = *(uint *)(param_1 + 0x38);
      if (uVar12 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x30);
        uVar11 = 0;
        uVar6 = uVar12;
        do {
          uVar4 = uVar6 + uVar11 >> 1;
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ulonglong *)(lVar8 + uVar5 * 0x38);
          if (uVar2 <= param_2) {
            if (param_2 <= uVar2) break;
            uVar11 = uVar4 + 1;
            uVar5 = (ulonglong)uVar11;
            uVar4 = uVar6;
          }
          uVar6 = uVar4;
        } while (uVar6 != uVar11);
        if (((uint)uVar5 != uVar12) && (*(ulonglong *)(uVar5 * 0x38 + lVar8) == param_2)) {
          plVar9 = (longlong *)(lVar8 + 0x18 + uVar5 * 0x38);
        }
      }
      if (*plVar9 == 0) {
        FUN_180057a34(param_1 + 0x28,local_res10);
        cVar3 = FUN_1800ec420(*(longlong **)(param_1 + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78),
                              (undefined8 *)&local_60);
        uVar12 = local_50;
        uVar7 = CONCAT44(uStack_5c,local_60);
        if (cVar3 != '\0') {
          FUN_1800e41fc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508),uVar7,0,local_50);
        }
      }
      else {
        uVar13 = (undefined4)*plVar9;
        uVar14 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_58 = (undefined4)plVar9[1];
        uStack_54 = *(undefined4 *)((longlong)plVar9 + 0xc);
        uVar12 = *(uint *)(plVar9 + 2);
        uStack_4c = *(undefined4 *)((longlong)plVar9 + 0x14);
        uStack_48 = (undefined4)plVar9[3];
        uStack_44 = *(undefined4 *)((longlong)plVar9 + 0x1c);
        local_60 = uVar13;
        uStack_5c = uVar14;
        local_50 = uVar12;
        FUN_180057a34(param_1 + 0x28,local_res10);
        uVar7 = CONCAT44(uVar14,uVar13);
      }
      FUN_1800e4238(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508),uVar7,0,uVar12);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1508);
      FUN_1800e2604(lVar8);
      uVar10 = 0;
    }
    else {
      if (iVar1 != 10) {
        if (iVar1 != 0xb) {
          return;
        }
        FUN_180057a34(param_1 + 0x28,local_res10);
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1500);
        uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78);
        goto LAB_180057715;
      }
      cVar3 = FUN_1800ec420(*(longlong **)(param_1 + 0x20),
                            *(undefined8 *)(*(longlong *)(lVar8 + 0x1500) + 0x18),uVar7,
                            (undefined8 *)&local_60);
      uVar12 = local_50;
      if (cVar3 == '\0') {
        FUN_180055c0c(param_2,0,param_3,'\x01');
        return;
      }
      FUN_1800e4238(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508),CONCAT44(uStack_5c,local_60),
                    2,local_50);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1508);
      FUN_1800e2604(lVar8);
      uVar7 = CONCAT44(uStack_5c,local_60);
      uVar10 = 2;
    }
    plVar9 = (longlong *)CONCAT44(uStack_54,uStack_58);
    (**(code **)(**(longlong **)(lVar8 + 0x688) + 0x1b0))
              (*(longlong **)(lVar8 + 0x688),uVar7,uVar10,uVar12,1,plVar9,(ulonglong)uVar12 << 3);
  }
  FUN_1800572ec(param_1,param_2,*(longlong **)(param_1 + 0x18),plVar9,uVar12);
LAB_180057740:
  *(undefined8 *)(param_2 + 0x18) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18);
  *(undefined8 *)(param_2 + 0x20) = local_68;
  FUN_1800570f4(param_1,&local_78);
  return;
}

