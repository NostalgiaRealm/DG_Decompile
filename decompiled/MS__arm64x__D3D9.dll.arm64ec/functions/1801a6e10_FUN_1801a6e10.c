/*
 * FUN_1801a6e10 at 1801a6e10
 * undefined FUN_1801a6e10(void)
 * Address ranges: 1801a6e10-1801a7163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801a6e10(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_x11;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 local_60;
  undefined1 local_58 [8];
  code *local_50;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
    if (param_3 != 0) {
      uVar2 = 2;
    }
    uVar2 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),uVar2);
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  if (param_4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938),
                          param_6 * param_7);
  }
  iVar1 = param_6 * param_7;
  *(undefined4 *)(param_1 + 6) = uVar2;
  if (param_5 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940),iVar1);
  }
  *(int *)((longlong)param_1 + 0x34) = iVar3;
  if (((param_4 == 0) || ((int)param_1[6] != -1)) && (param_5 == 0 || iVar3 != -1)) {
    if (param_2 != 0) {
      FUN_18020d168(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),&local_60,
                    *(undefined4 *)((longlong)param_1 + 0x2c),0);
      lVar7 = *(longlong *)((longlong)param_1 + 0x1c);
      if ((lVar7 == 0) || ((param_8 & 1) == 0)) {
        lVar7 = *(longlong *)((longlong)param_1 + 0x14);
      }
      FUN_18020d3a0(*param_1 + 0x6d0,(int)param_1[1],lVar7,param_2,local_60);
    }
    if (param_3 != 0) {
      FUN_18020d168(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),&local_60,
                    *(undefined4 *)((longlong)param_1 + 0x2c),1);
      lVar7 = *(longlong *)((longlong)param_1 + 0x1c);
      if ((lVar7 == 0) || ((param_8 & 1) == 0)) {
        lVar7 = *(longlong *)((longlong)param_1 + 0x14);
      }
      FUN_18020d3a0(*param_1 + 0x6d0,(int)param_1[1],lVar7,param_3,local_60);
    }
    if ((((int)param_1[6] != -1) || (*(int *)((longlong)param_1 + 0x34) != -1)) &&
       ((param_4 != 0 || (param_5 != 0)))) {
      lVar6 = *(longlong *)((longlong)param_1 + 0x1c);
      lVar7 = lVar6;
      if (lVar6 == 0) {
        lVar7 = *(longlong *)((longlong)param_1 + 0x14);
      }
      uVar8 = 0;
      if (param_7 != 0) {
        local_50 = (code *)__hybrid_os_arm64x_dispatch_icall;
        do {
          uVar10 = 0;
          if (param_6 != 0) {
            do {
              iVar1 = uVar10 + uVar8 * param_6;
              if (param_4 == 0) {
                if (lVar6 == 0) {
                  *(undefined4 *)(param_5 + 0x14) = 1;
                  uVar4 = uVar10;
                  uVar5 = uVar8;
                }
                else {
                  uVar4 = uVar8;
                  uVar5 = 1;
                }
                *(uint *)(param_5 + 0xc) = uVar4;
                *(uint *)(param_5 + 0x10) = uVar5;
                FUN_18020d168(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940),
                              local_58,*(undefined4 *)((longlong)param_1 + 0x34),iVar1);
                uVar9 = (*local_50)();
                (*extraout_x11)(uVar9,lVar7,param_5);
              }
              else {
                if (lVar6 == 0) {
                  *(undefined8 *)(param_4 + 0x10) = 1;
                  uVar4 = uVar10;
                  uVar5 = uVar8;
                }
                else {
                  uVar4 = uVar8;
                  uVar5 = 1;
                }
                *(uint *)(param_4 + 8) = uVar4;
                *(uint *)(param_4 + 0xc) = uVar5;
                FUN_18020d168(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938),
                              &local_60,(int)param_1[6],iVar1);
                FUN_18020d3e8(*param_1 + 0x6d0,(int)param_1[1],lVar7,param_4,local_60);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_7);
      }
    }
    uVar9 = 1;
  }
  else {
    lVar7 = param_1[6];
    uVar9 = 0;
    if ((int)lVar7 != -1) {
      lVar6 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938);
      thunk_FUN_1802236f8(lVar6 + 0x28);
      FUN_18020c678(lVar6,(int)lVar7,iVar1);
      thunk_FUN_18022370c(lVar6 + 0x28);
    }
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    if (iVar3 != -1) {
      lVar7 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940);
      thunk_FUN_1802236f8(lVar7 + 0x28);
      FUN_18020c678(lVar7,iVar3,iVar1);
      thunk_FUN_18022370c(lVar7 + 0x28);
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  }
  return uVar9;
}

