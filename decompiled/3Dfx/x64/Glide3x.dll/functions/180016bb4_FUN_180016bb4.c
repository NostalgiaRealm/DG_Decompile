/*
 * FUN_180016bb4 at 180016bb4
 * undefined __fastcall FUN_180016bb4(longlong param_1, longlong param_2, uint param_3, uint param_4, uint param_5, uint param_6, char param_7)
 * Address ranges: 180016bb4-180017004
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016bb4(longlong param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,char param_7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
  bVar7 = FUN_18000c348(*(longlong *)(param_1 + 0x140));
  *(bool *)(*(longlong *)(param_1 + 0x140) + 0x3458) = bVar7;
  cVar1 = *(char *)(param_2 + 0x94);
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2d34) =
       *(undefined4 *)((ulonglong)(-(uint)(cVar1 != '\0') & 4) + 8 + param_2);
  local_58 = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  local_50 = (float)*(uint *)(param_2 + 0x20);
  local_4c = (float)*(uint *)(param_2 + 0x24);
  FUN_18004ae78(*(longlong *)(lVar4 + 0x1508),1,(longlong)&local_58);
  local_80 = *(undefined4 *)(param_2 + 0x20);
  local_7c = *(undefined4 *)(param_2 + 0x24);
  local_88 = 0;
  FUN_18004adcc(*(longlong *)(lVar4 + 0x1508),1,(longlong)&local_88);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c90) = (float)*(uint *)(param_2 + 0x20);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c94) = (float)*(uint *)(param_2 + 0x24);
  uVar8 = FUN_18000d928((longlong *)(lVar4 + 0x1978),(int *)&DAT_180062970);
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33e0) = uVar8;
  uVar8 = FUN_18000dbc8((longlong *)(lVar4 + 0x1960),(int *)&DAT_1800628c8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33f8) = uVar8;
  uVar8 = FUN_18000dad8((longlong *)(lVar4 + 0x19a8),(uint *)&DAT_180062900);
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33f0) = uVar8;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x345a) = 1;
  if (*(ulonglong *)(param_2 + 0xd8) != *(ulonglong *)(param_2 + 0xe0)) {
    FUN_18004a068(*(longlong *)(lVar4 + 0x1508),*(ulonglong *)(param_2 + 0xe0),0,0,0x1000);
    FUN_18004a068(*(longlong *)(lVar4 + 0x1508),*(ulonglong *)(param_2 + 0xd8),0,0,0x2000);
    FUN_18004af4c(*(longlong *)(lVar4 + 0x1508),*(undefined8 *)(param_2 + 0xe0),0,
                  *(undefined8 *)(param_2 + 0xd8),0,*(undefined4 *)(param_2 + 4));
  }
  uVar2 = *(uint *)(param_2 + 0x24);
  local_68 = (float)param_3;
  local_60 = (float)param_5;
  uVar5 = uVar2 - param_4;
  if (*(int *)(param_2 + 0x70) != 1) {
    uVar5 = param_4;
  }
  local_70 = (float)*(uint *)(param_2 + 0x28) / (float)*(uint *)(param_2 + 0x20);
  uVar6 = uVar2 - param_6;
  if (*(int *)(param_2 + 0x70) != 1) {
    uVar6 = param_6;
  }
  local_78 = local_68 * local_70;
  local_6c = (float)*(uint *)(param_2 + 0x2c) / (float)uVar2;
  local_70 = local_60 * local_70;
  local_64 = (float)param_4;
  local_5c = (float)param_6;
  local_74 = (float)uVar5 * local_6c;
  uVar9 = (ulonglong)(-(uint)(cVar1 != '\0') & 0x30);
  local_6c = (float)uVar6 * local_6c;
  uVar2 = *(uint *)((ulonglong)(-(uint)(cVar1 != '\0') & 0x30) + 300 + param_2);
  uVar3 = *(undefined4 *)((ulonglong)(-(uint)(cVar1 != '\0') & 0x30) + 0x134 + param_2);
  FUN_180016448(param_1,&local_68,&local_78,
                *(undefined8 *)
                 (param_1 + 0xb58 + (ulonglong)(-(uint)(*(char *)(param_2 + 0x48) != '\0') & 8)),
                *(ulonglong *)(param_2 + 0xe0),0,*(ulonglong *)(uVar9 + 0x110 + param_2),
                *(ulonglong *)((ulonglong)(-(uint)(cVar1 != '\0') & 0x30) + 0x118 + param_2),0,uVar3
                ,uVar3,*(undefined4 *)(param_2 + 0x108),1,*(uint *)(param_2 + 0xe8),
                *(uint *)(param_2 + 0x100),uVar2,uVar2 + 1,0xffffffff,1,0,0);
  if (param_7 != '\0') {
    FUN_18004a068(*(longlong *)(lVar4 + 0x1508),*(ulonglong *)(uVar9 + 0x110 + param_2),0,0,0);
    uVar8 = FUN_18004a144(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508));
    *(undefined8 *)(param_2 + 0xd0) = uVar8;
  }
  FUN_18000d268(*(longlong *)(param_1 + 0x140));
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x32f1) = 1;
  return;
}

