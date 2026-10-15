/*
 * FUN_180024918 at 180024918
 * undefined __fastcall FUN_180024918(longlong param_1, longlong param_2, uint param_3, ulonglong param_4, uint param_5, uint param_6)
 * Address ranges: 180024918-180024c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180024918(longlong param_1,longlong param_2,uint param_3,ulonglong param_4,uint param_5,
                  uint param_6)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar6;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar7;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [3];
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar5 = param_4;
  FUN_18000f41c(*(longlong *)(param_1 + 0x140),'\0');
  cVar1 = *(char *)(param_2 + 0x94);
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2d34) =
       *(undefined4 *)((ulonglong)(-(uint)(cVar1 != '\0') & 4) + 8 + param_2);
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_48 = 0;
  local_58[2] = (float)*(uint *)(param_2 + 0x20);
  local_44 = 0x3f800000;
  local_4c = (float)*(uint *)(param_2 + 0x24);
  FUN_18004f630(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),local_58);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c90) = (float)*(uint *)(param_2 + 0x20);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c94) = (float)*(uint *)(param_2 + 0x24);
  DAT_18006d744 = 0xf;
  DAT_18006d764 = 0xf;
  _DAT_18006d6a4 = 0;
  FUN_18004f248(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),(int *)&DAT_18006d720,
                uVar5,-1);
  lVar2 = *(longlong *)(param_1 + 0x140);
  FUN_18004f2bc(*(longlong *)(lVar2 + 0x3330),(ulonglong)*(uint *)(lVar2 + 0x3338),
                (int *)&DAT_18006d6e8,*(int *)(lVar2 + 0x2b2c));
  FUN_18004f434(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),(uint *)&DAT_18006d688
               );
  if (*(longlong *)(param_2 + 0xd0) != *(longlong *)(param_2 + 0xe8)) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    (**(code **)(*plVar3 + 0x1c8))
              (plVar3,*(longlong *)(param_2 + 0xe8),0,*(longlong *)(param_2 + 0xd0),
               (ulonglong)uVar6 << 0x20,CONCAT44(uVar7,*(undefined4 *)(param_2 + 4)));
  }
  uVar6 = *(uint *)(param_2 + 0x24);
  local_78 = (float)*(uint *)(param_2 + 0x28) / (float)*(uint *)(param_2 + 0x20);
  local_60 = (float)param_5;
  uVar5 = (ulonglong)(uVar6 - (int)param_4);
  if (*(int *)(param_2 + 0x70) != 1) {
    uVar5 = param_4 & 0xffffffff;
  }
  uVar4 = uVar6 - param_6;
  if (*(int *)(param_2 + 0x70) != 1) {
    uVar4 = param_6;
  }
  local_68 = (float)param_3;
  local_6c = (float)*(uint *)(param_2 + 0x2c) / (float)uVar6;
  local_70 = local_60 * local_78;
  local_64 = (float)(param_4 & 0xffffffff);
  local_5c = (float)param_6;
  local_78 = local_68 * local_78;
  local_74 = (float)uVar5 * local_6c;
  local_6c = (float)uVar4 * local_6c;
  FUN_180024710(param_1,&local_68,&local_78,
                *(longlong *)
                 (param_1 + 0xbc8 + (ulonglong)(-(uint)(*(char *)(param_2 + 0x48) != '\0') & 8)),
                *(undefined8 *)(param_2 + 0xf0),0,
                *(undefined8 *)(param_2 + 0x110 + (ulonglong)(-(uint)(cVar1 != '\0') & 0x30)),
                *(undefined8 *)(param_2 + 0x118 + (ulonglong)(-(uint)(cVar1 != '\0') & 0x30)),0,0);
  FUN_18000f3a4(*(longlong *)(param_1 + 0x140));
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
  return;
}

