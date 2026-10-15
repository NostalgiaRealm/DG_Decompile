/*
 * FUN_180035db0 at 180035db0
 * undefined8 __cdecl FUN_180035db0(longlong param_1)
 * Address ranges: 180035db0-1800360fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180035db0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0 [6];
  longlong *local_c0 [3];
  longlong *local_a8 [3];
  longlong *local_90 [3];
  longlong *local_78 [2];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  FUN_180051780(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),2,(longlong)&local_60,
                0);
  lVar8 = *(longlong *)(param_1 + 0x140);
  iVar4 = *(int *)(*(longlong *)(lVar8 + 8) + 0x3f);
  local_100 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x30) = iVar4;
  uVar2 = *(undefined4 *)(lVar8 + 0xb0);
  uVar3 = *(undefined4 *)(lVar8 + 0xb4);
  uVar6 = FUN_18003b1a0(param_1 + 0x448,uVar2,uVar3,iVar4,*(byte *)(*(longlong *)(lVar8 + 8) + 0x54)
                        ,&local_f8,&local_100);
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_18003aee0(param_1 + 0x148,uVar2,uVar3,*(int *)(param_1 + 0x30),local_f0,local_f0 + 3
                          ,local_f0 + 6,local_f0 + 9,local_f0 + 0xc,local_f0 + 0xf);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_18003aee0(param_1 + 0x2c8,uVar2,uVar3,*(int *)(param_1 + 0x30),local_f0 + 1,
                            local_f0 + 4,local_f0 + 7,local_f0 + 10,local_f0 + 0xd,local_f0 + 0x10);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_18003aee0(param_1 + 0x448,uVar2,uVar3,*(int *)(param_1 + 0x30),local_f0 + 2,
                              local_f0 + 5,local_f0 + 8,local_f0 + 0xb,local_f0 + 0xe,auStack_68);
        if ((uVar6 & 1) != 0) {
          if (*(char *)(param_1 + 0x490) != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x5b0) + 0x10))();
            *(undefined8 *)(param_1 + 0x5b0) = 0;
            (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x10))();
          }
          lVar8 = 0;
          *(longlong **)(param_1 + 0x5a8) = local_f8;
          *(longlong **)(param_1 + 0x5b0) = local_100;
          do {
            lVar1 = param_1 + lVar8 * 0x180;
            FUN_180050888(*(longlong *)(lVar1 + 0x208),*(uint *)(lVar1 + 0x148),
                          *(longlong **)(lVar1 + 0x238));
            *(undefined8 *)(lVar1 + 0x238) = 0;
            FUN_180050888(*(longlong *)(lVar1 + 0x208),*(uint *)(lVar1 + 0x148),
                          *(longlong **)(lVar1 + 0x240));
            *(undefined8 *)(lVar1 + 0x240) = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x230) + 0x10))();
            *(undefined8 *)(lVar1 + 0x230) = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x228) + 0x10))();
            *(undefined8 *)(lVar1 + 0x228) = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x220) + 0x10))();
            *(undefined8 *)(lVar1 + 0x220) = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x10))();
            plVar7 = local_f0[lVar8 + 3];
            *(longlong **)(lVar1 + 0x218) = local_f0[lVar8];
            *(longlong **)(lVar1 + 0x220) = plVar7;
            plVar9 = local_f0[lVar8 + 6];
            plVar7 = local_f0[lVar8 + 9];
            *(undefined4 *)(lVar1 + 0x170) = uVar2;
            *(undefined4 *)(lVar1 + 0x174) = uVar3;
            *(longlong **)(lVar1 + 0x228) = plVar9;
            *(longlong **)(lVar1 + 0x230) = plVar7;
            plVar7 = local_f0[lVar8 + 0xf];
            lVar5 = lVar8 + 0xc;
            lVar8 = lVar8 + 1;
            *(longlong **)(lVar1 + 0x238) = local_f0[lVar5];
            *(longlong **)(lVar1 + 0x240) = plVar7;
            *(undefined4 *)(lVar1 + 0x178) = *(undefined4 *)(param_1 + 0x30);
          } while (lVar8 != 3);
          return 1;
        }
        (**(code **)(*local_f0[1] + 0x10))();
        (**(code **)(*local_f0[4] + 0x10))();
        (**(code **)(*local_c0[1] + 0x10))();
        (**(code **)(*local_a8[1] + 0x10))();
        (**(code **)(*local_90[1] + 0x10))();
        (**(code **)(*local_78[1] + 0x10))();
      }
      (**(code **)(*local_f0[0] + 0x10))();
      (**(code **)(*local_f0[3] + 0x10))();
      (**(code **)(*local_c0[0] + 0x10))();
      (**(code **)(*local_a8[0] + 0x10))();
      (**(code **)(*local_90[0] + 0x10))();
      (**(code **)(*local_78[0] + 0x10))();
    }
    (**(code **)(*local_100 + 0x10))();
    (**(code **)(*local_f8 + 0x10))();
  }
  return 0;
}

