/*
 * FUN_180023818 at 180023818
 * undefined __fastcall FUN_180023818(longlong * param_1, longlong param_2, undefined8 * param_3)
 * Address ranges: 180023818-180023bcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023818(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_res8;
  undefined4 local_resc;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_30 [6];
  
  *(undefined4 *)(param_1[1] + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1[1] + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1[1] + 0x14) = *(undefined4 *)(param_2 + 0x14);
  lVar5 = 0;
  do {
    *(undefined1 *)(lVar5 + 0x21 + param_1[1]) = *(undefined1 *)(param_2 + 0x21 + lVar5);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 2);
  *(undefined4 *)(param_1[1] + 0xae) = *(undefined4 *)(param_2 + 0xae);
  *(undefined4 *)(param_1[1] + 0xb2) = *(undefined4 *)(param_2 + 0xb2);
  *(undefined4 *)(param_1[1] + 0xb6) = *(undefined4 *)(param_2 + 0xb6);
  *(undefined4 *)(param_1[1] + 0xba) = *(undefined4 *)(param_2 + 0xba);
  *(undefined4 *)(param_1[1] + 0xc6) = *(undefined4 *)(param_2 + 0xc6);
  *(undefined4 *)(param_1[1] + 0xda) = *(undefined4 *)(param_2 + 0xda);
  *(undefined4 *)(param_1[1] + 0xde) = *(undefined4 *)(param_2 + 0xde);
  *(undefined1 *)(param_1[1] + 0x55) = *(undefined1 *)(param_2 + 0x55);
  *(undefined1 *)(param_1[1] + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(param_1[1] + 0x57) = *(undefined1 *)(param_2 + 0x57);
  if (param_3 == (undefined8 *)0x0) {
    puVar3 = FUN_180023618((longlong)param_1,local_30,param_2);
    uVar6 = *puVar3;
    uVar8 = puVar3[1];
    local_48 = *(undefined8 *)puVar3;
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    uStack_40 = *(undefined8 *)(puVar3 + 2);
    uVar7 = *(undefined8 *)(puVar3 + 4);
    local_38 = uVar7;
    uVar4 = FUN_180023734((longlong)param_1,param_2,(uint *)&local_48);
    if ((char)uVar4 == '\0') {
      lVar5 = param_1[1];
      if (*(int *)(lVar5 + 0x3f) == *(int *)(param_2 + 0x3f)) {
        if (*(char *)(lVar5 + 0x54) != *(char *)(param_2 + 0x54)) {
          *(char *)(lVar5 + 0x54) = *(char *)(param_2 + 0x54);
          (**(code **)(*(longlong *)param_1[0x630] + 0x38))();
        }
      }
      else {
        *(int *)(lVar5 + 0x3f) = *(int *)(param_2 + 0x3f);
        (**(code **)(*(longlong *)param_1[0x630] + 0x30))();
      }
      goto LAB_1800239cb;
    }
  }
  else {
    uVar4 = *param_3;
    uVar1 = param_3[1];
    uVar7 = param_3[2];
    local_48._0_4_ = (uint)uVar4;
    local_48._4_4_ = (uint)((ulonglong)uVar4 >> 0x20);
    uStack_40._0_4_ = (uint)uVar1;
    uStack_40._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
    uVar6 = (uint)local_48;
    uVar8 = local_48._4_4_;
    uVar9 = (uint)uStack_40;
    uVar10 = uStack_40._4_4_;
    local_48 = uVar4;
    uStack_40 = uVar1;
    local_38 = uVar7;
  }
  *(uint *)(param_1 + 0x16) = uVar6;
  *(int *)((longlong)param_1 + 0xc4) = (int)uVar7;
  *(undefined4 *)(param_1 + 0x19) = local_38._4_4_;
  *(uint *)((longlong)param_1 + 0xb4) = uVar8;
  *(uint *)(param_1 + 0x17) = uVar9;
  *(uint *)((longlong)param_1 + 0xbc) = uVar10;
  *(undefined4 *)(param_1[1] + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)(param_1[1] + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined4 *)(param_1[1] + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined4 *)(param_1[1] + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)(param_1[1] + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  *(undefined4 *)(param_1[1] + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1[1] + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1[1] + 0xc2) = *(undefined4 *)(param_2 + 0xc2);
  FUN_180023794(param_1);
LAB_1800239cb:
  *(undefined1 *)(param_1[1] + 0x50) = *(undefined1 *)(param_2 + 0x50);
  (**(code **)(*param_1 + 0x60))(param_1,param_1 + 0x22e);
  uVar2 = 0;
  *(undefined4 *)(param_1[1] + 0x4b) = *(undefined4 *)(param_2 + 0x4b);
  *(undefined1 *)(param_1[1] + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
  do {
    lVar5 = uVar2 * 0x41;
    (**(code **)(*param_1 + 0x270))
              (param_1,uVar2,*(undefined1 *)((longlong)param_1 + lVar5 + 0x163),
               *(undefined1 *)((longlong)param_1 + lVar5 + 0x164));
    (**(code **)(*param_1 + 0x298))
              (param_1,uVar2,*(undefined1 *)((longlong)param_1 + lVar5 + 0x171),
               *(undefined4 *)((longlong)param_1 + lVar5 + 0x172));
    uVar6 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar6;
  } while (uVar6 < 3);
  lVar5 = 0;
  do {
    *(undefined1 *)(lVar5 + 0x52 + param_1[1]) = *(undefined1 *)(param_2 + 0x52 + lVar5);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 2);
  *(undefined4 *)(param_1[1] + 0x9e) = *(undefined4 *)(param_2 + 0x9e);
  *(undefined4 *)(param_1[1] + 0xca) = *(undefined4 *)(param_2 + 0xca);
  *(undefined4 *)(param_1[1] + 0xc2) = *(undefined4 *)(param_2 + 0xc2);
  *(undefined1 *)(param_1[1] + 0xe6) = *(undefined1 *)(param_2 + 0xe6);
  *(undefined4 *)(param_1[1] + 0xeb) = *(undefined4 *)(param_2 + 0xeb);
  *(undefined4 *)(param_1[1] + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)(param_1[1] + 0xef) = *(undefined4 *)(param_2 + 0xef);
  *(undefined1 *)(param_1[1] + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1[1] + 8) = *(undefined4 *)(param_2 + 8);
  local_res8 = *(uint *)(param_1 + 0x16);
  local_resc = *(undefined4 *)((longlong)param_1 + 0xb4);
  FUN_1800211b0(param_1[0x630],&local_res8);
  uVar2 = FUN_1800506dc(*(longlong *)(*(longlong *)(param_1[0x630] + 8) + 0x2978),
                        *(longlong *)(param_1[0x630] + 0x10));
  if ((uint)*(byte *)(param_1[1] + 0x20) != ((uint)uVar2 & 0xff ^ 1)) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

