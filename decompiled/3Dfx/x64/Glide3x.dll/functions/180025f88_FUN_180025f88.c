/*
 * FUN_180025f88 at 180025f88
 * ulonglong __fastcall FUN_180025f88(longlong param_1)
 * Address ranges: 180025f88-180026294
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180025f88(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_d8 [6];
  longlong *local_a8 [3];
  longlong *local_90 [3];
  longlong *local_78 [3];
  longlong *local_60 [2];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar9 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_18004fa04(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),2,(longlong)&local_48,
                0);
  lVar3 = *(longlong *)(param_1 + 0x140);
  lVar8 = param_1 + 0x448;
  iVar10 = *(int *)(*(longlong *)(lVar3 + 8) + 0x3f);
  local_res10 = (longlong *)0x0;
  local_res8 = (longlong *)0x0;
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  *(int *)(param_1 + 0x30) = iVar10;
  uVar1 = *(undefined4 *)(lVar3 + 0xb0);
  uVar2 = *(undefined4 *)(lVar3 + 0xb4);
  uVar6 = FUN_1800297a4(lVar8,uVar1,uVar2,iVar10,*(byte *)(*(longlong *)(lVar3 + 8) + 0x54),
                        &local_res10,&local_res8);
  if ((char)uVar6 != '\0') {
    uVar7 = FUN_1800294f4(param_1 + 0x148,uVar1,uVar2,*(int *)(param_1 + 0x30),local_d8,local_d8 + 3
                          ,local_d8 + 6,local_d8 + 9,local_d8 + 0xc,local_d8 + 0xf);
    if ((char)uVar7 != '\0') {
      uVar7 = FUN_1800294f4(param_1 + 0x2c8,uVar1,uVar2,*(int *)(param_1 + 0x30),local_d8 + 1,
                            local_d8 + 4,local_d8 + 7,local_d8 + 10,local_d8 + 0xd,local_d8 + 0x10);
      if ((char)uVar7 != '\0') {
        uVar7 = FUN_1800294f4(lVar8,uVar1,uVar2,*(int *)(param_1 + 0x30),local_d8 + 2,local_d8 + 5,
                              local_d8 + 8,local_d8 + 0xb,local_d8 + 0xe,local_50);
        if ((char)uVar7 != '\0') {
          FUN_180029890(lVar8);
          *(longlong **)(param_1 + 0x5a8) = local_res10;
          *(longlong **)(param_1 + 0x5b0) = local_res8;
          do {
            lVar8 = lVar9 * 0x180;
            FUN_1800296f4((uint *)(lVar8 + param_1 + 0x148));
            plVar4 = local_d8[lVar9 + 9];
            *(longlong **)(param_1 + 0x218 + lVar8) = local_d8[lVar9];
            plVar5 = local_d8[lVar9 + 3];
            *(longlong **)(param_1 + 0x230 + lVar8) = plVar4;
            plVar4 = local_d8[lVar9 + 0xc];
            *(longlong **)(param_1 + 0x220 + lVar8) = plVar5;
            plVar5 = local_d8[lVar9 + 6];
            *(longlong **)(param_1 + 0x238 + lVar8) = plVar4;
            plVar4 = local_d8[lVar9 + 0xf];
            lVar9 = lVar9 + 1;
            *(longlong **)(param_1 + 0x228 + lVar8) = plVar5;
            *(longlong **)(param_1 + 0x240 + lVar8) = plVar4;
            *(undefined4 *)(param_1 + 0x170 + lVar8) = uVar1;
            *(undefined4 *)(param_1 + 0x174 + lVar8) = uVar2;
            *(undefined4 *)(param_1 + 0x178 + lVar8) = *(undefined4 *)(param_1 + 0x30);
          } while (lVar9 != 3);
          return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
        }
        (**(code **)(*local_d8[1] + 0x10))();
        (**(code **)(*local_d8[4] + 0x10))();
        (**(code **)(*local_a8[1] + 0x10))();
        (**(code **)(*local_90[1] + 0x10))();
        (**(code **)(*local_78[1] + 0x10))();
        (**(code **)(*local_60[1] + 0x10))();
      }
      (**(code **)(*local_d8[0] + 0x10))();
      (**(code **)(*local_d8[3] + 0x10))();
      (**(code **)(*local_a8[0] + 0x10))();
      (**(code **)(*local_90[0] + 0x10))();
      (**(code **)(*local_78[0] + 0x10))();
      (**(code **)(*local_60[0] + 0x10))();
    }
    (**(code **)(*local_res8 + 0x10))();
    uVar6 = (**(code **)(*local_res10 + 0x10))();
  }
  return uVar6 & 0xffffffffffffff00;
}

