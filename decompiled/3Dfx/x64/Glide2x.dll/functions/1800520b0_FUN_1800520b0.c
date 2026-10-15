/*
 * FUN_1800520b0 at 1800520b0
 * undefined __fastcall FUN_1800520b0(longlong param_1, longlong param_2, RECT * param_3)
 * Address ranges: 1800520b0-1800525ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800520b0(longlong param_1,longlong param_2,RECT *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  longlong local_res10;
  longlong local_res20;
  uint uVar10;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined1 local_98 [16];
  int local_88;
  int local_80;
  undefined1 local_60 [32];
  undefined4 local_40;
  
  plVar1 = *(longlong **)(param_2 + 0xdb8);
  if (plVar1 != (longlong *)0x0) {
    lVar9 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_98);
    piVar8 = (int *)(*(longlong *)(lVar9 + 0x1e08 + param_1) + 0x684);
    *piVar8 = *piVar8 + 1;
    lVar2 = *(longlong *)(lVar9 + 0x1e08 + param_1);
    *(undefined8 *)(lVar9 + 0x9d0 + param_1) = *(undefined8 *)(lVar2 + 0xb78);
    cVar4 = FUN_180046284(*(longlong *)(lVar9 + 0x2250 + param_1),2,
                          *(undefined8 *)(*(longlong *)(lVar9 + 0x1e00 + param_1) + 0x18),
                          *(undefined8 *)(lVar2 + 0xb78),&local_b8);
    if (cVar4 != '\0') {
      uVar6 = *(undefined8 *)(lVar9 + 0x9d0 + param_1);
      FUN_1800424dc(*(longlong *)(lVar9 + 0x908 + param_1) + 0x40,&local_e8,2,
                    *(longlong *)(*(longlong *)(lVar9 + 0x1e00 + param_1) + 0x18),uVar6);
      lVar2 = CONCAT44(uStack_dc,local_e0);
      if (lVar2 != 0) {
        *(longlong *)(*(longlong *)(lVar9 + 0x1e08 + param_1) + 0xb88) = param_1;
        uVar10 = (uint)((ulonglong)uVar6 >> 0x20);
        FUN_18004eac0(lVar2,param_2,param_3,local_88,local_80,(float *)lVar2,&local_108);
        plVar1 = *(longlong **)(param_2 + 0xd88 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8);
        (**(code **)(*plVar1 + 0x50))(plVar1,local_60);
        FUN_180046da0(*(longlong *)(lVar9 + 0x2238 + param_1),&local_res20,
                      *(uint *)(param_2 + 0xd98),*(int *)(param_2 + 0xd78));
        plVar3 = *(longlong **)((ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0 + param_1);
        lVar2 = *plVar3;
        plVar5 = FUN_180046da0(*(longlong *)(lVar9 + 0x2230 + param_1),&local_res10,
                               *(uint *)(param_2 + 0xdc8),0);
        (**(code **)(lVar2 + 0xc0))(plVar3,2,local_b0,*plVar5,(ulonglong)uVar10 << 0x20);
        *(undefined4 *)(lVar9 + 0x984 + param_1) = local_40;
        *(undefined4 *)(lVar9 + 0x980 + param_1) = 1;
        lVar2 = lVar9 + param_1;
        uVar6 = FUN_18001ad48((longlong *)(param_1 + 0x2260 + lVar9),(int *)&DAT_1800612a8);
        *(undefined8 *)(lVar9 + 0x968 + param_1) = uVar6;
        uVar6 = FUN_18001ac58((longlong *)(param_1 + 0x22a8 + lVar9),(uint *)&DAT_1800612e0);
        uVar7 = *(ulonglong *)(lVar2 + 0x918);
        *(undefined8 *)(lVar9 + 0x960 + param_1) = uVar6;
        *(undefined8 *)(lVar9 + 0x928 + param_1) = *(undefined8 *)(lVar9 + 0x1b80 + param_1);
        *(undefined8 *)(lVar9 + 0x920 + param_1) = *(undefined8 *)(lVar9 + 0x1ba0 + param_1);
        *(undefined8 *)(lVar9 + 0x970 + param_1) = *(undefined8 *)(lVar9 + 0x1bb0 + param_1);
        FUN_180047a30(*(longlong *)(lVar9 + 0x1e08 + param_1),uVar7);
        FUN_180047f74(*(longlong *)(lVar9 + 0x1e08 + param_1),*(longlong *)(lVar2 + 0x918));
        FUN_180047edc(*(longlong *)(lVar9 + 0x1e08 + param_1),1,&local_a8);
        FUN_18004806c(*(longlong *)(lVar9 + 0x1e08 + param_1),5);
        local_e0 = 0x200;
        uStack_dc = 0x10;
        FUN_1800483c0(*(longlong *)(lVar9 + 0x1e08 + param_1),0,1,(longlong)&local_e8);
        FUN_1800485f0(*(longlong *)(lVar9 + 0x1e08 + param_1),1,&local_res20,0,(longlong *)0x0);
        local_f8 = (int)local_108;
        local_c0 = 0;
        local_bc = 0x3f800000;
        local_c8 = local_100;
        local_f4 = (int)local_104;
        local_c4 = local_fc;
        local_f0 = (int)(local_100 + local_108);
        local_d0 = local_108;
        local_ec = (int)(local_fc + local_104);
        local_cc = local_104;
        FUN_18004886c(*(longlong *)(lVar9 + 0x1e08 + param_1),1,(longlong)&local_d0);
        FUN_1800487c0(*(longlong *)(lVar9 + 0x1e08 + param_1),1,(longlong)&local_f8);
        FUN_180047a5c(*(longlong *)(lVar9 + 0x1e08 + param_1),(ulonglong)plVar1,0,0,4);
        if (*(longlong *)(param_2 + 0xdc0) == 0) {
          piVar8 = (int *)&DAT_180064c50;
        }
        else {
          FUN_1800481d8(*(longlong *)(lVar9 + 0x1e08 + param_1),1,(ulonglong)local_a0 + local_b8);
          uVar6 = FUN_18001aaa8((longlong *)(lVar9 + param_1 + 0x2278),(int *)&DAT_180064b00);
          *(undefined8 *)(lVar9 + 0x950 + param_1) = uVar6;
          uVar7 = FUN_18004157c(param_1 + 0x22d8 + lVar9,(byte *)(lVar2 + 0x918));
          FUN_180047a30(*(longlong *)(lVar9 + 0x1e08 + param_1),uVar7);
          FUN_180048020(*(longlong *)(lVar9 + 0x1e08 + param_1),uVar7);
          FUN_180047a5c(*(longlong *)(lVar9 + 0x1e08 + param_1),*(ulonglong *)(param_2 + 0xdc0),0,0,
                        0x80);
          FUN_180048bb4(*(longlong *)(lVar9 + 0x1e08 + param_1),4,1,0,0);
          piVar8 = (int *)&DAT_180064da0;
        }
        uVar6 = FUN_18001aaa8((longlong *)(lVar9 + param_1 + 0x2278),piVar8);
        *(undefined8 *)(lVar9 + 0x950 + param_1) = uVar6;
        uVar7 = FUN_18004157c(param_1 + 0x22d8 + lVar9,(byte *)(lVar2 + 0x918));
        FUN_180048020(*(longlong *)(lVar9 + 0x1e08 + param_1),uVar7);
        FUN_180047a30(*(longlong *)(lVar9 + 0x1e08 + param_1),uVar7);
        FUN_1800481d8(*(longlong *)(lVar9 + 0x1e08 + param_1),1,local_b8);
        FUN_180047a5c(*(longlong *)(lVar9 + 0x1e08 + param_1),*(ulonglong *)(param_2 + 0xdb8),0,0,
                      0x80);
        FUN_180048bb4(*(longlong *)(lVar9 + 0x1e08 + param_1),4,1,0,0);
        lVar2 = *(longlong *)(lVar9 + 0x908 + param_1);
        if (*(int *)(lVar2 + 0x34) != 0) {
          *(undefined4 *)(lVar2 + 0x34) = 0;
        }
        lVar2 = *(longlong *)(lVar9 + 0x1e08 + param_1);
        piVar8 = (int *)(lVar2 + 0x684);
        *piVar8 = *piVar8 + -1;
        if ((*piVar8 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
          FUN_18004782c(lVar2 + 8,'\0');
        }
      }
    }
  }
  return;
}

