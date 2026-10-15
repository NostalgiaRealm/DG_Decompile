/*
 * FUN_180014188 at 180014188
 * undefined __cdecl FUN_180014188(longlong * param_1, longlong param_2, undefined8 * param_3)
 * Address ranges: 180014188-18001451f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014188(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong extraout_x11;
  undefined8 extraout_x11_00;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 extraout_d16;
  undefined8 uVar9;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint auStack_40 [8];
  
  *(undefined4 *)(param_1[1] + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1[1] + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1[1] + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1[1] + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1[1] + 0x22) = *(undefined1 *)(param_2 + 0x22);
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
    puVar3 = FUN_180013e48((longlong)param_1,auStack_40,param_2);
    uVar9 = *(undefined8 *)(puVar3 + 2);
    local_60 = *(undefined8 *)puVar3;
    local_50 = *(undefined8 *)(puVar3 + 4);
    uStack_58 = uVar9;
    uVar7 = FUN_180013f48((longlong)param_1,param_2,(int *)&local_60);
    uVar4 = extraout_x11_00;
    uVar8 = extraout_d16;
    if ((uVar7 & 1) == 0) {
      lVar5 = param_1[1];
      if (*(int *)(lVar5 + 0x3f) == *(int *)(param_2 + 0x3f)) {
        if (*(char *)(lVar5 + 0x54) == *(char *)(param_2 + 0x54)) goto LAB_1800142f4;
        *(char *)(lVar5 + 0x54) = *(char *)(param_2 + 0x54);
        pcVar6 = *(code **)(*(longlong *)param_1[0x660] + 0x38);
      }
      else {
        *(int *)(lVar5 + 0x3f) = *(int *)(param_2 + 0x3f);
        pcVar6 = *(code **)(*(longlong *)param_1[0x660] + 0x30);
      }
      (*pcVar6)();
      goto LAB_1800142f4;
    }
  }
  else {
    uVar4 = param_3[2];
    uVar9 = param_3[1];
    uVar8 = *param_3;
    local_60 = uVar8;
    uStack_58 = uVar9;
    local_50 = uVar4;
  }
  *(int *)(param_1 + 0x16) = (int)uVar8;
  *(int *)((longlong)param_1 + 0xb4) = (int)((ulonglong)uVar8 >> 0x20);
  *(int *)(param_1 + 0x17) = (int)uVar9;
  *(int *)((longlong)param_1 + 0xbc) = (int)((ulonglong)uVar9 >> 0x20);
  *(int *)((longlong)param_1 + 0xc4) = (int)uVar4;
  *(int *)(param_1 + 0x19) = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(param_1[1] + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)(param_1[1] + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined4 *)(param_1[1] + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined4 *)(param_1[1] + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)(param_1[1] + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  *(undefined4 *)(param_1[1] + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1[1] + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1[1] + 0xc2) = *(undefined4 *)(param_2 + 0xc2);
  FUN_180013fd0(param_1);
LAB_1800142f4:
  *(undefined1 *)(param_1[1] + 0x50) = *(undefined1 *)(param_2 + 0x50);
  (**(code **)(*param_1 + 0x68))(param_1,param_1 + 0x23d);
  uVar7 = 0;
  *(undefined4 *)(param_1[1] + 0x4b) = *(undefined4 *)(param_2 + 0x4b);
  *(undefined1 *)(param_1[1] + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
  do {
    (**(code **)(*param_1 + 0x2b0))
              (param_1,uVar7,*(undefined1 *)((longlong)param_1 + uVar7 * 0x55 + 0x1a1),
               *(undefined1 *)((longlong)param_1 + uVar7 * 0x55 + 0x1a2));
    uVar4 = (**(code **)(*param_1 + 0x2d8))
                      (param_1,uVar7,*(undefined1 *)((longlong)param_1 + uVar7 * 0x55 + 0x1af),
                       *(undefined4 *)((longlong)param_1 + uVar7 * 0x55 + 0x1b0));
    uVar1 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar1;
  } while (uVar1 < 3);
  *(undefined1 *)(param_1[1] + 0x52) = *(undefined1 *)(param_2 + 0x52);
  *(undefined1 *)(param_1[1] + 0x53) = *(undefined1 *)(param_2 + 0x53);
  *(undefined4 *)(param_1[1] + 0x9e) = *(undefined4 *)(param_2 + 0x9e);
  *(undefined4 *)(param_1[1] + 0xca) = *(undefined4 *)(param_2 + 0xca);
  *(undefined4 *)(param_1[1] + 0xc2) = *(undefined4 *)(param_2 + 0xc2);
  *(undefined1 *)(param_1[1] + 0xe6) = *(undefined1 *)(param_2 + 0xe6);
  *(undefined4 *)(param_1[1] + 0xeb) = *(undefined4 *)(param_2 + 0xeb);
  *(undefined4 *)(param_1[1] + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)(param_1[1] + 0xef) = *(undefined4 *)(param_2 + 0xef);
  *(undefined1 *)(param_1[1] + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1[1] + 8) = *(undefined4 *)(param_2 + 8);
  local_70 = *(uint *)(param_1 + 0x16);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xb4);
  lVar5 = *(longlong *)(*(longlong *)(param_1[0x660] + 8) + 8);
  FUN_180046e20(uVar4,(uint *)&local_60,&local_70,*(uint *)(lVar5 + 0xae),*(uint *)(lVar5 + 0xb2),
                *(uint *)(lVar5 + 0xb6),(ulonglong)*(uint *)(lVar5 + 0xba));
  SetRect((LPRECT)(extraout_x11 + 0xcc),(int)local_60,local_60._4_4_,(int)uStack_58,uStack_58._4_4_)
  ;
  bVar2 = FUN_180056ee0(*(longlong *)(*(longlong *)(param_1[0x660] + 8) + 0x29f0),
                        *(longlong *)(param_1[0x660] + 0x10));
  if ((bool)*(char *)(param_1[1] + 0x20) != !bVar2) {
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  return;
}

